#!/usr/bin/env python3
"""
C# to C++ Header Converter for Vortice.Windows
将 C# Vortice 代码批量转换为现代 C++17 头文件
"""

import os
import re
from pathlib import Path
from typing import Dict, List, Optional, Tuple

# C# 类型到 C++ 类型的映射
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
}

# C# 结构体大小映射
STRUCT_SIZE_MAP = {
    'UInt24': 3,
}

class CSharpToCppConverter:
    def __init__(self, src_dir: str, output_dir: str):
        self.src_dir = Path(src_dir)
        self.output_dir = Path(output_dir)
        self.converted_files = []
        
    def convert_type(self, cs_type: str) -> str:
        """转换 C# 类型到 C++ 类型"""
        # 处理可空类型
        if cs_type.endswith('?'):
            cs_type = cs_type[:-1]
        
        # 处理数组
        if cs_type.endswith('[]'):
            base_type = cs_type[:-2]
            return f'std::vector<{self.convert_type(base_type)}>'
        
        # 处理泛型 (简化处理)
        if '<' in cs_type and '>' in cs_type:
            # 保留泛型但转换内部类型
            return cs_type
        
        return TYPE_MAP.get(cs_type, cs_type)
    
    def convert_enum(self, content: str, class_name: str) -> str:
        """转换 C# 枚举到 C++ enum class"""
        # 提取枚举定义
        enum_match = re.search(r'public\s+enum\s+(\w+)(?:\s*:\s*(\w+))?\s*\{([^}]+)\}', content, re.DOTALL)
        if not enum_match:
            return ""
        
        enum_name = enum_match.group(1)
        underlying_type = enum_match.group(2) or 'int'
        enum_body = enum_match.group(3)
        
        cpp_underlying = self.convert_type(underlying_type)
        
        # 转换枚举值
        cpp_values = []
        for line in enum_body.strip().split('\n'):
            line = line.strip()
            if not line or line.startswith('//') or line.startswith('///'):
                continue
            
            # 移除注释
            if '//' in line:
                line = line[:line.index('//')].strip()
            
            # 处理带值的枚举
            if '=' in line:
                parts = line.split('=')
                name = parts[0].strip()
                value = parts[1].strip().rstrip(',')
                cpp_values.append(f'    {name} = {value}')
            else:
                name = line.rstrip(',')
                cpp_values.append(f'    {name}')
        
        cpp_enum = f"enum class {enum_name} : {cpp_underlying}\n{{\n"
        cpp_enum += ',\n'.join(cpp_values)
        cpp_enum += '\n};\n'
        
        return cpp_enum
    
    def convert_struct(self, content: str, class_name: str, file_path: Path) -> str:
        """转换 C# struct/class 到 C++ struct/class"""
        # 判断是否为 interface
        is_interface = 'interface ' in content and 'struct' not in content.split('interface')[1].split('{')[0]
        
        # 提取类/结构体定义
        pattern = r'public\s+(?:readonly\s+)?(struct|class|interface)\s+(\w+)'
        match = re.search(pattern, content)
        if not match:
            return ""
        
        kind = match.group(1)
        name = match.group(2)
        
        # 如果是 interface，转换为纯虚类
        if kind == 'interface' or is_interface:
            return self.convert_interface(content, name)
        
        # 提取字段
        fields = []
        field_pattern = r'(?:public|private|protected)\s+(?:readonly\s+)?(\w+(?:<[^>]+>)?)\s+(\w+);'
        for m in re.finditer(field_pattern, content):
            field_type = self.convert_type(m.group(1))
            field_name = m.group(2)
            fields.append((field_type, field_name))
        
        # 提取属性 (简化处理)
        properties = []
        prop_pattern = r'public\s+(?:readonly\s+)?(\w+(?:<[^>]+>)?)\s+(\w+)\s*\{'
        for m in re.finditer(prop_pattern, content):
            prop_type = self.convert_type(m.group(1))
            prop_name = m.group(2)
            properties.append((prop_type, prop_name))
        
        # 提取构造函数
        constructors = []
        ctor_pattern = r'public\s+' + name + r'\s*\(([^)]*)\)'
        for m in re.finditer(ctor_pattern, content):
            params = m.group(1).strip()
            constructors.append(params)
        
        # 提取方法
        methods = []
        method_pattern = r'public\s+(?:static\s+)?(?:readonly\s+)?(\w+(?:<[^>]+>)?)\s+(\w+)\s*\(([^)]*)\)'
        for m in re.finditer(method_pattern, content):
            return_type = self.convert_type(m.group(1))
            method_name = m.group(2)
            params = m.group(3)
            methods.append((return_type, method_name, params))
        
        # 生成 C++ 代码
        cpp_code = self.generate_cpp_struct(name, fields, properties, constructors, methods, content)
        return cpp_code
    
    def convert_interface(self, content: str, name: str) -> str:
        """转换 C# interface 到 C++ 纯虚类"""
        # 提取方法签名
        methods = []
        method_pattern = r'(\w+(?:<[^>]+>)?)\s+(\w+)\s*\(([^)]*)\)'
        for m in re.finditer(method_pattern, content):
            return_type = self.convert_type(m.group(1))
            method_name = m.group(2)
            params = m.group(3)
            if method_name != name:  # 排除构造函数
                methods.append((return_type, method_name, params))
        
        # 生成纯虚类
        cpp_code = f"class __declspec(uuid(\"TODO\")) {name}\n{{\n"
        cpp_code += "public:\n"
        cpp_code += f"    virtual ~{name}() = default;\n\n"
        
        for return_type, method_name, params in methods:
            cpp_code += f"    virtual {return_type} {method_name}({params}) = 0;\n"
        
        cpp_code += "};\n"
        return cpp_code
    
    def generate_cpp_struct(self, name: str, fields: List[Tuple], 
                           properties: List[Tuple], constructors: List[str],
                           methods: List[Tuple], original_content: str) -> str:
        """生成 C++ struct 代码"""
        cpp = f"struct {name}\n{{\n"
        
        # 字段
        if fields:
            cpp += "    // Fields\n"
            for field_type, field_name in fields:
                cpp += f"    {field_type} {field_name};\n"
            cpp += "\n"
        
        # 属性作为成员变量
        if properties:
            cpp += "    // Properties\n"
            for prop_type, prop_name in properties:
                cpp += f"    {prop_type} {prop_name};\n"
            cpp += "\n"
        
        # 构造函数
        if constructors:
            cpp += "    // Constructors\n"
            for params in constructors:
                cpp_params = []
                if params:
                    for param in params.split(','):
                        param = param.strip()
                        if param:
                            parts = param.split()
                            if len(parts) >= 2:
                                ptype = self.convert_type(parts[0])
                                pname = parts[-1]
                                cpp_params.append(f"{ptype} {pname}")
                
                cpp += f"    constexpr {name}({', '.join(cpp_params)})\n"
                cpp += f"        : {fields[0][1] if fields else 'm_dummy'}(0)"
                for i, (_, fname) in enumerate(fields[1:], 1):
                    cpp += f", {fname}(0)"
                cpp += " {}\n\n"
        
        # 方法
        if methods:
            cpp += "    // Methods\n"
            for return_type, method_name, params in methods:
                cpp += f"    {return_type} {method_name}({params});\n"
        
        cpp += "};\n"
        return cpp
    
    def generate_header_guard(self, module_name: str, file_name: str) -> str:
        """生成头文件保护宏"""
        safe_module = module_name.replace('.', '_').upper()
        safe_file = file_name.replace('.', '_').replace('-', '_').upper()
        return f"VORTICE_{safe_module}_{safe_file}_H"
    
    def convert_file(self, cs_file: Path) -> Optional[str]:
        """转换单个 C# 文件到 C++"""
        try:
            with open(cs_file, 'r', encoding='utf-8') as f:
                content = f.read()
        except Exception as e:
            print(f"Error reading {cs_file}: {e}")
            return None
        
        # 跳过太小的文件
        if len(content) < 50:
            return None
        
        # 确定模块名称
        rel_path = cs_file.relative_to(self.src_dir)
        module_name = rel_path.parts[0]
        
        # 生成输出路径
        output_subdir = self.output_dir / "include" / "Vortice" / module_name.replace("Vortice.", "")
        output_subdir.mkdir(parents=True, exist_ok=True)
        
        output_file = output_subdir / (cs_file.stem + ".h")
        
        # 生成头文件保护
        header_guard = self.generate_header_guard(module_name, cs_file.stem)
        
        # 生成版权头
        header = f"""// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef {header_guard}
#define {header_guard}

#include <cstdint>
#include <string>
#include <vector>

namespace Vortice::{module_name.replace("Vortice.", "")} {{

"""
        
        footer = f"""
}} // namespace Vortice::{module_name.replace("Vortice.", "")}

#endif // {header_guard}
"""
        
        # 转换内容
        cpp_content = ""
        
        # 处理枚举
        for enum_match in re.finditer(r'public\s+enum\s+\w+[^{{]*\{[^}]+\}', content, re.DOTALL):
            enum_str = enum_match.group(0)
            enum_name = re.search(r'enum\s+(\w+)', enum_str).group(1)
            cpp_content += self.convert_enum(enum_str, enum_name) + "\n"
        
        # 处理 struct/class
        for struct_match in re.finditer(r'public\s+(?:readonly\s+)?(?:struct|class)\s+\w+[^{{]*\{[^}]+\}', content, re.DOTALL):
            struct_str = struct_match.group(0)
            struct_name = re.search(r'(?:struct|class)\s+(\w+)', struct_str).group(1)
            result = self.convert_struct(struct_str, struct_name, cs_file)
            if result:
                cpp_content += result + "\n"
        
        # 如果没有转换出任何内容，使用简单包装
        if not cpp_content.strip():
            cpp_content = f"// TODO: Convert {cs_file.name}\n"
        
        full_content = header + cpp_content + footer
        
        # 写入文件
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write(full_content)
        
        self.converted_files.append(str(output_file))
        return str(output_file)
    
    def convert_all(self):
        """转换所有 C# 文件"""
        cs_files = list(self.src_dir.rglob("*.cs"))
        print(f"Found {len(cs_files)} C# files to convert")
        
        for i, cs_file in enumerate(cs_files, 1):
            print(f"[{i}/{len(cs_files)}] Converting {cs_file.name}...")
            try:
                self.convert_file(cs_file)
            except Exception as e:
                print(f"  Error: {e}")
        
        print(f"\nConversion complete! Converted {len(self.converted_files)} files.")
        return self.converted_files


if __name__ == "__main__":
    import sys
    
    src_dir = "/workspace/src"
    output_dir = "/workspace/cpp_output"
    
    converter = CSharpToCppConverter(src_dir, output_dir)
    converter.convert_all()
