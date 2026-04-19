#!/usr/bin/env python3
"""
Robust C# to C++ Header Converter
Converts C# source files to C++ header files with proper logic translation.
"""

import os
import re
import sys
from pathlib import Path
from typing import Dict, List, Tuple, Optional, Set

class CSharpToCppConverter:
    """Main converter class"""
    
    TYPE_MAPPINGS = {
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
        'decimal': 'double',
        'char': 'wchar_t',
        'string': 'std::string',
        'object': 'std::any',
        'void': 'void',
        'System.IntPtr': 'void*',
        'IntPtr': 'void*',
        'nint': 'intptr_t',
        'nuint': 'uintptr_t',
    }
    
    def __init__(self):
        self.reset()
    
    def reset(self):
        """Reset converter state"""
        self.namespace = ""
        self.required_headers = {'cstdint'}
        self.has_unsafe = False
        self.has_string = False
        self.has_vector = False
        self.has_optional = False
    
    def convert_type(self, cs_type: str) -> str:
        """Convert C# type to C++ type"""
        cs_type = cs_type.strip()
        
        # Handle nullable types
        if cs_type.endswith('?'):
            base = self.convert_type(cs_type[:-1])
            self.has_optional = True
            return f'std::optional<{base}>'
        
        # Handle array types
        if cs_type.endswith('[]'):
            base = self.convert_type(cs_type[:-2])
            self.has_vector = True
            return f'std::vector<{base}>'
        
        # Handle generic types
        if '<' in cs_type and '>' in cs_type:
            match = re.match(r'([\w.]+)<([^>]+)>', cs_type)
            if match:
                generic_type = match.group(1)
                type_args = match.group(2)
                
                # Convert type arguments
                cpp_args = [self.convert_type(arg.strip()) for arg in type_args.split(',')]
                
                # Map common generics
                if generic_type in ['System.Collections.Generic.List', 'List']:
                    self.has_vector = True
                    return f'std::vector<{cpp_args[0]}>'
                elif generic_type in ['System.Collections.Generic.Dictionary', 'Dictionary']:
                    return f'std::unordered_map<{cpp_args[0]}, {cpp_args[1]}>'
                elif generic_type in ['System.Span', 'Span']:
                    return f'span<{cpp_args[0]}>'
                elif generic_type in ['System.ReadOnlySpan', 'ReadOnlySpan']:
                    return f'span<const {cpp_args[0]}>'
                else:
                    cpp_generic = generic_type.replace('.', '::')
                    return f'{cpp_generic}<{", ".join(cpp_args)}>'
        
        # Direct mapping
        if cs_type in self.TYPE_MAPPINGS:
            return self.TYPE_MAPPINGS[cs_type]
        
        # Handle System.* types
        if cs_type.startswith('System.'):
            simple = cs_type[7:]
            if simple in self.TYPE_MAPPINGS:
                return self.TYPE_MAPPINGS[simple]
        
        # Default: namespace conversion
        return cs_type.replace('.', '::')
    
    def convert_file(self, input_path: str, output_path: str) -> bool:
        """Convert a single C# file to C++"""
        self.reset()
        
        try:
            with open(input_path, 'r', encoding='utf-8', errors='replace') as f:
                content = f.read()
        except Exception as e:
            print(f"Error reading {input_path}: {e}")
            return False
        
        # Extract copyright header
        copyright_match = re.match(r'^(\s*//.*\n)+', content)
        copyright_header = copyright_match.group(0) if copyright_match else "// Copyright (c) Contributors.\n"
        
        # Remove copyright from content for processing
        content_no_copyright = content[len(copyright_header):] if copyright_match else content
        
        # Extract namespace
        ns_match = re.search(r'namespace\s+([\w.]+)\s*;', content_no_copyright)
        if ns_match:
            self.namespace = ns_match.group(1).strip()
        
        # Remove using statements
        content_no_usings = re.sub(r'^\s*using\s+[^;]+;\s*\n', '', content_no_copyright, flags=re.MULTILINE)
        content_no_usings = re.sub(r'^\s*namespace\s+[\w.]+\s*;\s*\n', '', content_no_usings, flags=re.MULTILINE)
        
        # Process the main content
        cpp_body = self.process_content(content_no_usings)
        
        # Generate header guard
        base_name = os.path.basename(input_path).replace('.cs', '_H').upper().replace('.', '_').replace('-', '_')
        header_guard = f"VORTICE_{base_name}"
        
        # Build output
        output_lines = []
        output_lines.append(copyright_header.rstrip())
        output_lines.append('')
        output_lines.append(f'#ifndef {header_guard}')
        output_lines.append(f'#define {header_guard}')
        output_lines.append('')
        
        # Add includes
        output_lines.append('#include <cstdint>')
        if self.has_string or 'std::string' in cpp_body:
            output_lines.append('#include <string>')
        if self.has_vector or 'std::vector' in cpp_body:
            output_lines.append('#include <vector>')
        if self.has_optional or 'std::optional' in cpp_body:
            output_lines.append('#include <optional>')
        if self.has_unsafe or 'memcpy' in cpp_body.lower():
            output_lines.append('#include <cstring>')
        if 'unordered_map' in cpp_body:
            output_lines.append('#include <unordered_map>')
        if 'span' in cpp_body:
            output_lines.append('#include <span>')
        
        output_lines.append('')
        
        # Add namespace
        if self.namespace:
            ns_parts = self.namespace.split('.')
            for part in ns_parts:
                output_lines.append(f'namespace {part} {{')
            output_lines.append('')
        
        # Add body with indentation
        indent = '    ' * len(self.namespace.split('.')) if self.namespace else ''
        for line in cpp_body.split('\n'):
            if line.strip():
                output_lines.append(indent + line)
            else:
                output_lines.append('')
        
        # Close namespace
        if self.namespace:
            output_lines.append('')
            ns_parts = self.namespace.split('.')
            for i in range(len(ns_parts), 0, -1):
                output_lines.append('    ' * (i - 1) + '}')
        
        output_lines.append('')
        output_lines.append(f'#endif // {header_guard}')
        
        # Write output
        os.makedirs(os.path.dirname(output_path), exist_ok=True)
        try:
            with open(output_path, 'w', encoding='utf-8') as f:
                f.write('\n'.join(output_lines))
            return True
        except Exception as e:
            print(f"Error writing {output_path}: {e}")
            return False
    
    def process_content(self, content: str) -> str:
        """Process C# content and convert to C++"""
        result = content
        
        # Remove XML documentation comments
        result = re.sub(r'///.*\n', '', result)
        
        # Remove attributes
        result = re.sub(r'\[[\w\s:,=\."]+\]\s*\n?', '', result)
        
        # Convert struct/class/interface definitions
        result = self.convert_type_def(result)
        
        # Convert methods
        result = self.convert_methods(result)
        
        # Convert properties
        result = self.convert_properties(result)
        
        # Convert fields
        result = self.convert_fields(result)
        
        # Convert enums
        result = self.convert_enums(result)
        
        # Convert expressions
        result = self.convert_expressions(result)
        
        # Clean up
        result = re.sub(r'\n{3,}', '\n\n', result)
        
        return result
    
    def convert_type_def(self, content: str) -> str:
        """Convert type definitions"""
        pattern = r'(public\s+|private\s+|protected\s+)?(unsafe\s+)?(partial\s+)?(static\s+)?(sealed\s+)?(abstract\s+)?(class|struct|interface|record)\s+(\w+)(\s*<[^>]+>)?(\s*:\s*[^{]+)?\s*\{'
        
        def replace(match):
            access = match.group(1) or ''
            unsafe_kw = match.group(2) or ''
            partial_kw = match.group(3) or ''
            static_kw = match.group(4) or ''
            sealed_kw = match.group(5) or ''
            abstract_kw = match.group(6) or ''
            kind = match.group(7)
            name = match.group(8)
            generics = match.group(9) or ''
            bases = match.group(10) or ''
            
            if unsafe_kw:
                self.has_unsafe = True
            
            # Build modifiers
            mods = []
            if static_kw:
                mods.append('static')
            
            # Determine C++ type
            if kind == 'interface':
                cpp_kind = 'class'
            elif kind == 'record':
                cpp_kind = 'struct'
            else:
                cpp_kind = kind
            
            # Handle generics
            cpp_generics = ''
            if generics:
                params = re.findall(r'\w+', generics)
                cpp_generics = '<typename ' + ', typename '.join(params) + '>'
            
            # Handle base classes
            cpp_bases = ''
            if bases:
                base_list = [b.strip() for b in bases.split(',')]
                cpp_base_list = []
                for base in base_list:
                    if not base.startswith('public') and not base.startswith('protected') and not base.startswith('private'):
                        base = 'public ' + self.convert_type(base)
                    cpp_base_list.append(base)
                cpp_bases = ' : ' + ', '.join(cpp_base_list)
            
            mod_str = ' '.join(mods) + ' ' if mods else ''
            return f'{mod_str}{cpp_kind} {name}{cpp_generics}{cpp_bases}\n{{'
        
        return re.sub(pattern, replace, content)
    
    def convert_methods(self, content: str) -> str:
        """Convert method definitions"""
        # Match method signatures
        pattern = r'(public\s+|private\s+|protected\s+|internal\s+)?(static\s+)?(unsafe\s+)?(virtual\s+)?(override\s+)?(\w+(?:\?)?)\s+(\w+)\s*\(([^)]*)\)(\s*where[^{]+)?\s*(\{|;|=>)'
        
        def replace(match):
            access = match.group(1) or ''
            static_kw = match.group(2) or ''
            unsafe_kw = match.group(3) or ''
            virtual_kw = match.group(4) or ''
            override_kw = match.group(5) or ''
            return_type = match.group(6)
            name = match.group(7)
            params = match.group(8) or ''
            where_clause = match.group(9) or ''
            brace = match.group(10) or '{'
            
            if unsafe_kw:
                self.has_unsafe = True
            
            # Convert access
            cpp_access = access.strip()
            if cpp_access == 'internal':
                cpp_access = ''
            
            # Convert return type
            cpp_return = self.convert_type(return_type)
            
            # Convert parameters
            cpp_params = self.convert_params(params)
            
            # Build signature
            parts = []
            if static_kw:
                parts.append('static')
            if virtual_kw:
                parts.append('virtual')
            if override_kw:
                parts.append('override')
            
            sig = ' '.join(parts)
            if sig:
                sig += ' '
            
            # Handle expression-bodied methods
            if brace == '=>':
                # Find the expression and semicolon
                expr_match = re.search(r'=>\s*([^;]+);', content[match.end()-2:])
                if expr_match:
                    expr = self.convert_expression(expr_match.group(1))
                    return f'{sig}{cpp_return} {name}({cpp_params}) const {{ return {expr}; }}'
            
            # Handle abstract methods
            if brace == ';':
                return f'{sig}{cpp_return} {name}({cpp_params}) = 0;'
            
            # Regular method with body
            return f'{sig}{cpp_return} {name}({cpp_params})\n{{'
        
        return re.sub(pattern, replace, content)
    
    def convert_params(self, params_str: str) -> str:
        """Convert method parameters"""
        if not params_str.strip():
            return 'void'
        
        params = []
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
            
            # Handle ref/out/in/params
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
                is_ref = True
                is_const = True
                param = param[3:]
            elif param.startswith('params '):
                is_params = True
                param = param[7:]
            elif param.startswith('this '):
                param = param[5:]
            
            # Parse type and name
            parts = param.rsplit(' ', 1)
            if len(parts) == 2:
                param_type, param_name = parts
            else:
                param_type = parts[0] if parts else 'void'
                param_name = 'param'
            
            cpp_type = self.convert_type(param_type)
            
            if is_params:
                self.has_vector = True
                cpp_type = f'std::initializer_list<{cpp_type}>'
            elif is_ref:
                if is_const:
                    cpp_type = f'const {cpp_type}&'
                else:
                    cpp_type = f'{cpp_type}&'
            elif cpp_type.startswith('std::') or '<' in cpp_type:
                cpp_type = f'const {cpp_type}&'
            
            cpp_params.append(f'{cpp_type} {param_name}')
        
        return ', '.join(cpp_params) if cpp_params else 'void'
    
    def convert_properties(self, content: str) -> str:
        """Convert property definitions"""
        # Auto-properties: public Type Name { get; set; }
        auto_pattern = r'(public\s+|private\s+|protected\s+)?(static\s+)?(\w+(?:\?)?)\s+(\w+)\s*\{\s*get;\s*set;\s*\}'
        
        def replace_auto(match):
            access = match.group(1) or ''
            static_kw = match.group(2) or ''
            prop_type = match.group(3)
            name = match.group(4)
            
            cpp_type = self.convert_type(prop_type)
            var_name = f'm_{name[0].lower()}{name[1:]}'
            
            return f'{cpp_type} {var_name}{{}};'
        
        result = re.sub(auto_pattern, replace_auto, content)
        
        # Expression-bodied properties: public Type Name => expr;
        expr_pattern = r'(public\s+|private\s+)?(\w+(?:\?)?)\s+(\w+)\s*=>\s*([^;]+);'
        
        def replace_expr(match):
            access = match.group(1) or ''
            prop_type = match.group(2)
            name = match.group(3)
            expr = match.group(4)
            
            cpp_type = self.convert_type(prop_type)
            cpp_expr = self.convert_expression(expr)
            
            return f'{cpp_type} get_{name}() const {{ return {cpp_expr}; }}'
        
        result = re.sub(expr_pattern, replace_expr, result)
        
        return result
    
    def convert_fields(self, content: str) -> str:
        """Convert field definitions"""
        pattern = r'(public\s+|private\s+|protected\s+)?(static\s+)?(readonly\s+)?(const\s+)?(unsafe\s+)?(\w+(?:\?)?)(?:<[^>]+>)?\s+(\w+)(?:\s*=\s*[^;]+)?;'
        
        def replace(match):
            access = match.group(1) or ''
            static_kw = match.group(2) or ''
            readonly_kw = match.group(3) or ''
            const_kw = match.group(4) or ''
            unsafe_kw = match.group(5) or ''
            field_type = match.group(6)
            name = match.group(7)
            
            if unsafe_kw:
                self.has_unsafe = True
            
            cpp_type = self.convert_type(field_type)
            
            mods = []
            if static_kw:
                mods.append('static')
            if const_kw or readonly_kw:
                mods.append('const')
            
            mod_str = ' '.join(mods) + ' ' if mods else ''
            access_str = access.strip() + ': ' if access.strip() else ''
            
            return f'{access_str}{mod_str}{cpp_type} {name}{{}};'
        
        return re.sub(pattern, replace, content)
    
    def convert_enums(self, content: str) -> str:
        """Convert enum definitions"""
        pattern = r'(public\s+)?enum\s+(\w+)(?:\s*:\s*(\w+))?\s*\{([^}]+)\}'
        
        def replace(match):
            access = match.group(1) or ''
            name = match.group(2)
            underlying = match.group(3) or 'int'
            values_str = match.group(4)
            
            cpp_underlying = self.convert_type(underlying)
            
            values = []
            for val in values_str.split(','):
                val = val.strip()
                if not val:
                    continue
                if '=' in val:
                    n, v = val.split('=', 1)
                    values.append(f'{n.strip()} = {v.strip()}')
                else:
                    values.append(val)
            
            return f'enum class {name} : {cpp_underlying}\n{{\n    ' + ',\n    '.join(values) + '\n};'
        
        return re.sub(pattern, replace, content)
    
    def convert_expression(self, expr: str) -> str:
        """Convert C# expression to C++"""
        result = expr
        
        # Replace null
        result = re.sub(r'\bnull\b', 'nullptr', result)
        
        # Replace array initializer
        result = re.sub(r'\[\s*([^\]]*)\s*\]', r'{\1}', result)
        
        # Replace cast
        result = re.sub(r'\((\w+)\)\s*(\w+)', r'static_cast<\1>(\2)', result)
        
        # Replace nameof
        result = re.sub(r'nameof\s*\(([^)]+)\)', r'"\1"', result)
        
        # Replace typeof
        result = re.sub(r'typeof\s*\(([^)]+)\)', r'typeid(\1)', result)
        
        return result
    
    def convert_expressions(self, content: str) -> str:
        """Convert expressions in content"""
        result = content
        
        # Replace null
        result = re.sub(r'\bnull\b', 'nullptr', result)
        
        # Replace true/false (same in C++)
        
        # Replace var with auto (in declarations)
        # result = re.sub(r'\bvar\b', 'auto', result)
        
        return result


def main():
    if len(sys.argv) < 3:
        print("Usage: python converter.py <input_dir> <output_dir>")
        sys.exit(1)
    
    input_dir = Path(sys.argv[1])
    output_dir = Path(sys.argv[2])
    
    converter = CSharpToCppConverter()
    
    cs_files = list(input_dir.rglob('*.cs'))
    print(f"Found {len(cs_files)} C# files")
    
    success = 0
    failed = 0
    
    for cs_file in cs_files:
        rel_path = cs_file.relative_to(input_dir)
        output_path = output_dir / rel_path.with_suffix('.h')
        
        try:
            if converter.convert_file(str(cs_file), str(output_path)):
                success += 1
                print(f"✓ {rel_path}")
            else:
                failed += 1
                print(f"✗ {rel_path}")
        except Exception as e:
            failed += 1
            print(f"✗ {rel_path}: {e}")
    
    print(f"\nDone: {success} succeeded, {failed} failed")


if __name__ == '__main__':
    main()
