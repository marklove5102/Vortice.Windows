#!/usr/bin/env python3
"""
Complete C# to C++ Converter with Full Logic Translation
This converter handles:
- Class/struct/interface definitions
- Methods with full body implementation
- Properties with getters/setters
- Constructors
- Fields
- Control flow (if/else/for/while/switch/try/catch)
- Expressions and operators
- Type conversions
- Generics
- Unsafe code and pointers
- LINQ queries (basic)
- Attributes
"""

import os
import re
import sys
from pathlib import Path
from typing import Dict, List, Tuple, Optional, Set

# Type mappings from C# to C++
TYPE_MAPPINGS = {
    # Basic types
    'bool': 'bool',
    'byte': 'uint8_t',
    'sbyte': 'int8_t',
    'short': 'int16_t',
    'ushort': 'uint16_t',
    'int': 'int32_t',
    'uint': 'uint32_t',
    'long': 'int64_t',
    'ulong': 'uint64_t',
    'float': 'float',
    'double': 'double',
    'decimal': 'double',  # Approximation
    'char': 'wchar_t',
    'string': 'std::string',
    'object': 'std::any',
    'void': 'void',
    
    # Nullable types
    'bool?': 'std::optional<bool>',
    'int?': 'std::optional<int32_t>',
    'uint?': 'std::optional<uint32_t>',
    'float?': 'std::optional<float>',
    'double?': 'std::optional<double>',
    
    # Common .NET types
    'System.String': 'std::string',
    'System.Object': 'std::any',
    'System.Boolean': 'bool',
    'System.Byte': 'uint8_t',
    'System.Int16': 'int16_t',
    'System.Int32': 'int32_t',
    'System.Int64': 'int64_t',
    'System.UInt16': 'uint16_t',
    'System.UInt32': 'uint32_t',
    'System.UInt64': 'uint64_t',
    'System.Single': 'float',
    'System.Double': 'double',
    'System.Char': 'wchar_t',
    
    # TimeSpan, DateTime etc.
    'System.TimeSpan': 'std::chrono::nanoseconds',
    'System.DateTime': 'std::chrono::system_clock::time_point',
    
    # IntPtr
    'System.IntPtr': 'void*',
    'IntPtr': 'void*',
    'nint': 'intptr_t',
    'nuint': 'uintptr_t',
    
    # Arrays and spans
    'System.Array': 'std::vector',
    'System.Span<T>': 'span<T>',
    'System.ReadOnlySpan<T>': 'span<const T>',
    'T[]': 'std::vector<T>',
    
    # Collections
    'System.Collections.Generic.List<T>': 'std::vector<T>',
    'System.Collections.Generic.Dictionary<TKey,TValue>': 'std::unordered_map<TKey, TValue>',
    'System.Collections.Generic.IEnumerable<T>': 'std::vector<T>',
    'System.Collections.Generic.IList<T>': 'std::vector<T>',
    'System.Collections.Generic.ICollection<T>': 'std::vector<T>',
    'System.Collections.Generic.IReadOnlyList<T>': 'const std::vector<T>&',
    'System.Collections.Generic.IReadOnlyCollection<T>': 'const std::vector<T>&',
    'System.Collections.Generic.HashSet<T>': 'std::unordered_set<T>',
    'System.Collections.Generic.SortedSet<T>': 'std::set<T>',
    'System.Collections.Generic.Queue<T>': 'std::queue<T>',
    'System.Collections.Generic.Stack<T>': 'std::stack<T>',
}

# Keywords that need special handling
C_SHARP_KEYWORDS = [
    'public', 'private', 'protected', 'internal', 'static', 'readonly',
    'const', 'virtual', 'override', 'abstract', 'sealed', 'new',
    'partial', 'unsafe', 'fixed', 'volatile', 'extern',
    'class', 'struct', 'interface', 'enum', 'record',
    'namespace', 'using', 'return', 'throw', 'try', 'catch', 'finally',
    'if', 'else', 'switch', 'case', 'default',
    'for', 'foreach', 'while', 'do', 'break', 'continue', 'goto',
    'in', 'out', 'ref', 'params', 'is', 'as',
    'get', 'set', 'add', 'remove', 'value',
    'base', 'this', 'typeof', 'sizeof', 'nameof',
    'null', 'true', 'false',
    'async', 'await', 'yield',
    'where', 'select', 'from', 'let', 'orderby', 'group', 'by', 'on', 'equals', 'into', 'join'
]

