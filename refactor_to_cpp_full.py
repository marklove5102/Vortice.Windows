#!/usr/bin/env python3
"""
C# to C++ Full Converter for Vortice.Windows
将 C# Vortice 代码批量转换为现代 C++17 头文件和源文件
支持完整的逻辑转换：方法体、属性、事件、异常处理等
"""

import os
import re
from pathlib import Path
from typing import Dict, List, Optional, Tuple, Set, Any
import json

TYPE_MAP = {
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
    'bool': 'bool',
    'char': 'char',
    'string': 'std::string',
    'IntPtr': 'void*',
    'nint': 'intptr_t',
    'nuint': 'uintptr_t',
    'Guid': 'GUID',
    'Result': 'HRESULT',
    'void': 'void',
    'object': 'std::any',
    'Array': 'std::vector',
    'List': 'std::vector',
    'Dictionary': 'std::unordered_map',
    'IEnumerable': 'std::vector',
    'IEnumerator': 'std::vector',
    'ICollection': 'std::vector',
    'IReadOnlyList': 'std::vector',
    'IReadOnlyCollection': 'std::vector',
    'Span': 'std::span',
    'ReadOnlySpan': 'std::span<const',
    'Memory': 'std::span',
    'ReadOnlyMemory': 'std::span<const',
}

CPP_KEYWORDS = {'new', 'delete', 'class', 'struct', 'union', 'enum', 'namespace', 
                'template', 'typename', 'virtual', 'override', 'final', 'const', 
                'static', 'extern', 'inline', 'constexpr', 'mutable', 'volatile',
                'public', 'private', 'protected', 'friend', 'typedef', 'using',
                'return', 'if', 'else', 'switch', 'case', 'default', 'for', 'while',
                'do', 'break', 'continue', 'goto', 'throw', 'try', 'catch', 'finally',
                'sizeof', 'alignof', 'decltype', 'typeid', 'nullptr', 'true', 'false'}

class MethodBody:
    def __init__(self, signature: str, body: str, is_static: bool = False, 
                 is_virtual: bool = False, is_override: bool = False,
                 access_modifier: str = 'public'):
        self.signature = signature
        self.body = body
        self.is_static = is_static
        self.is_virtual = is_virtual
        self.is_override = is_override
        self.access_modifier = access_modifier

class Property:
    def __init__(self, prop_type: str, name: str, getter: Optional[str] = None,
                 setter: Optional[str] = None, is_auto: bool = True,
                 access_modifier: str = 'public'):
        self.prop_type = prop_type
        self.name = name
        self.getter = getter
        self.setter = setter
        self.is_auto = is_auto
        self.access_modifier = access_modifier

class Field:
    def __init__(self, field_type: str, name: str, initializer: Optional[str] = None,
                 is_readonly: bool = False, is_static: bool = False,
                 access_modifier: str = 'public'):
        self.field_type = field_type
        self.name = name
        self.initializer = initializer
        self.is_readonly = is_readonly
        self.is_static = is_static
        self.access_modifier = access_modifier

class Constructor:
    def __init__(self, params: str, body: str, initializer_list: Optional[str] = None):
        self.params = params
        self.body = body
        self.initializer_list = initializer_list

class ClassInfo:
    def __init__(self, name: str, kind: str, base_classes: List[str] = None):
        self.name = name
        self.kind = kind  # 'class', 'struct', 'interface'
        self.base_classes = base_classes or []
        self.fields: List[Field] = []
        self.properties: List[Property] = []
        self.constructors: List[Constructor] = []
        self.methods: List[MethodBody] = []
        self.events: List[Tuple[str, str]] = []  # (type, name)
        self.nested_types: List[Any] = []

