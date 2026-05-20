#!/usr/bin/env python3
"""
Improved C# to C++ Header Converter for Vortice.Windows
Properly handles:
- COM interfaces with GUID attributes
- Partial classes
- Properties (auto, expression-bodied, full)
- Methods with bodies
- Generics and constraints
- Type mappings
- Expression conversions
"""

import os
import re
import sys
from pathlib import Path
from typing import Dict, List, Set, Tuple, Optional

class ImprovedCSharpToCppConverter:
    """Enhanced converter with better C# to C++ translation"""

    TYPE_MAP = {
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
        'Guid': 'GUID',
        'System.Guid': 'GUID',
        'Span<T>': 'std::span<T>',
        'ReadOnlySpan<T>': 'std::span<const T>',
        'Memory<T>': 'std::span<T>',
        'ReadOnlyMemory<T>': 'std::span<const T>',
        'List<T>': 'std::vector<T>',
        'Dictionary<K,V>': 'std::unordered_map<K, V>',
        'HashSet<T>': 'std::unordered_set<T>',
        'Queue<T>': 'std::queue<T>',
        'Stack<T>': 'std::stack<T>',
        'Tuple<T1,T2>': 'std::pair<T1, T2>',
        'Func<T,R>': 'std::function<R(T)>',
        'Action': 'std::function<void()>',
        'Action<T>': 'std::function<void(T)>',
        'Predicate<T>': 'std::function<bool(T)>',
        'IComparable': 'std::totally_ordered',
        'IEquatable<T>': 'std::equality_comparable<T>',
    }

    def __init__(self):
        self.reset()

    def reset(self):
        """Reset converter state"""
        self.namespace = ""
        self.needs_string = False
        self.needs_vector = False
        self.needs_optional = False
        self.needs_cstring = False
        self.needs_span = False
        self.needs_unordered_map = False
        self.needs_function = False
        self.needs_memory = False
        self.needs_variant = False
        self.current_class = ""
        self.is_interface = False
        self.guid_value = ""

    def convert_type(self, cs_type: str) -> str:
        """Convert C# type to C++ type"""
        cs_type = cs_type.strip()
        
        if not cs_type:
            return 'void'

        # Handle nullable types
        if cs_type.endswith('?'):
            base = self.convert_type(cs_type[:-1])
            self.needs_optional = True
            return f'std::optional<{base}>'

        # Handle array types
        if cs_type.endswith('[]'):
            base = self.convert_type(cs_type[:-2])
            self.needs_vector = True
            return f'std::vector<{base}>'

        # Handle generic types
        if '<' in cs_type and '>' in cs_type:
            match = re.match(r'([\w.]+)<([^>]+)>', cs_type)
            if match:
                generic_type = match.group(1)
                type_args_str = match.group(2)
                type_args = self._split_generic_args(type_args_str)
                cpp_args = [self.convert_type(arg.strip()) for arg in type_args]
                
                # Check for known generic types
                if generic_type in ['List', 'System.Collections.Generic.List']:
                    self.needs_vector = True
                    return f'std::vector<{cpp_args[0]}>'
                elif generic_type in ['Dictionary', 'System.Collections.Generic.Dictionary']:
                    self.needs_unordered_map = True
                    return f'std::unordered_map<{", ".join(cpp_args)}>'
                elif generic_type in ['Span', 'System.Span']:
                    self.needs_span = True
                    return f'std::span<{cpp_args[0]}>'
                elif generic_type in ['ReadOnlySpan', 'System.ReadOnlySpan']:
                    self.needs_span = True
                    return f'std::span<const {cpp_args[0]}>'
                elif generic_type in ['Optional', 'System.Optional']:
                    self.needs_optional = True
                    return f'std::optional<{cpp_args[0]}>'
                elif generic_type in ['Nullable', 'System.Nullable']:
                    self.needs_optional = True
                    return f'std::optional<{cpp_args[0]}>'
                else:
                    # Custom generic type
                    return f'{generic_type}<{", ".join(cpp_args)}>'

        # Check direct type map
        if cs_type in self.TYPE_MAP:
            return self.TYPE_MAP[cs_type]

        # Handle namespaced types
        parts = cs_type.split('.')
        if parts[-1] in self.TYPE_MAP:
            return self.TYPE_MAP[parts[-1]]

        # Keep as-is for custom types
        return cs_type

    def _split_generic_args(self, args_str: str) -> List[str]:
        """Split generic type arguments respecting nesting"""
        args = []
        current = ""
        depth = 0
        
        for char in args_str:
            if char == '<':
                depth += 1
                current += char
            elif char == '>':
                depth -= 1
                current += char
            elif char == ',' and depth == 0:
                args.append(current.strip())
                current = ""
            else:
                current += char
        
        if current.strip():
            args.append(current.strip())
        
        return args

    def convert_file(self, input_path: str, output_path: str) -> bool:
        """Convert a single C# file to C++ header"""
        self.reset()

        try:
            with open(input_path, 'r', encoding='utf-8', errors='replace') as f:
                content = f.read()
        except Exception as e:
            print(f"Error reading {input_path}: {e}")
            return False

        # Extract copyright header
        copyright_lines = []
        lines = content.split('\n')
        content_start = 0

        for i, line in enumerate(lines):
            if line.strip().startswith('//'):
                copyright_lines.append(line)
                content_start = i + 1
            elif line.strip() == '' and copyright_lines:
                continue
            else:
                break

        copyright_header = '\n'.join(copyright_lines[:2]) if copyright_lines else "// Copyright (c) Contributors."

        # Get content after copyright
        content_body = '\n'.join(lines[content_start:])

        # Extract namespace
        ns_match = re.search(r'namespace\s+([\w.]+)\s*;', content_body)
        if ns_match:
            self.namespace = ns_match.group(1).strip()

        # Extract GUID if present
        guid_match = re.search(r'\[Guid\(\s*"([^"]+)"\s*\)\]', content_body)
        if guid_match:
            self.guid_value = guid_match.group(1)

        # Remove using statements
        content_body = re.sub(r'^\s*using\s+[^;]+;\s*\n', '', content_body, flags=re.MULTILINE)

        # Process the content
        cpp_body = self._process_content(content_body)

        # Generate header guard
        base_name = os.path.basename(input_path).replace('.cs', '_H').upper().replace('.', '_').replace('-', '_')
        header_guard = f"VORTICE_{base_name}"

        # Build output
        output_lines = []
        output_lines.append(copyright_header)
        output_lines.append('')
        output_lines.append(f'#ifndef {header_guard}')
        output_lines.append(f'#define {header_guard}')
        output_lines.append('')

        # Add required includes
        output_lines.append('#include <cstdint>')
        if self.needs_string or 'std::string' in cpp_body:
            output_lines.append('#include <string>')
        if self.needs_vector or 'std::vector' in cpp_body:
            output_lines.append('#include <vector>')
        if self.needs_optional or 'std::optional' in cpp_body:
            output_lines.append('#include <optional>')
        if self.needs_cstring or 'memcpy' in cpp_body.lower():
            output_lines.append('#include <cstring>')
        if self.needs_unordered_map or 'std::unordered_map' in cpp_body:
            output_lines.append('#include <unordered_map>')
        if self.needs_span or 'std::span' in cpp_body:
            output_lines.append('#include <span>')
        if self.needs_function or 'std::function' in cpp_body:
            output_lines.append('#include <functional>')
        if 'initializer_list' in cpp_body:
            output_lines.append('#include <initializer_list>')
        if 'GUID' in cpp_body:
            output_lines.append('#include <guiddef.h>')

        output_lines.append('')

        # Add namespace
        if self.namespace:
            ns_parts = self.namespace.split('.')
            for part in ns_parts:
                output_lines.append(f'namespace {part} {{')
            output_lines.append('')

        # Add body
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

        # Write output file
        os.makedirs(os.path.dirname(output_path), exist_ok=True)
        try:
            with open(output_path, 'w', encoding='utf-8') as f:
                f.write('\n'.join(output_lines))
            return True
        except Exception as e:
            print(f"Error writing {output_path}: {e}")
            return False

    def _process_content(self, content: str) -> str:
        """Process C# content and convert to C++"""
        result = content

        # Remove XML documentation comments
        result = re.sub(r'///.*\n', '', result)

        # Remove attributes (but preserve Guid for now)
        result = re.sub(r'\[(?!Guid)[\w\s:,=\.\"<>]+\]\s*\n?', '', result)

        # Remove #region/#endregion
        result = re.sub(r'^\s*#region.*\n', '', result, flags=re.MULTILINE)
        result = re.sub(r'^\s*#endregion.*\n', '', result, flags=re.MULTILINE)

        # Convert type definitions
        result = self._convert_type_defs(result)

        # Convert methods
        result = self._convert_methods(result)

        # Convert properties
        result = self._convert_properties(result)

        # Convert fields
        result = self._convert_fields(result)

        # Convert enums
        result = self._convert_enums(result)

        # Convert expressions
        result = self._convert_expressions(result)

        # Clean up
        result = re.sub(r'\n{3,}', '\n\n', result)
        result = re.sub(r'\s+$', '', result, flags=re.MULTILINE)

        return result

    def _convert_type_defs(self, content: str) -> str:
        """Convert class/struct/interface definitions"""
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

            self.current_class = name
            self.is_interface = (kind == 'interface')

            # Build modifiers
            mods = []
            if static_kw:
                mods.append('static')

            # Determine C++ type keyword
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
                base_list = [b.strip() for b in bases[1:].split(',')]
                cpp_base_list = []
                for base in base_list:
                    base = base.strip()
                    if not base:
                        continue
                    if kind == 'interface':
                        cpp_base_list.append(f'public {base}')
                    else:
                        cpp_base_list.append(base)
                if cpp_base_list:
                    cpp_bases = ' : ' + ', '.join(cpp_base_list)

            # Add GUID for interfaces
            guid_attr = ''
            if kind == 'interface' and self.guid_value:
                guid_attr = f'\n    __declspec(uuid("{self.guid_value}"))'

            access_str = access.strip()
            mods_str = ' '.join(mods) + ' ' if mods else ''
            
            return f'{access_str}{mods_str}{cpp_kind} {name}{cpp_generics}{cpp_bases}{guid_attr}\n{{'

        return re.sub(pattern, replace, content)

    def _convert_methods(self, content: str) -> str:
        """Convert method definitions"""
        # Match method signatures
        pattern = r'(public\s+|private\s+|protected\s+|internal\s+)?(static\s+)?(virtual\s+)?(override\s+)?(abstract\s+)?(extern\s+)?(unsafe\s+)?(\w+(?:\?)?)(?:<[^>]+>)?\s+(\w+)\s*\(([^)]*)\)\s*(?:where\s+[^{]+)?\s*(\{|=>|;)'

        def replace(match):
            access = match.group(1) or ''
            static_kw = match.group(2) or ''
            virtual_kw = match.group(3) or ''
            override_kw = match.group(4) or ''
            abstract_kw = match.group(5) or ''
            extern_kw = match.group(6) or ''
            unsafe_kw = match.group(7) or ''
            return_type = match.group(8)
            method_name = match.group(9)
            params_str = match.group(10)
            body_start = match.group(11)

            cpp_return = self.convert_type(return_type)
            cpp_params = self._convert_parameters(params_str)

            mods = []
            if static_kw:
                mods.append('static')
            if virtual_kw:
                mods.append('virtual')
            if override_kw:
                mods.append('override')
            if abstract_kw:
                mods.append('pure')

            access_str = access.strip()
            mods_str = ' '.join(mods) + ' ' if mods else ''

            if body_start == ';':
                # Abstract method or declaration
                return f'{access_str}{mods_str}{cpp_return} {method_name}({cpp_params});'
            elif body_start == '=>':
                # Expression-bodied method - will be handled separately
                return f'{access_str}{mods_str}{cpp_return} {method_name}({cpp_params})'
            else:
                return f'{access_str}{mods_str}{cpp_return} {method_name}({cpp_params})\n        {{'

        result = re.sub(pattern, replace, content)
        
        # Handle expression-bodied methods
        expr_pattern = r'(\w+(?:\?)?)\s+(\w+)\s*\(([^)]*)\)\s*=>\s*([^;]+);'
        
        def replace_expr(match):
            return_type = match.group(1)
            method_name = match.group(2)
            params_str = match.group(3)
            expr = match.group(4)

            cpp_return = self.convert_type(return_type)
            cpp_params = self._convert_parameters(params_str)
            cpp_expr = self._convert_expression(expr)

            return f'{cpp_return} {method_name}({cpp_params}) const {{ return {cpp_expr}; }}'

        result = re.sub(expr_pattern, replace_expr, result)

        return result

    def _convert_parameters(self, params_str: str) -> str:
        """Convert parameter list"""
        if not params_str.strip():
            return 'void'

        params = []
        # Split by comma, respecting nested generics
        param_list = self._split_params(params_str)

        for param in param_list:
            param = param.strip()
            if not param:
                continue

            # Parse parameter: [ref|out|in|params] [const] type name [= default]
            parts = param.split()
            if len(parts) < 2:
                continue

            is_ref = False
            is_out = False
            is_in = False
            is_params = False
            is_const = False
            
            type_start = 0
            for i, part in enumerate(parts):
                if part == 'ref':
                    is_ref = True
                    type_start = i + 1
                elif part == 'out':
                    is_out = True
                    type_start = i + 1
                elif part == 'in':
                    is_in = True
                    type_start = i + 1
                elif part == 'params':
                    is_params = True
                    type_start = i + 1
                elif part == 'const':
                    is_const = True
                    type_start = i + 1
                else:
                    type_start = i
                    break

            if len(parts) < type_start + 2:
                continue

            param_type = parts[type_start]
            param_name = parts[type_start + 1].rstrip('=,')

            # Remove default value
            if '=' in param:
                param_name = param_name.split('=')[0]

            cpp_type = self.convert_type(param_type)

            # Apply modifiers
            if is_params:
                self.needs_vector = True
                cpp_type = f'std::initializer_list<{cpp_type}>'
            elif is_ref or is_out:
                cpp_type = f'{cpp_type}&'
            elif is_in:
                cpp_type = f'const {cpp_type}&'
            elif cpp_type.startswith('std::') or '<' in cpp_type:
                cpp_type = f'const {cpp_type}&'

            params.append(f'{cpp_type} {param_name}')

        return ', '.join(params) if params else 'void'

    def _split_params(self, params_str: str) -> List[str]:
        """Split parameters respecting nested generics"""
        params = []
        current = ""
        depth = 0

        for char in params_str:
            if char == '<':
                depth += 1
                current += char
            elif char == '>':
                depth -= 1
                current += char
            elif char == ',' and depth == 0:
                params.append(current.strip())
                current = ""
            else:
                current += char

        if current.strip():
            params.append(current.strip())

        return params

    def _convert_properties(self, content: str) -> str:
        """Convert property definitions"""
        # Auto-properties
        auto_pattern = r'(public\s+|private\s+|protected\s+)?(static\s+)?(\w+(?:\?)?)\s+(\w+)\s*\{\s*get;\s*set;\s*\}'

        def replace_auto(match):
            access = match.group(1) or ''
            static_kw = match.group(2) or ''
            prop_type = match.group(3)
            name = match.group(4)

            cpp_type = self.convert_type(prop_type)
            var_name = f'm_{name[0].lower()}{name[1:]}'

            access_str = access.strip() + ': ' if access.strip() else ''
            static_str = 'static ' if static_kw else ''

            return f'{access_str}{static_str}{cpp_type} {var_name}{{}};'

        result = re.sub(auto_pattern, replace_auto, content)

        # Expression-bodied properties
        expr_pattern = r'(public\s+|private\s+|protected\s+)?(\w+(?:\?)?)\s+(\w+)\s*=>\s*([^;]+);'

        def replace_expr(match):
            access = match.group(1) or ''
            prop_type = match.group(2)
            name = match.group(3)
            expr = match.group(4)

            cpp_type = self.convert_type(prop_type)
            cpp_expr = self._convert_expression(expr)

            access_str = access.strip() + ': ' if access.strip() else ''

            return f'{access_str}{cpp_type} get_{name}() const {{ return {cpp_expr}; }}'

        result = re.sub(expr_pattern, replace_expr, result)

        # Full properties with get/set blocks - simplified handling
        # These need manual conversion in most cases
        full_pattern = r'(public\s+|private\s+|protected\s+)?(\w+(?:\?)?)\s+(\w+)\s*\{\s*get\s*\{([^}]*)\}\s*(?:set\s*\{([^}]*)\})?\s*\}'

        def replace_full(match):
            access = match.group(1) or ''
            prop_type = match.group(2)
            name = match.group(3)
            getter = match.group(4)
            setter = match.group(5)

            cpp_type = self.convert_type(prop_type)
            var_name = f'm_{name[0].lower()}{name[1:]}'
            access_str = access.strip() + ': ' if access.strip() else ''

            result = f'{access_str}{cpp_type} {var_name}{{}};\n'
            
            if getter:
                cpp_getter = self._convert_expression(getter.strip())
                result += f'        {access_str}{cpp_type} get_{name}() const {{ return {cpp_getter}; }}\n'
            
            if setter:
                cpp_setter = self._convert_expression(setter.strip())
                result += f'        {access_str}void set_{name}({cpp_type} value) {{ {cpp_setter}; }}'

            return result

        result = re.sub(full_pattern, replace_full, result)

        return result

    def _convert_fields(self, content: str) -> str:
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
                self.needs_cstring = True

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

    def _convert_enums(self, content: str) -> str:
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

            access_str = access.strip() + ': ' if access.strip() else ''
            return f'{access_str}enum class {name} : {cpp_underlying}\n{{\n    ' + ',\n    '.join(values) + '\n};'

        return re.sub(pattern, replace, content)

    def _convert_expression(self, expr: str) -> str:
        """Convert a C# expression to C++"""
        result = expr

        # Replace null with nullptr
        result = re.sub(r'\bnull\b', 'nullptr', result)

        # Replace true/false (keep as-is in C++)
        # result = re.sub(r'\btrue\b', 'true', result)
        # result = re.sub(r'\bfalse\b', 'false', result)

        # Replace default(Type) or default with {}
        result = re.sub(r'default\s*\([^)]*\)', '{}', result)
        result = re.sub(r'\bdefault\b(?!\s*\()', '{}', result)

        # Replace out var declarations
        result = re.sub(r'out\s+\w+\s+(\w+)', r'\1', result)

        # Replace nameof(x) with "x"
        result = re.sub(r'nameof\s*\(([^)]+)\)', r'"\1"', result)

        # Replace typeof(Type) 
        result = re.sub(r'typeof\s*\(([^)]+)\)', r'typeid(\1)', result)

        # Replace string interpolation
        result = re.sub(r'\$"([^"]*)"', r'"\1"', result)

        # Replace ?? operator
        result = re.sub(r'(\w+)\s*\?\?\s*(\w+)', r'(\1 ? \1 : \2)', result)

        # Replace ! (null-forgiving) - just remove it
        result = re.sub(r'!\s*;', ';', result)
        result = re.sub(r'!\s*\)', ')', result)

        # Replace .CheckError() - mark as TODO
        result = re.sub(r'\.CheckError\(\)', '/* CheckError */', result)

        # Replace .Dispose()
        result = re.sub(r'\.Dispose\(\)', '/* Dispose */', result)

        return result

    def _convert_expressions(self, content: str) -> str:
        """Convert expressions throughout content"""
        result = content

        # Replace null with nullptr
        result = re.sub(r'\bnull\b', 'nullptr', result)

        # Replace default(value) patterns
        result = re.sub(r'default\s*\([^)]*\)', '{}', result)

        return result


def main():
    """Main entry point"""
    if len(sys.argv) < 3:
        print("Usage: python improved_converter.py <input_dir> <output_dir>")
        sys.exit(1)

    input_dir = Path(sys.argv[1])
    output_dir = Path(sys.argv[2])

    if not input_dir.exists():
        print(f"Error: Input directory {input_dir} does not exist")
        sys.exit(1)

    converter = ImprovedCSharpToCppConverter()

    cs_files = sorted(input_dir.rglob('*.cs'))
    print(f"Found {len(cs_files)} C# files to convert")

    success_count = 0
    fail_count = 0

    for cs_file in cs_files:
        rel_path = cs_file.relative_to(input_dir)
        output_path = output_dir / rel_path.with_suffix('.h')

        try:
            if converter.convert_file(str(cs_file), str(output_path)):
                success_count += 1
                print(f"✓ {rel_path}")
            else:
                fail_count += 1
                print(f"✗ {rel_path}")
        except Exception as e:
            fail_count += 1
            print(f"✗ {rel_path}: {e}")

    print(f"\nConversion complete: {success_count} succeeded, {fail_count} failed")

    if fail_count > 0:
        sys.exit(1)


if __name__ == '__main__':
    main()
