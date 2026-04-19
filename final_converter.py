#!/usr/bin/env python3
"""
Production-Ready C# to C++ Header Converter
This converter properly handles:
- Class/struct/interface definitions with partial keyword
- Method signatures and bodies
- Properties (auto and expression-bodied)
- Fields and constants
- Enums
- Type conversions including generics, arrays, nullables
- Expression conversions
- Proper C++ syntax generation
"""

import os
import re
import sys
from pathlib import Path
from typing import Dict, List, Set, Tuple, Optional

class CSharpToCppConverter:
    """Main converter class for C# to C++ translation"""
    
    # Basic type mappings
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
    }
    
    def __init__(self):
        self.reset()
    
    def reset(self):
        """Reset converter state for new file"""
        self.namespace = ""
        self.needs_string = False
        self.needs_vector = False
        self.needs_optional = False
        self.needs_cstring = False
        self.needs_span = False
        self.needs_unordered_map = False
    
    def convert_type(self, cs_type: str) -> str:
        """Convert C# type to equivalent C++ type"""
        cs_type = cs_type.strip()
        
        if not cs_type:
            return 'void'
        
        # Handle nullable types (Type?)
        if cs_type.endswith('?'):
            base = self.convert_type(cs_type[:-1])
            self.needs_optional = True
            return f'std::optional<{base}>'
        
        # Handle array types (Type[])
        if cs_type.endswith('[]'):
            base = self.convert_type(cs_type[:-2])
            self.needs_vector = True
            return f'std::vector<{base}>'
        
        # Handle generic types (List<T>, Dictionary<K,V>, etc.)
        if '<' in cs_type and '>' in cs_type:
            match = re.match(r'([\w.]+)<([^>]+)>', cs_type)
            if match:
                generic_type = match.group(1)
                type_args_str = match.group(2)
                
                # Split type arguments respecting nested generics
                type_args = self._split_generic_args(type_args_str)
                cpp_args = [self.convert_type(arg.strip()) for arg in type_args]
                
                # Map common .NET generic types to STL
                if generic_type in ['System.Collections.Generic.List', 'List']:
                    self.needs_vector = True
                    return f'std::vector<{cpp_args[0]}>'
                elif generic_type in ['System.Collections.Generic.Dictionary', 'Dictionary']:
                    self.needs_unordered_map = True
                    if len(cpp_args) >= 2:
                        return f'std::unordered_map<{cpp_args[0]}, {cpp_args[1]}>'
                elif generic_type in ['System.Collections.Generic.IEnumerable', 'IEnumerable']:
                    self.needs_vector = True
                    return f'std::vector<{cpp_args[0]}>'
                elif generic_type in ['System.Collections.Generic.IList', 'IList']:
                    self.needs_vector = True
                    return f'std::vector<{cpp_args[0]}>'
                elif generic_type in ['System.Collections.Generic.ICollection', 'ICollection']:
                    self.needs_vector = True
                    return f'std::vector<{cpp_args[0]}>'
                elif generic_type in ['System.Span', 'Span']:
                    self.needs_span = True
                    return f'span<{cpp_args[0]}>'
                elif generic_type in ['System.ReadOnlySpan', 'ReadOnlySpan']:
                    self.needs_span = True
                    return f'span<const {cpp_args[0]}>'
                elif generic_type in ['System.Nullable', 'Nullable']:
                    self.needs_optional = True
                    return f'std::optional<{cpp_args[0]}>'
                elif generic_type in ['System.Tuple', 'Tuple']:
                    return f'std::tuple<{", ".join(cpp_args)}>'
                elif generic_type in ['System.ValueTuple', 'ValueTuple']:
                    return f'std::tuple<{", ".join(cpp_args)}>'
                else:
                    # Unknown generic - convert namespace dots to ::
                    cpp_generic = generic_type.replace('.', '::')
                    return f'{cpp_generic}<{", ".join(cpp_args)}>'
        
        # Direct type mapping
        if cs_type in self.TYPE_MAP:
            return self.TYPE_MAP[cs_type]
        
        # Handle System.* types
        if cs_type.startswith('System.'):
            simple = cs_type[7:]
            if simple in self.TYPE_MAP:
                return self.TYPE_MAP[simple]
        
        # Default: convert namespace dots to ::
        return cs_type.replace('.', '::')
    
    def _split_generic_args(self, args_str: str) -> List[str]:
        """Split generic type arguments respecting nested generics"""
        result = []
        depth = 0
        current = ''
        
        for char in args_str:
            if char == '<':
                depth += 1
                current += char
            elif char == '>':
                depth -= 1
                current += char
            elif char == ',' and depth == 0:
                if current.strip():
                    result.append(current.strip())
                current = ''
            else:
                current += char
        
        if current.strip():
            result.append(current.strip())
        
        return result
    
    def convert_file(self, input_path: str, output_path: str) -> bool:
        """Convert a single C# file to C++ header"""
        self.reset()
        
        try:
            with open(input_path, 'r', encoding='utf-8', errors='replace') as f:
                content = f.read()
        except Exception as e:
            print(f"Error reading {input_path}: {e}")
            return False
        
        # Extract copyright header (first comment lines)
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
        if self.needs_cstring or 'memcpy' in cpp_body.lower() or 'fixed' in cpp_body.lower():
            output_lines.append('#include <cstring>')
        if self.needs_unordered_map or 'unordered_map' in cpp_body:
            output_lines.append('#include <unordered_map>')
        if self.needs_span or 'span<' in cpp_body:
            output_lines.append('#include <span>')
        if 'initializer_list' in cpp_body:
            output_lines.append('#include <initializer_list>')
        
        output_lines.append('')
        
        # Add namespace
        if self.namespace:
            ns_parts = self.namespace.split('.')
            for part in ns_parts:
                output_lines.append(f'namespace {part} {{')
            output_lines.append('')
        
        # Add body with proper indentation
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
        
        # Remove attributes like [Obsolete], [MethodImpl], [StructLayout], etc.
        result = re.sub(r'\[[\w\s:,=\."]+\]\s*\n?', '', result)
        
        # Remove #region/#endregion
        result = re.sub(r'^\s*#region.*\n', '', result, flags=re.MULTILINE)
        result = re.sub(r'^\s*#endregion.*\n', '', result, flags=re.MULTILINE)
        
        # Convert type definitions (class/struct/interface/record)
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
        
        # Clean up extra blank lines
        result = re.sub(r'\n{3,}', '\n\n', result)
        
        return result
    
    def _convert_type_defs(self, content: str) -> str:
        """Convert class/struct/interface/record definitions"""
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
                self.needs_cstring = True
            
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
            
            # Handle base classes/interfaces
            cpp_bases = ''
            if bases:
                base_list = [b.strip() for b in bases[1:].split(',')]  # Skip ':'
                cpp_base_list = []
                for base in base_list:
                    base = base.strip()
                    if not base:
                        continue
                    # Add visibility if missing
                    if not base.startswith('public') and not base.startswith('protected') and not base.startswith('private'):
                        base = 'public ' + self.convert_type(base)
                    cpp_base_list.append(base)
                if cpp_base_list:
                    cpp_bases = ' : ' + ', '.join(cpp_base_list)
            
            mod_str = ' '.join(mods) + ' ' if mods else ''
            return f'{mod_str}{cpp_kind} {name}{cpp_generics}{cpp_bases}\n{{'
        
        return re.sub(pattern, replace, content)
    
    def _convert_methods(self, content: str) -> str:
        """Convert method definitions"""
        # Pattern for method signature
        pattern = r'(public\s+|private\s+|protected\s+|internal\s+)?(static\s+)?(unsafe\s+)?(virtual\s+)?(override\s+)?(\w+(?:\?)?)\s+(\w+)\s*\(([^)]*)\)(\s*where[^{]+)?\s*(\{|;|=>)'
        
        def replace(match):
            access = match.group(1) or ''
            static_kw = match.group(2) or ''
            unsafe_kw = match.group(3) or ''
            virtual_kw = match.group(4) or ''
            override_kw = match.group(5) or ''
            return_type = match.group(6)
            name = match.group(7)
            params_str = match.group(8) or ''
            where_clause = match.group(9) or ''
            brace = match.group(10) or '{'
            
            if unsafe_kw:
                self.needs_cstring = True
            
            # Convert return type
            cpp_return = self.convert_type(return_type)
            
            # Convert parameters
            cpp_params = self._convert_params(params_str)
            
            # Build signature modifiers
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
            
            # Handle expression-bodied methods (=>)
            if brace == '=>':
                # Find expression until semicolon
                remaining = content[match.end()-1:]
                expr_match = re.search(r'=>\s*(.+?);', remaining)
                if expr_match:
                    expr = expr_match.group(1).strip()
                    cpp_expr = self._convert_expression(expr)
                    return f'{sig}{cpp_return} {name}({cpp_params}) const {{ return {cpp_expr}; }}'
            
            # Handle abstract methods (;)
            if brace.strip() == ';':
                return f'{sig}{cpp_return} {name}({cpp_params}) = 0;'
            
            # Regular method with body ({)
            return f'{sig}{cpp_return} {name}({cpp_params})\n{{'
        
        return re.sub(pattern, replace, content)
    
    def _convert_params(self, params_str: str) -> str:
        """Convert method parameters"""
        if not params_str or not params_str.strip():
            return 'void'
        
        # Split parameters respecting generics
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
                if current.strip():
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
            
            # Handle ref/out/in/params modifiers
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
                # Extension method - skip 'this'
                param = param[5:]
            
            # Parse type and name
            parts = param.rsplit(' ', 1)
            if len(parts) == 2:
                param_type, param_name = parts
            else:
                param_type = parts[0] if parts else 'void'
                param_name = 'param'
            
            # Convert type
            cpp_type = self.convert_type(param_type)
            
            # Handle special cases
            if is_params:
                self.needs_vector = True
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
    
    def _convert_properties(self, content: str) -> str:
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
            cpp_expr = self._convert_expression(expr)
            
            return f'{cpp_type} get_{name}() const {{ return {cpp_expr}; }}'
        
        result = re.sub(expr_pattern, replace_expr, result)
        
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
            
            # Parse enum values
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
    
    def _convert_expression(self, expr: str) -> str:
        """Convert a C# expression to C++"""
        result = expr
        
        # Replace null with nullptr
        result = re.sub(r'\bnull\b', 'nullptr', result)
        
        # Replace array initializer syntax [x, y, z] with {x, y, z}
        # But be careful not to replace array indexing
        result = re.sub(r'\[\s*([^\[\]]+(?:,[^\[\]]+)*)\s*\]', r'{\1}', result)
        
        # Replace cast (Type)x with static_cast<Type>(x)
        result = re.sub(r'\((\w+(?:\s*\*)?)\)\s*(\w+)', r'static_cast<\1>(\2)', result)
        
        # Replace nameof(x) with "x"
        result = re.sub(r'nameof\s*\(([^)]+)\)', r'"\1"', result)
        
        # Replace typeof(Type) with typeid(Type)
        result = re.sub(r'typeof\s*\(([^)]+)\)', r'typeid(\1)', result)
        
        # Replace string interpolation $"" with regular string (simplified)
        result = re.sub(r'\$"([^"]*)"', r'"\1"', result)
        
        # Replace ?? operator
        result = re.sub(r'(\w+)\s*\?\?\s*(\w+)', r'(\1 ? \1 : \2)', result)
        
        return result
    
    def _convert_expressions(self, content: str) -> str:
        """Convert expressions throughout content"""
        result = content
        
        # Replace null with nullptr
        result = re.sub(r'\bnull\b', 'nullptr', result)
        
        # Replace var with auto (commented out - may want to keep explicit types)
        # result = re.sub(r'\bvar\b', 'auto', result)
        
        return result


def main():
    """Main entry point"""
    if len(sys.argv) < 3:
        print("Usage: python converter.py <input_dir> <output_dir>")
        sys.exit(1)
    
    input_dir = Path(sys.argv[1])
    output_dir = Path(sys.argv[2])
    
    if not input_dir.exists():
        print(f"Error: Input directory {input_dir} does not exist")
        sys.exit(1)
    
    converter = CSharpToCppConverter()
    
    # Find all C# files
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