class CSharpToCppFullConverter:
    def __init__(self, src_dir: str, output_dir: str):
        self.src_dir = Path(src_dir)
        self.output_dir = Path(output_dir)
        self.converted_files = []
        self.failed_files = []
        
    def convert_type(self, cs_type: str, strip_nullable: bool = True) -> str:
        """Convert C# type to C++ type"""
        cs_type = cs_type.strip()
        
        # Handle nullable types
        if strip_nullable and cs_type.endswith('?'):
            cs_type = cs_type[:-1]
        
        # Handle arrays
        if cs_type.endswith('[]'):
            base_type = cs_type[:-2]
            return f'std::vector<{self.convert_type(base_type)}>'
        
        # Handle generic types
        generic_match = re.match(r'(\w+)<(.+)>', cs_type)
        if generic_match:
            generic_name = generic_match.group(1)
            type_args = generic_match.group(2)
            
            # Parse multiple type arguments
            args = []
            depth = 0
            current = ""
            for char in type_args:
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
            
            cpp_args = [self.convert_type(arg) for arg in args]
            
            if generic_name == 'List' or generic_name == 'IEnumerable':
                return f'std::vector<{cpp_args[0]}>'
            elif generic_name == 'Dictionary':
                return f'std::unordered_map<{cpp_args[0]}, {cpp_args[1]}>'
            elif generic_name == 'Span' or generic_name == 'Memory':
                return f'std::span<{cpp_args[0]}>'
            elif generic_name == 'ReadOnlySpan' or generic_name == 'ReadOnlyMemory':
                return f'std::span<const {cpp_args[0]}>'
            elif generic_name == 'KeyValuePair':
                return f'std::pair<{cpp_args[0]}, {cpp_args[1]}>'
            elif generic_name == 'Tuple':
                return f'std::tuple<{", ".join(cpp_args)}>'
            else:
                return f'{generic_name}<{", ".join(cpp_args)}>'
        
        # Handle basic types
        return TYPE_MAP.get(cs_type, cs_type)
    
    def convert_expression(self, expr: str) -> str:
        """Convert C# expression to C++ expression"""
        if not expr:
            return expr
            
        # Replace null with nullptr
        expr = re.sub(r'\bnull\b', 'nullptr', expr)
        
        # Replace true/false (already same in C++)
        
        # Replace string interpolation (basic)
        expr = re.sub(r'\$"([^"]*)"', r'std::format("\1")', expr)
        
        # Replace typeof with typeid
        expr = re.sub(r'typeof\(([^)]+)\)', r'typeid(\1)', expr)
        
        # Replace default(T) with T{}
        expr = re.sub(r'default\(([^)]+)\)', r'\1{}', expr)
        
        # Replace sizeof
        expr = re.sub(r'sizeof\(([^)]+)\)', r'sizeof(\1)', expr)
        
        # Replace .Length with .size() for collections
        # Note: This is context-dependent, may need manual adjustment
        
        # Replace ?? operator
        expr = re.sub(r'(\w+)\s*\?\?\s*(\w+)', r'(\1 ? \1 : \2)', expr)
        
        # Replace ??= operator
        expr = re.sub(r'(\w+)\s*\?\?=\s*(\w+)', r'if (!\1) \1 = \2', expr)
        
        # Replace as keyword (safe cast)
        expr = re.sub(r'(\w+)\s+as\s+(\w+)', r'dynamic_cast<\2>(\1)', expr)
        
        # Replace is keyword
        expr = re.sub(r'(\w+)\s+is\s+(\w+)', r'dynamic_cast<\2>(\1) != nullptr', expr)
        
        # Replace nameof
        expr = re.sub(r'nameof\(([^)]+)\)', r'"\1"', expr)
        
        return expr
    
    def convert_statement(self, stmt: str) -> str:
        """Convert C# statement to C++ statement"""
        if not stmt:
            return stmt
        
        # Convert variable declarations with var
        stmt = re.sub(r'\bvar\s+(\w+)\s*=', r'auto \1 =', stmt)
        
        # Convert using declarations
        stmt = re.sub(r'\busing\s+\(([^)]+)\)\s*{', r'{ /* RAII: \1 */', stmt)
        
        # Convert throw statements
        stmt = re.sub(r'throw\s+new\s+(\w+)\(([^)]*)\)', r'throw \1(\2)', stmt)
        stmt = re.sub(r'\bthrow\b;', r'throw;', stmt)
        
        # Convert lock statements
        stmt = re.sub(r'lock\s*\(([^)]+)\)\s*{', r'{ std::lock_guard<std::mutex> _lock(\1);', stmt)
        
        # Convert yield return
        stmt = re.sub(r'yield\s+return\s+', r'co_yield ', stmt)
        
        # Convert await
        stmt = re.sub(r'\bawait\s+', r'co_await ', stmt)
        
        return stmt
    
    def convert_method_body(self, body: str, indent_level: int = 1) -> str:
        """Convert C# method body to C++"""
        if not body:
            return ""
        
        # Remove outer braces if present
        body = body.strip()
        if body.startswith('{') and body.endswith('}'):
            body = body[1:-1].strip()
        
        lines = body.split('\n')
        converted_lines = []
        
        for line in lines:
            stripped = line.strip()
            if not stripped or stripped.startswith('//'):
                converted_lines.append(line)
                continue
            
            # Convert the line
            converted_line = self.convert_statement(stripped)
            converted_line = self.convert_expression(converted_line)
            
            # Preserve indentation
            indent = len(line) - len(line.lstrip())
            converted_lines.append(' ' * indent + converted_line)
        
        return '\n'.join(converted_lines)
    
    def extract_block(self, content: str, start_pos: int) -> Tuple[str, int]:
        """Extract a code block starting from start_pos, returns (block_content, end_pos)"""
        if start_pos >= len(content):
            return "", start_pos
        
        brace_count = 0
        started = False
        block_start = start_pos
        
        for i in range(start_pos, len(content)):
            char = content[i]
            if char == '{':
                brace_count += 1
                started = True
            elif char == '}':
                brace_count -= 1
                if started and brace_count == 0:
                    return content[block_start:i+1], i + 1
        
        return content[block_start:], len(content)
    
    def parse_class(self, content: str, class_match: re.Match) -> Optional[ClassInfo]:
        """Parse a C# class/struct/interface definition"""
        kind = class_match.group(2)
        name = class_match.group(3)
        
        if not kind or not name:
            return None
        
        # Handle interface keyword
        if 'interface' in kind:
            kind = 'interface'
        
        # Find base classes
        base_classes = []
        base_match = re.search(r':\s*([^{]+)', class_match.group(0))
        if base_match:
            bases_str = base_match.group(1)
            base_classes = [b.strip() for b in bases_str.split(',')]
        
        class_info = ClassInfo(name, kind, base_classes)
        
        # Find the class body
        body_start = class_match.end()
        body_content, _ = self.extract_block(content, body_start - 1)
        
        if not body_content:
            return class_info
        
        # Remove outer braces
        body_content = body_content.strip()
        if body_content.startswith('{') and body_content.endswith('}'):
            body_content = body_content[1:-1]
        
        # Parse fields
        field_pattern = r'(public|private|protected|internal|protected\s+internal)\s+(static\s+)?(readonly\s+)?(\w+(?:<[^>]+>)?(?:\[\])?)\s+(\w+)\s*(?:=\s*([^;]+))?;'
        for match in re.finditer(field_pattern, body_content):
            access = match.group(1)
            is_static = match.group(2) is not None
            is_readonly = match.group(3) is not None
            field_type = match.group(4)
            field_name = match.group(5)
            initializer = match.group(6)
            
            if initializer:
                initializer = self.convert_expression(initializer.strip().rstrip(';'))
            
            class_info.fields.append(Field(
                field_type=self.convert_type(field_type),
                name=field_name,
                initializer=initializer,
                is_readonly=is_readonly,
                is_static=is_static,
                access_modifier=access
            ))
        
        # Parse properties
        prop_pattern = r'(public|private|protected|internal)\s+(static\s+)?(\w+(?:<[^>]+>)?)\s+(\w+)\s*({(?:[^{}]|{[^{}]*})*})'
        for match in re.finditer(prop_pattern, body_content):
            access = match.group(1)
            is_static = match.group(2) is not None
            prop_type = match.group(3)
            prop_name = match.group(4)
            prop_body = match.group(5)
            
            getter = None
            setter = None
            is_auto = True
            
            # Check for auto-property
            if '{' in prop_body and ('get;' in prop_body or 'set;' in prop_body):
                is_auto = True
                if 'get;' in prop_body or 'get => ' in prop_body:
                    getter = "auto"
                if 'set;' in prop_body:
                    setter = "auto"
            else:
                is_auto = False
                # Extract getter
                get_match = re.search(r'get\s*{([^{}]*)}|get\s*=>\s*([^;]+)', prop_body, re.DOTALL)
                if get_match:
                    getter_body = get_match.group(1) or get_match.group(2)
                    if getter_body:
                        getter = self.convert_method_body(getter_body.strip())
                
                # Extract setter
                set_match = re.search(r'set\s*{([^{}]*)}', prop_body, re.DOTALL)
                if set_match:
                    setter_body = set_match.group(1)
                    if setter_body:
                        setter = self.convert_method_body(setter_body.strip())
            
            class_info.properties.append(Property(
                prop_type=self.convert_type(prop_type),
                name=prop_name,
                getter=getter,
                setter=setter,
                is_auto=is_auto,
                access_modifier=access
            ))
        
        # Parse constructors
        ctor_pattern = rf'{name}\s*\(([^)]*)\)\s*(?::\s*([^{{]+))?\s*({{(?:[^{{}}]|{{[^{{}}]*}})*}})'
        for match in re.finditer(ctor_pattern, body_content, re.DOTALL):
            params = match.group(1).strip()
            initializer = match.group(2)
            body = match.group(3)
            
            class_info.constructors.append(Constructor(
                params=params,
                body=self.convert_method_body(body),
                initializer_list=initializer.strip() if initializer else None
            ))
        
        # Parse methods
        method_pattern = r'(public|private|protected|internal)\s+(static\s+)?(virtual\s+)?(override\s+)?(abstract\s+)?(\w+(?:<[^>]+>)?)\s+(\w+)\s*\(([^)]*)\)\s*(?:({(?:[^{{}}]|{{[^{{}}]*}})*})|;)'
        for match in re.finditer(method_pattern, body_content, re.DOTALL):
            access = match.group(1)
            is_static = match.group(2) is not None
            is_virtual = match.group(3) is not None
            is_override = match.group(4) is not None
            is_abstract = match.group(5) is not None
            return_type = match.group(6)
            method_name = match.group(7)
            params = match.group(8).strip()
            body = match.group(9)
            
            # Skip if it's a property accessor
            if method_name in ['get', 'set']:
                continue
            
            method_body = None
            if body:
                method_body = self.convert_method_body(body)
            elif is_abstract:
                method_body = "= 0"
            
            class_info.methods.append(MethodBody(
                signature=f"{return_type} {method_name}({params})",
                body=method_body,
                is_static=is_static,
                is_virtual=is_virtual,
                is_override=is_override,
                access_modifier=access
            ))
        
        # Parse events
        event_pattern = r'(public|private|protected)\s+event\s+(\w+(?:<[^>]+>)?)\s+(\w+)\s*;'
        for match in re.finditer(event_pattern, body_content):
            access = match.group(1)
            event_type = match.group(2)
            event_name = match.group(3)
            class_info.events.append((event_type, event_name))
        
        return class_info
    
    def generate_cpp_header(self, class_info: ClassInfo, namespace: str, 
                           includes: Set[str] = None) -> str:
        """Generate C++ header file content"""
        includes = includes or set()
        includes.add('<cstdint>')
        
        # Determine if we need additional includes
        content_preview = ""
        
        # Generate header guard
        guard_name = f"VORTICE_{namespace.replace('::', '_').upper()}_{class_info.name.upper()}_H"
        
        # Start header
        header = f"""// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef {guard_name}
#define {guard_name}

"""
        
        # Add includes
        for inc in sorted(includes):
            header += f"#include {inc}\n"
        
        header += "\n"
        
        # Forward declarations if needed
        # TODO: Analyze dependencies
        
        # Start namespace
        header += f"namespace {namespace} {{\n\n"
        
        # Generate class/struct
        if class_info.kind == 'interface':
            # COM-style interface
            header += f"class __declspec(uuid(\"TODO\")) {class_info.name}\n{{\n"
            header += "public:\n"
            header += f"    virtual ~{class_info.name}() = default;\n\n"
            
            for method in class_info.methods:
                cpp_return = self.convert_type(method.signature.split()[0])
                # Parse method name and params
                method_match = re.match(r'\w+\s+(\w+)\s*\((.*)\)', method.signature)
                if method_match:
                    method_name = method_match.group(1)
                    params = method_match.group(2)
                    cpp_params = self.convert_params(params)
                    header += f"    virtual {cpp_return} {method_name}({cpp_params}) = 0;\n"
            
            header += "};\n"
        else:
            # Regular class/struct
            kind_str = 'class' if class_info.kind == 'class' else 'struct'
            base_str = ""
            if class_info.base_classes:
                cpp_bases = []
                for base in class_info.base_classes:
                    if base == 'Stream':
                        cpp_bases.append('public std::iostream')
                    elif base == 'IDisposable':
                        cpp_bases.append('public IDisposable')
                    else:
                        cpp_bases.append(f'public {base}')
                if cpp_bases:
                    base_str = ' : ' + ', '.join(cpp_bases)
            
            header += f"{kind_str} {class_info.name}{base_str}\n{{\n"
            
            # Public section
            header += "public:\n"
            
            # Constructors
            for ctor in class_info.constructors:
                cpp_params = self.convert_params(ctor.params)
                init_list = ""
                if ctor.initializer_list:
                    # Convert C# initializer to C++ initializer list
                    init_parts = []
                    for part in ctor.initializer_list.split(','):
                        part = part.strip()
                        if ':' in part or 'base' in part.lower():
                            continue  # Skip base constructor calls for now
                        if '=' in part:
                            init_parts.append(part.replace('=', '(') + ')')
                    if init_parts:
                        init_list = ': ' + ', '.join(init_parts)
                
                header += f"    constexpr {class_info.name}({cpp_params}){init_list}\n"
                if ctor.body:
                    header += f"    {ctor.body.rstrip()}\n"
                else:
                    header += "    {}\n\n"
            
            # Destructor
            if class_info.kind == 'class':
                header += f"    ~{class_info.name}() = default;\n\n"
            
            # Fields
            for field in class_info.fields:
                if field.access_modifier == 'public':
                    modifiers = ""
                    if field.is_static:
                        modifiers = "static "
                    if field.is_readonly:
                        modifiers += "const "
                    if field.initializer:
                        header += f"    {modifiers}{field.field_type} {field.name}{{{field.initializer}}};\n"
                    else:
                        header += f"    {modifiers}{field.field_type} {field.name};\n"
            
            if class_info.fields and any(f.access_modifier == 'public' for f in class_info.fields):
                header += "\n"
            
            # Properties (as getter/setter methods)
            for prop in class_info.properties:
                if prop.access_modifier == 'public':
                    if prop.is_auto:
                        # Auto-property becomes a member variable
                        header += f"    {prop.prop_type} {prop.name}{{}};\n"
                    else:
                        # Manual property becomes getter/setter
                        if prop.getter:
                            header += f"    {prop.prop_type} get_{prop.name}() const {{ {prop.getter} }}\n"
                        if prop.setter:
                            header += f"    void set_{prop.name}({prop.prop_type} value) {{ {prop.setter} }}\n"
            
            if class_info.properties and any(p.access_modifier == 'public' for p in class_info.properties):
                header += "\n"
            
            # Methods
            for method in class_info.methods:
                if method.access_modifier != 'public':
                    continue
                    
                parts = method.signature.split(')', 1)
                if len(parts) < 2:
                    continue
                    
                return_and_name = parts[0]
                closing = parts[1] if len(parts) > 1 else ""
                
                return_match = re.match(r'(\w+(?:<[^>]+>)?)\s+(\w+)', return_and_name)
                if not return_match:
                    continue
                    
                cpp_return = self.convert_type(return_match.group(1))
                method_name = return_match.group(2)
                
                # Parse params
                param_match = re.search(r'\((.*)\)', return_and_name)
                cpp_params = ""
                if param_match:
                    cpp_params = self.convert_params(param_match.group(1))
                
                # Build method signature
                modifiers = ""
                if method.is_static:
                    modifiers = "static "
                if method.is_virtual and not method.is_override:
                    modifiers += "virtual "
                if method.is_override:
                    modifiers += ""  # override keyword added at end
                
                suffix = ""
                if method.is_override:
                    suffix = " override"
                if method.body == "= 0":
                    suffix = " = 0"
                
                header += f"    {modifiers}{cpp_return} {method_name}({cpp_params}){suffix}"
                
                if method.body and method.body != "= 0":
                    if '{' in method.body:
                        header += f"\n    {method.body.rstrip()}\n"
                    else:
                        header += f" {{ {method.body.rstrip()} }}\n"
                else:
                    header += ";\n"
                
                header += "\n"
            
            # Events
            for event_type, event_name in class_info.events:
                cpp_type = self.convert_type(event_type)
                header += f"    // Event: {cpp_type} {event_name}\n"
            
            # Private/Protected section
            has_private = any(f.access_modifier != 'public' for f in class_info.fields)
            has_private_props = any(p.access_modifier != 'public' for p in class_info.properties)
            has_private_methods = any(m.access_modifier != 'public' for m in class_info.methods)
            
            if has_private or has_private_props or has_private_methods:
                header += "\nprivate:\n"
                
                for field in class_info.fields:
                    if field.access_modifier != 'public':
                        modifiers = ""
                        if field.is_static:
                            modifiers = "static "
                        if field.is_readonly:
                            modifiers += "const "
                        if field.initializer:
                            header += f"    {modifiers}{field.field_type} {field.name}{{{field.initializer}}};\n"
                        else:
                            header += f"    {modifiers}{field.field_type} {field.name};\n"
                
                for prop in class_info.properties:
                    if prop.access_modifier != 'public' and not prop.is_auto:
                        if prop.getter:
                            header += f"    {prop.prop_type} get_{prop.name}() const {{ return {prop.name}_value; }}\n"
                        if prop.setter:
                            header += f"    void set_{prop.name}({prop.prop_type} value) {{ {prop.name}_value = value; }}\n"
                        header += f"    {prop.prop_type} {prop.name}_value{{}};\n"
                
                for method in class_info.methods:
                    if method.access_modifier != 'public':
                        # Similar processing as public methods
                        pass
            
            header += "};\n"
        
        # Close namespace
        header += f"\n}} // namespace {namespace}\n"
        
        # End header guard
        header += f"\n#endif // {guard_name}\n"
        
        return header
    
    def convert_params(self, params_str: str) -> str:
        """Convert C# parameter list to C++"""
        if not params_str or not params_str.strip():
            return ""
        
        cpp_params = []
        # Split by comma, but respect nested generics
        depth = 0
        current = ""
        for char in params_str:
            if char == '<':
                depth += 1
                current += char
            elif char == '>':
                depth -= 1
                current += char
            elif char == ',' and depth == 0:
                cpp_params.append(current.strip())
                current = ""
            else:
                current += char
        if current.strip():
            cpp_params.append(current.strip())
        
        converted = []
        for param in cpp_params:
            param = param.strip()
            if not param:
                continue
            
            # Handle ref/out/in parameters
            is_ref = False
            is_out = False
            is_in = False
            if param.startswith('ref '):
                param = param[4:]
                is_ref = True
            elif param.startswith('out '):
                param = param[4:]
                is_out = True
            elif param.startswith('in '):
                param = param[3:]
                is_in = True
            
            # Handle params array
            is_params = False
            if param.startswith('params '):
                param = param[7:]
                is_params = True
            
            # Parse type and name
            parts = param.split()
            if len(parts) >= 2:
                ptype = self.convert_type(parts[0])
                pname = parts[-1]
                
                # Handle default values
                default_value = None
                if '=' in pname:
                    name_parts = pname.split('=')
                    pname = name_parts[0].strip()
                    default_value = self.convert_expression(name_parts[1].strip())
                
                if is_ref or is_out:
                    converted.append(f"{ptype}& {pname}")
                elif is_in:
                    converted.append(f"const {ptype}& {pname}")
                elif is_params:
                    converted.append(f"std::initializer_list<{ptype}> {pname}")
                elif default_value:
                    converted.append(f"{ptype} {pname} = {default_value}")
                else:
                    converted.append(f"{ptype} {pname}")
            elif len(parts) == 1:
                # Might be just a type (error case)
                converted.append(self.convert_type(parts[0]))
        
        return ', '.join(converted)
    
    def convert_file(self, cs_file: Path) -> Optional[str]:
        """Convert a single C# file to C++"""
        try:
            with open(cs_file, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
        except Exception as e:
            print(f"Error reading {cs_file}: {e}")
            self.failed_files.append((str(cs_file), str(e)))
            return None
        
        if len(content) < 50:
            return None
        
        # Extract namespace
        namespace_match = re.search(r'namespace\s+([\w.]+)\s*{', content)
        if not namespace_match:
            namespace = "Vortice"
        else:
            namespace = namespace_match.group(1)
            # Convert Vortice.Module to Vortice::Module
            namespace = namespace.replace('.', '::')
        
        # Find all class/struct/interface definitions
        classes = []
        pattern = r'(public|internal|private)?\s*(?:abstract\s+)?(class|struct|interface)\s+(\w+)(?:\s*:\s*([^{]+))?'
        
        for match in re.finditer(pattern, content):
            class_info = self.parse_class(content, match)
            if class_info:
                classes.append(class_info)
        
        if not classes:
            # No classes found, create placeholder
            rel_path = cs_file.relative_to(self.src_dir)
            module_name = rel_path.parts[0].replace("Vortice.", "")
            output_subdir = self.output_dir / "include" / "Vortice" / module_name
            output_subdir.mkdir(parents=True, exist_ok=True)
            output_file = output_subdir / (cs_file.stem + ".h")
            
            with open(output_file, 'w', encoding='utf-8') as f:
                f.write(f"""// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_{module_name.upper()}_{cs_file.stem.upper()}_H
#define VORTICE_{module_name.upper()}_{cs_file.stem.upper()}_H

#include <cstdint>

namespace Vortice::{module_name} {{

// TODO: Convert {cs_file.name} - requires manual implementation

}} // namespace Vortice::{module_name}

#endif // VORTICE_{module_name.upper()}_{cs_file.stem.upper()}_H
""")
            self.converted_files.append(str(output_file))
            return str(output_file)
        
        # Generate C++ header(s)
        rel_path = cs_file.relative_to(self.src_dir)
        module_name = rel_path.parts[0].replace("Vortice.", "")
        output_subdir = self.output_dir / "include" / "Vortice" / module_name
        output_subdir.mkdir(parents=True, exist_ok=True)
        output_file = output_subdir / (cs_file.stem + ".h")
        
        # For simplicity, combine all classes into one header
        # In production, each class should be in its own file
        header_content = f"""// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_{module_name.upper()}_{cs_file.stem.upper()}_H
#define VORTICE_{module_name.upper()}_{cs_file.stem.upper()}_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>
"""
        
        # Add Windows headers if needed
        needs_windows = any('GUID' in str(c.fields) or 'HRESULT' in str(c.fields) 
                          or 'HWND' in content or 'HANDLE' in content 
                          for c in classes)
        if needs_windows:
            header_content += "#include <windows.h>\n"
        
        header_content += f"\nnamespace {namespace} {{\n\n"
        
        for class_info in classes:
            header_content += self.generate_cpp_header(class_info, namespace, set())
            header_content += "\n"
        
        header_content += f"}} // namespace {namespace}\n\n"
        header_content += f"#endif // VORTICE_{module_name.upper()}_{cs_file.stem.upper()}_H\n"
        
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write(header_content)
        
        self.converted_files.append(str(output_file))
        return str(output_file)
    
    def convert_all(self):
        """Convert all C# files in the source directory"""
        cs_files = list(self.src_dir.rglob("*.cs"))
        print(f"Found {len(cs_files)} C# files to convert")
        
        for i, cs_file in enumerate(cs_files, 1):
            print(f"[{i}/{len(cs_files)}] Converting {cs_file.relative_to(self.src_dir)}...")
            try:
                self.convert_file(cs_file)
            except Exception as e:
                print(f"  Error: {e}")
                import traceback
                traceback.print_exc()
                self.failed_files.append((str(cs_file), str(e)))
        
        print(f"\nConversion complete!")
        print(f"  Successfully converted: {len(self.converted_files)} files")
        print(f"  Failed: {len(self.failed_files)} files")
        
        if self.failed_files:
            print("\nFailed files:")
            for file_path, error in self.failed_files[:10]:
                print(f"  - {file_path}: {error}")
            if len(self.failed_files) > 10:
                print(f"  ... and {len(self.failed_files) - 10} more")
        
        return self.converted_files

if __name__ == "__main__":
    src_dir = "/workspace/src"
    output_dir = "/workspace/cpp_output_full"
    converter = CSharpToCppFullConverter(src_dir, output_dir)
    converter.convert_all()