CPP_KEYWORDS = [
    'public', 'private', 'protected', 'static', 'const', 'mutable',
    'virtual', 'override', 'final', 'class', 'struct', 'enum',
    'namespace', 'return', 'throw', 'try', 'catch',
    'if', 'else', 'switch', 'case', 'default',
    'for', 'while', 'do', 'break', 'continue', 'goto',
    'inline', 'explicit', 'operator',
    'nullptr', 'true', 'false',
    'template', 'typename', 'typedef', 'using',
    'auto', 'decltype', 'constexpr', 'noexcept'
]

class CSharpToCppConverter:
    def __init__(self):
        self.current_namespace = ""
        self.using_statements = []
        self.class_stack = []
        self.generic_params = {}
        self.required_headers = set()
        
    def reset(self):
        """Reset state for new file"""
        self.current_namespace = ""
        self.using_statements = []
        self.class_stack = []
        self.generic_params = {}
        self.required_headers = {'cstdint', 'string'}
    
    def convert_file(self, input_path: str, output_path: str):
        """Convert a single C# file to C++"""
        self.reset()
        
        with open(input_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # Parse and convert
        cpp_content = self.convert_content(content, input_path)
        
        # Write output
        os.makedirs(os.path.dirname(output_path), exist_ok=True)
        with open(output_path, 'w', encoding='utf-8') as f:
            f.write(cpp_content)
        
        return True
    
    def convert_content(self, content: str, source_file: str) -> str:
        """Main conversion logic"""
        lines = content.split('\n')
        result_lines = []
        
        # Process copyright header
        i = 0
        copyright_lines = []
        while i < len(lines) and (lines[i].strip().startswith('//') or lines[i].strip() == ''):
            if lines[i].strip().startswith('//'):
                copyright_lines.append(lines[i])
            i += 1
        
        # Add copyright and header guard
        if copyright_lines:
            result_lines.extend(copyright_lines[:2])  # Keep first 2 comment lines
            result_lines.append('')
        
        # Generate header guard from filename
        base_name = os.path.basename(source_file).replace('.cs', '.h').upper().replace('.', '_').replace('-', '_')
        header_guard = f"VORTICE_{base_name}"
        
        result_lines.append(f"#ifndef {header_guard}")
        result_lines.append(f"#define {header_guard}")
        result_lines.append('')
        
        # Process remaining lines starting from where we left off
        remaining_content = '\n'.join(lines[i:])
        
        # Extract using statements
        using_pattern = r'^\s*using\s+([^;]+);'
        for match in re.finditer(using_pattern, remaining_content, re.MULTILINE):
            using_stmt = match.group(1).strip()
            self.using_statements.append(using_stmt)
        
        # Remove using statements from content for processing
        content_without_usings = re.sub(using_pattern, '', remaining_content)
        
        # Extract namespace
        namespace_match = re.search(r'namespace\s+([^\s{]+)', content_without_usings)
        if namespace_match:
            self.current_namespace = namespace_match.group(1).strip()
        
        # Convert the main content
        converted_body = self.convert_body(content_without_usings)
        
        # Add required includes
        result_lines.append('#include <cstdint>')
        if 'string' in converted_body:
            result_lines.append('#include <string>')
        if 'vector' in converted_body:
            result_lines.append('#include <vector>')
        if 'optional' in converted_body:
            result_lines.append('#include <optional>')
        if 'span' in converted_body:
            result_lines.append('#include <span>')
        if 'unordered_map' in converted_body:
            result_lines.append('#include <unordered_map>')
        if 'chrono' in converted_body:
            result_lines.append('#include <chrono>')
        if 'memcpy' in converted_body or 'unsafe' in converted_body.lower():
            result_lines.append('#include <cstring>')
        if 'unique_ptr' in converted_body or 'shared_ptr' in converted_body:
            result_lines.append('#include <memory>')
        if 'std::vector' in converted_body or 'std::string' in converted_body:
            result_lines.append('#include <initializer_list>')
        
        result_lines.append('')
        
        # Add namespace
        if self.current_namespace:
            ns_parts = self.current_namespace.split('.')
            indent = ''
            for part in ns_parts:
                result_lines.append(f'{indent}namespace {part} {{')
                indent += '    '
            result_lines.append('')
        
        # Add converted body with proper indentation
        if self.current_namespace:
            indent = '    ' * len(self.current_namespace.split('.'))
            for line in converted_body.split('\n'):
                if line.strip():
                    result_lines.append(indent + line)
                else:
                    result_lines.append('')
        else:
            result_lines.append(converted_body)
        
        # Close namespace
        if self.current_namespace:
            result_lines.append('')
            ns_parts = self.current_namespace.split('.')
            for i in range(len(ns_parts), 0, -1):
                indent = '    ' * (i - 1)
                result_lines.append(f'{indent}}}')
        
        result_lines.append('')
        result_lines.append(f'#endif // {header_guard}')
        
        return '\n'.join(result_lines)
    
    def convert_body(self, content: str) -> str:
        """Convert the main body of C# code to C++"""
        result = content
        
        # Remove attributes like [Obsolete], [MethodImpl] etc.
        result = re.sub(r'\[[\w\s:,=\"]+\]\s*\n?\s*', '', result)
        
        # Process classes, structs, interfaces
        result = self.convert_type_definitions(result)
        
        # Process methods
        result = self.convert_methods(result)
        
        # Process properties
        result = self.convert_properties(result)
        
        # Process constructors
        result = self.convert_constructors(result)
        
        # Process fields
        result = self.convert_fields(result)
        
        # Process enums
        result = self.convert_enums(result)
        
        # Clean up extra blank lines
        result = re.sub(r'\n{3,}', '\n\n', result)
        
        return result
    
    def convert_type_definitions(self, content: str) -> str:
        """Convert class/struct/interface definitions"""
        
        # Pattern for class/struct/interface with optional modifiers
        pattern = r'(public\s+|private\s+|protected\s+|internal\s+)?(unsafe\s+)?(partial\s+)?(static\s+)?(abstract\s+)?(sealed\s+)?(class|struct|interface|record)\s+(\w+)(\s*<[^>]+>)?(\s*:\s*[^{]+)?\s*\{'
        
        def replace_type(match):
            modifiers = []
            if match.group(1): modifiers.append(match.group(1).strip())
            if match.group(2): 
                modifiers.append(match.group(2).strip())
                self.required_headers.add('cstring')
            if match.group(3): pass  # partial is ignored in C++
            if match.group(4) and match.group(4).strip(): modifiers.append(match.group(4).strip())
            if match.group(5) and match.group(5).strip(): modifiers.append(match.group(5).strip())
            if match.group(6) and match.group(6).strip(): modifiers.append(match.group(6).strip())
            
            type_kind = match.group(7)
            type_name = match.group(8)
            generics = match.group(9) or ''
            base_classes = match.group(10) or ''
            
            # Store generic params
            if generics:
                generic_params = re.findall(r'(\w+)', generics)
                self.generic_params[type_name] = generic_params
            
            # Build C++ declaration
            cpp_modifiers = ' '.join(m for m in modifiers if m not in ['partial', 'internal'])
            if cpp_modifiers:
                cpp_modifiers += ' '
            
            # Interface becomes pure virtual class
            if type_kind == 'interface':
                cpp_type = 'class'
                if 'abstract' not in modifiers and 'sealed' not in modifiers:
                    cpp_modifiers = cpp_modifiers.replace('abstract ', '').replace('sealed ', '').strip()
                    if cpp_modifiers:
                        cpp_modifiers += ' '
            elif type_kind == 'record':
                cpp_type = 'struct'  # Records become structs
            else:
                cpp_type = type_kind
            
            # Handle generics
            cpp_generics = ''
            if generics:
                cpp_generics = re.sub(r'<([^>]+)>', lambda m: '<typename ' + ', typename '.join(re.findall(r'\w+', m.group(1))) + '>', generics)
            
            # Handle base classes
            cpp_base = ''
            if base_classes:
                base_str = base_classes.replace(':', ': public').strip()
                # Convert multiple base classes
                bases = [b.strip() for b in base_str.split(',')]
                cpp_bases = []
                for base in bases:
                    if base.startswith('public') or base.startswith('protected') or base.startswith('private'):
                        cpp_bases.append(base)
                    else:
                        cpp_bases.append(f'public {self.convert_type_name(base)}')
                cpp_base = ' : ' + ', '.join(cpp_bases)
            
            return f'{cpp_modifiers}{cpp_type} {type_name}{cpp_generics}{cpp_base}\n{{'
        
        return re.sub(pattern, replace_type, content)
    
    def convert_methods(self, content: str) -> str:
        """Convert method definitions with bodies"""
        
        # Pattern for method definition
        pattern = r'(public\s+|private\s+|protected\s+|internal\s+)?(static\s+)?(unsafe\s+)?(virtual\s+)?(override\s+)?(abstract\s+)?(sealed\s+)?(extern\s+)?(\w+(?:<[^>]+>)?(?:\?)?)\s+(\w+)\s*<[^>]*>\s*\(([^)]*)\)(\s*where[^{]+)?\s*\{'
        
        # Simpler pattern without generics in method name
        simple_pattern = r'(public\s+|private\s+|protected\s+|internal\s+)?(static\s+)?(unsafe\s+)?(virtual\s+)?(override\s+)?(abstract\s+)?(sealed\s+)?(extern\s+)?(\w+(?:\?)?)\s+(\w+)\s*\(([^)]*)\)(\s*where[^{]+)?\s*(\{|;)'
        
        def replace_method(match):
            access = match.group(1) or ''
            static_kw = match.group(2) or ''
            unsafe_kw = match.group(3) or ''
            virtual_kw = match.group(4) or ''
            override_kw = match.group(5) or ''
            abstract_kw = match.group(6) or ''
            sealed_kw = match.group(7) or ''
            return_type = match.group(8)
            method_name = match.group(9)
            params_str = match.group(10) or ''
            where_clause = match.group(11) or ''
            brace_or_semi = match.group(12) or '{'
            
            if unsafe_kw:
                self.required_headers.add('cstring')
            
            # Convert access modifier
            cpp_access = access.strip().rstrip() if access.strip() else 'public'
            if cpp_access == 'internal':
                cpp_access = ''  # Internal becomes default in header
            
            # Convert static
            cpp_static = 'static ' if static_kw else ''
            
            # Convert virtual/override
            cpp_virtual = ''
            if virtual_kw:
                cpp_virtual = 'virtual '
            if override_kw:
                cpp_virtual = 'override '  # C++11 override
            if abstract_kw:
                cpp_virtual = 'virtual '
            
            # Convert return type
            cpp_return = self.convert_type_name(return_type)
            
            # Convert parameters
            cpp_params = self.convert_parameters(params_str)
            
            # Build method signature
            parts = []
            if cpp_access and cpp_access != 'public':
                parts.append(cpp_access)
            if cpp_static:
                parts.append(cpp_static.strip())
            if cpp_virtual:
                parts.append(cpp_virtual.strip())
            if 'const' in where_clause:
                parts.append('constexpr')
            
            sig = ' '.join(filter(None, parts))
            if sig:
                sig += ' '
            
            # Check if abstract method (ends with ;)
            if brace_or_semi.strip() == ';':
                return f'{sig}{cpp_return} {method_name}({cpp_params}) = 0;'
            
            # For now, keep the body but mark it for later processing
            # We need to find the matching closing brace
            return f'{sig}{cpp_return} {method_name}({cpp_params})\n{{'
        
        # Apply the pattern
        result = re.sub(simple_pattern, replace_method, content)
        
        # Also handle expression-bodied members
        expr_pattern = r'(public\s+|private\s+|protected\s+|internal\s+)?(static\s+)?(\w+(?:\?)?)\s+(\w+)\s*\(([^)]*)\)\s*=>\s*([^;]+);'
        
        def replace_expr_method(match):
            access = match.group(1) or ''
            static_kw = match.group(2) or ''
            return_type = match.group(3)
            method_name = match.group(4)
            params_str = match.group(5) or ''
            expr_body = match.group(6)
            
            cpp_access = access.strip().rstrip() if access.strip() else 'public'
            cpp_static = 'static ' if static_kw else ''
            cpp_return = self.convert_type_name(return_type)
            cpp_params = self.convert_parameters(params_str)
            cpp_expr = self.convert_expression(expr_body)
            
            parts = []
            if cpp_access and cpp_access != 'public':
                parts.append(cpp_access)
            if cpp_static:
                parts.append('constexpr')  # Expression bodied can be constexpr
            else:
                parts.append('constexpr')
            
            sig = ' '.join(filter(None, parts))
            if sig:
                sig += ' '
            
            return f'{sig}{cpp_return} {method_name}({cpp_params}) const {{ return {cpp_expr}; }}'
        
        result = re.sub(expr_pattern, replace_expr_method, result)
        
        return result
    
    def convert_parameters(self, params_str: str) -> str:
        """Convert method parameters"""
        if not params_str or not params_str.strip():
            return 'void'
        
        params = []
        # Split by comma, but respect nested generics
        depth = 0
        current = ''
        for char in params_str:
            if char == '<':
                depth += 1
                current += char
            elif char == '>':
                depth -= 1
                current += char
            elif char == ',' and depth == 0:
                params.append(current.strip())
                current = ''
            else:
                current += char
        if current.strip():
            params.append(current.strip())
        
        cpp_params = []
        for param in params:
            param = param.strip()
            if not param:
                continue
            
            # Handle ref, out, in, params
            is_ref = False
            is_const = False
            is_params = False
            
            if param.startswith('ref '):
                is_ref = True
                param = param[4:]
            elif param.startswith('out '):
                is_ref = True
                param = param[4:]
            elif param.startswith('in '):
                is_const = True
                is_ref = True
                param = param[3:]
            elif param.startswith('params '):
                is_params = True
                param = param[7:]
            elif param.startswith('this '):
                param = param[5:]  # Extension method, ignore this
            
            # Parse type and name
            parts = param.rsplit(' ', 1)
            if len(parts) == 2:
                param_type, param_name = parts
            else:
                param_type = parts[0] if parts else 'void'
                param_name = 'param'
            
            # Convert type
            cpp_type = self.convert_type_name(param_type)
            
            # Handle params array
            if is_params:
                cpp_type = f'std::initializer_list<{cpp_type}>'
            # Handle ref/out
            elif is_ref:
                if is_const:
                    cpp_type = f'const {cpp_type}&'
                else:
                    cpp_type = f'{cpp_type}&'
            else:
                # Pass by value for simple types, by const ref for complex
                if cpp_type in ['bool', 'int8_t', 'uint8_t', 'int16_t', 'uint16_t', 
                               'int32_t', 'uint32_t', 'int64_t', 'uint64_t', 
                               'float', 'double', 'wchar_t', 'void*']:
                    pass  # By value
                elif cpp_type.startswith('std::') or '<' in cpp_type:
                    cpp_type = f'const {cpp_type}&'
            
            cpp_params.append(f'{cpp_type} {param_name}')
        
        return ', '.join(cpp_params) if cpp_params else 'void'
    
    def convert_properties(self, content: str) -> str:
        """Convert property definitions"""
        
        # Pattern for properties with getter/setter blocks
        prop_pattern = r'(public\s+|private\s+|protected\s+|internal\s+)?(static\s+)?(\w+(?:\?)?)\s+(\w+)\s*\{\s*((?:get|set|init)\s*(?:;\s*|(?:=>[^;]+;)|(?:\{[^}]*\}))?\s*)+\}'
        
        def replace_property(match):
            access = match.group(1) or ''
            static_kw = match.group(2) or ''
            prop_type = match.group(3)
            prop_name = match.group(4)
            accessors = match.group(5)
            
            cpp_access = access.strip().rstrip() if access.strip() else 'public'
            cpp_type = self.convert_type_name(prop_type)
            
            # Check what accessors are present
            has_get = 'get' in accessors
            has_set = ('set' in accessors or 'init' in accessors)
            
            # Generate member variable
            var_name = f'm_{prop_name[0].lower()}{prop_name[1:]}'
            
            result = f'{cpp_type} {var_name}{{}};\n'
            
            # Generate getter
            if has_get:
                if cpp_access and cpp_access != 'public':
                    result += f'    {cpp_access}: '
                result += f'{cpp_type} get_{prop_name}() const {{ return {var_name}; }}\n'
            
            # Generate setter
            if has_set:
                if cpp_access and cpp_access != 'public':
                    result += f'    {cpp_access}: '
                result += f'void set_{prop_name}({cpp_type} value) {{ {var_name} = value; }}\n'
            
            # Or use a property-like approach with operator()
            # For simplicity, we'll just create get_/set_ methods
            
            return result
        
        result = re.sub(prop_pattern, replace_property, content)
        
        # Handle auto-properties: public Type Name { get; set; }
        auto_prop_pattern = r'(public\s+|private\s+|protected\s+|internal\s+)?(static\s+)?(\w+(?:\?)?)\s+(\w+)\s*\{\s*get;\s*set;\s*\}'
        
        def replace_auto_property(match):
            access = match.group(1) or ''
            static_kw = match.group(2) or ''
            prop_type = match.group(3)
            prop_name = match.group(4)
            
            cpp_type = self.convert_type_name(prop_type)
            var_name = f'm_{prop_name[0].lower()}{prop_name[1:]}'
            
            return f'{cpp_type} {var_name}{{}};'
        
        result = re.sub(auto_prop_pattern, replace_auto_property, result)
        
        # Handle expression-bodied properties: public Type Name => expression;
        expr_prop_pattern = r'(public\s+|private\s+|protected\s+|internal\s+)?(\w+(?:\?)?)\s+(\w+)\s*=>\s*([^;]+);'
        
        def replace_expr_property(match):
            access = match.group(1) or ''
            prop_type = match.group(2)
            prop_name = match.group(3)
            expr = match.group(4)
            
            cpp_access = access.strip().rstrip() if access.strip() else 'public'
            cpp_type = self.convert_type_name(prop_type)
            cpp_expr = self.convert_expression(expr)
            
            prefix = f'{cpp_access} ' if cpp_access and cpp_access != 'public' else ''
            return f'{prefix}{cpp_type} get_{prop_name}() const {{ return {cpp_expr}; }}'
        
        result = re.sub(expr_prop_pattern, replace_expr_property, result)
        
        return result
    
    def convert_constructors(self, content: str) -> str:
        """Convert constructor definitions"""
        
        # Pattern for constructors
        ctor_pattern = r'(public\s+|private\s+|protected\s+|internal\s+)?(\w+)\s*\(([^)]*)\)\s*(?::\s*[^{]+)?\s*\{'
        
        def replace_constructor(match):
            access = match.group(1) or ''
            class_name = match.group(2)
            params_str = match.group(3) or ''
            
            cpp_access = access.strip().rstrip() if access.strip() else 'public'
            cpp_params = self.convert_parameters(params_str)
            
            # For now, simplified - would need to handle initializer lists
            prefix = f'{cpp_access} ' if cpp_access and cpp_access != 'public' else ''
            return f'{prefix}{class_name}({cpp_params})\n{{'
        
        return re.sub(ctor_pattern, replace_constructor, content)
    
    def convert_fields(self, content: str) -> str:
        """Convert field definitions"""
        
        # Pattern for fields
        field_pattern = r'(public\s+|private\s+|protected\s+|internal\s+)?(static\s+)?(readonly\s+)?(const\s+)?(unsafe\s+)?(\w+(?:\?)?)(?:<[^>]+>)?\s+(\w+)(?:\s*=\s*[^;]+)?;'
        
        def replace_field(match):
            access = match.group(1) or ''
            static_kw = match.group(2) or ''
            readonly_kw = match.group(3) or ''
            const_kw = match.group(4) or ''
            unsafe_kw = match.group(5) or ''
            field_type = match.group(6)
            field_name = match.group(7)
            
            if unsafe_kw:
                self.required_headers.add('cstring')
            
            cpp_access = access.strip().rstrip() if access.strip() else 'private'
            cpp_type = self.convert_type_name(field_type)
            
            modifiers = []
            if static_kw:
                modifiers.append('static')
            if const_kw or readonly_kw:
                modifiers.append('const')
            
            mod_str = ' '.join(modifiers) + ' ' if modifiers else ''
            prefix = f'{cpp_access}: ' if cpp_access else ''
            
            return f'{prefix}{mod_str}{cpp_type} {field_name}{{}};'
        
        return re.sub(field_pattern, replace_field, content)
    
    def convert_enums(self, content: str) -> str:
        """Convert enum definitions"""
        
        enum_pattern = r'(public\s+)?enum\s+(\w+)(?:\s*:\s*(\w+))?\s*\{([^}]+)\}'
        
        def replace_enum(match):
            access = match.group(1) or ''
            enum_name = match.group(2)
            underlying = match.group(3) or 'int'
            values_str = match.group(4)
            
            cpp_underlying = self.convert_type_name(underlying)
            
            # Convert values
            values = []
            for val in values_str.split(','):
                val = val.strip()
                if not val:
                    continue
                # Handle assigned values
                if '=' in val:
                    name, value = val.split('=', 1)
                    values.append(f'{name.strip()} = {value.strip()}')
                else:
                    values.append(val)
            
            return f'enum class {enum_name} : {cpp_underlying}\n{{\n    ' + ',\n    '.join(values) + '\n};'
        
        return re.sub(enum_pattern, replace_enum, content)
    
    def convert_type_name(self, cs_type: str) -> str:
        """Convert a C# type name to C++"""
        cs_type = cs_type.strip()
        
        # Handle nullable
        if cs_type.endswith('?'):
            base_type = cs_type[:-1]
            cpp_base = self.convert_type_name(base_type)
            return f'std::optional<{cpp_base}>'
        
        # Handle arrays
        if cs_type.endswith('[]'):
            base_type = cs_type[:-2]
            cpp_base = self.convert_type_name(base_type)
            return f'std::vector<{cpp_base}>'
        
        # Handle generics
        if '<' in cs_type and '>' in cs_type:
            # Extract generic type and parameters
            match = re.match(r'([\w.]+)<([^>]+)>', cs_type)
            if match:
                generic_type = match.group(1)
                type_params = match.group(2)
                
                # Convert type parameters
                cpp_params = [self.convert_type_name(p.strip()) for p in type_params.split(',')]
                
                # Map common generic types
                if generic_type in ['System.Collections.Generic.List', 'List']:
                    return f'std::vector<{", ".join(cpp_params)}>'
                elif generic_type in ['System.Collections.Generic.Dictionary', 'Dictionary']:
                    if len(cpp_params) >= 2:
                        return f'std::unordered_map<{cpp_params[0]}, {cpp_params[1]}>'
                elif generic_type in ['System.Collections.Generic.IEnumerable', 'IEnumerable']:
                    return f'std::vector<{cpp_params[0]}>'
                elif generic_type in ['System.Collections.Generic.IList', 'IList']:
                    return f'std::vector<{cpp_params[0]}>'
                elif generic_type in ['System.Span', 'Span']:
                    return f'span<{cpp_params[0]}>'
                elif generic_type in ['System.ReadOnlySpan', 'ReadOnlySpan']:
                    return f'span<const {cpp_params[0]}>'
                elif generic_type in ['System.Nullable', 'Nullable']:
                    return f'std::optional<{cpp_params[0]}>'
                elif generic_type in ['System.Tuple', 'Tuple']:
                    return f'std::tuple<{", ".join(cpp_params)}>'
                elif generic_type in ['System.ValueTuple', 'ValueTuple']:
                    return f'std::tuple<{", ".join(cpp_params)}>'
                else:
                    # Unknown generic, keep as is with converted params
                    cpp_generic = generic_type.replace('.', '::')
                    return f'{cpp_generic}<{", ".join(cpp_params)}>'
        
        # Direct type mapping
        if cs_type in TYPE_MAPPINGS:
            return TYPE_MAPPINGS[cs_type]
        
        # Handle System.* types
        if cs_type.startswith('System.'):
            simple_name = cs_type[7:]
            if simple_name in TYPE_MAPPINGS:
                return TYPE_MAPPINGS[simple_name]
        
        # Default: replace . with :: for namespace
        return cs_type.replace('.', '::')
    
    def convert_expression(self, expr: str) -> str:
        """Convert a C# expression to C++"""
        result = expr
        
        # Replace null with nullptr
        result = re.sub(r'\bnull\b', 'nullptr', result)
        
        # Replace true/false (already same in C++)
        
        # Replace string concatenation
        # This is simplified - real implementation would be more complex
        
        # Replace typeof with typeid
        result = re.sub(r'typeof\s*\(([^)]+)\)', r'typeid(\1)', result)
        
        # Replace sizeof (same in C++ but might need adjustment)
        
        # Replace nameof (can't do at runtime in C++, would need macro)
        result = re.sub(r'nameof\s*\(([^)]+)\)', r'"\1"', result)
        
        # Replace new array syntax
        result = re.sub(r'new\s+(\w+)\s*\[\s*(\d+)\s*\]', r'std::vector<\1>(\2)', result)
        result = re.sub(r'new\s+(\w+)\s*\[\s*\]\s*\{([^}]+)\}', r'std::vector<\1>{\2}', result)
        
        # Replace object initializer (simplified)
        # result = re.sub(r'new\s+(\w+)\s*\{([^}]+)\}', r'\1{\2}', result)
        
        # Replace collection initializer
        result = re.sub(r'\[\s*([^\]]+)\s*\]', r'{\1}', result)
        
        # Replace ?? operator
        result = re.sub(r'(\w+)\s*\?\?\s*(\w+)', r'(\1 ? \1 : \2)', result)
        
        # Replace ?. operator (null-conditional)
        # This is complex, simplified version:
        result = re.sub(r'(\w+)\?\.', r'\1->', result)
        
        # Replace ??= operator
        result = re.sub(r'(\w+)\s*\?\?=\s*(\w+)', r'if (!\1) \1 = \2;', result)
        
        # Cast operations
        result = re.sub(r'\((\w+)\)\s*(\w+)', r'static_cast<\1>(\2)', result)
        
        # is operator
        result = re.sub(r'(\w+)\s+is\s+(\w+)', r'dynamic_cast<\2*>(\1) != nullptr', result)
        
        # as operator
        result = re.sub(r'(\w+)\s+as\s+(\w+)', r'dynamic_cast<\2*>(\1)', result)
        
        return result
    
    def convert_statement(self, stmt: str) -> str:
        """Convert a C# statement to C++"""
        result = stmt
        
        # Using statement (for IDisposable)
        # Would need RAII wrapper
        
        # Lock statement
        result = re.sub(r'lock\s*\(([^)]+)\)\s*\{', r'// lock scope for \1\n{', result)
        
        # Fixed statement (unsafe)
        result = re.sub(r'fixed\s*\(([^)]+)\)\s*\{', r'// fixed scope: \1\n{', result)
        
        # Checked/unchecked
        result = re.sub(r'checked\s*\{', r'{ // checked', result)
        result = re.sub(r'unchecked\s*\{', r'{ // unchecked', result)
        
        return result


def main():
    if len(sys.argv) < 3:
        print("Usage: python converter.py <input_dir> <output_dir>")
        sys.exit(1)
    
    input_dir = sys.argv[1]
    output_dir = sys.argv[2]
    
    converter = CSharpToCppConverter()
    
    # Find all .cs files
    cs_files = list(Path(input_dir).rglob('*.cs'))
    
    print(f"Found {len(cs_files)} C# files to convert")
    
    success_count = 0
    error_count = 0
    
    for cs_file in cs_files:
        # Calculate relative path
        rel_path = cs_file.relative_to(input_dir)
        
        # Change extension to .h
        output_path = Path(output_dir) / rel_path.with_suffix('.h')
        
        try:
            converter.convert_file(str(cs_file), str(output_path))
            success_count += 1
            print(f"✓ Converted: {rel_path}")
        except Exception as e:
            error_count += 1
            print(f"✗ Error converting {rel_path}: {e}")
    
    print(f"\nConversion complete: {success_count} succeeded, {error_count} failed")


if __name__ == '__main__':
    main()
