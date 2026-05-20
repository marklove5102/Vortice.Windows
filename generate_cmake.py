#!/usr/bin/env python3
"""Generate CMakeLists.txt for converted C++ headers"""

import os
from pathlib import Path

def generate_cmake(output_dir: str, cpp_source_dir: str):
    """Generate CMakeLists.txt for the C++ headers"""
    
    cpp_path = Path(cpp_source_dir)
    if not cpp_path.exists():
        print(f"Error: {cpp_source_dir} does not exist")
        return False
    
    # Collect all modules
    modules = sorted([d.name for d in cpp_path.iterdir() if d.is_dir()])
    
    cmake_content = f'''cmake_minimum_required(VERSION 3.20)
project(VorticeCPP VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Options
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)
option(ENABLE_D3D11 "Enable Direct3D 11 support" ON)
option(ENABLE_D2D "Enable Direct2D support" ON)
option(ENABLE_DWRITE "Enable DirectWrite support" ON)
option(ENABLE_XAUDIO2 "Enable XAudio2 support" ON)
option(ENABLE_DIRECTML "Enable DirectML support" ON)
option(ENABLE_DXC "Enable DirectX Compiler support" ON)
option(ENABLE_D3DCOMPILER "Enable D3DCompiler support" ON)
option(ENABLE_MEDIAFOUNDATION "Enable Media Foundation support" ON)
option(ENABLE_DIRECTSTORAGE "Enable DirectStorage support" ON)
option(ENABLE_WINFORMS "Enable WinForms support" OFF)
option(ENABLE_WPF "Enable WPF support" OFF)
option(ENABLE_WINUI "Enable WinUI support" OFF)

# Create header-only interface library
add_library(VorticeCPP INTERFACE)

# Include directories
target_include_directories(VorticeCPP INTERFACE
    $<BUILD_INTERFACE:${{CMAKE_CURRENT_SOURCE_DIR}}/{output_dir}>
    $<INSTALL_INTERFACE:include>
)

# Module-specific include paths
'''
    
    for module in modules:
        cmake_content += f'''target_include_directories(VorticeCPP INTERFACE
    $<BUILD_INTERFACE:${{CMAKE_CURRENT_SOURCE_DIR}}/{output_dir}/{module}>
)
'''
    
    cmake_content += '''
# Windows SDK libraries
if(WIN32)
    target_link_libraries(VorticeCPP INTERFACE
        d3d11
        d3d12
        dxgi
        d2d1
        dwrite
        windowscodecs
        xaudio2
        xinput
        dsound
        dinput8
        dcomp
        mfplat
        mfreadwrite
        mfuuid
        ole32
        uuid
        dxguid
        d3dcompiler
    )

    target_compile_definitions(VorticeCPP INTERFACE
        _WIN32_WINNT=0x0A00
        WINVER=0x0A00
        NTDDI_VERSION=0x0A000000
        NOMINMAX
        WIN32_LEAN_AND_MEAN
    )
endif()

# Install rules
install(DIRECTORY ''' + output_dir + '''/ DESTINATION include/Vortice FILES_MATCHING PATTERN "*.h")
install(TARGETS VorticeCPP EXPORT VorticeCPPTargets)

install(EXPORT VorticeCPPTargets
    FILE VorticeCPPTargets.cmake
    NAMESPACE Vortice::
    DESTINATION lib/cmake/VorticeCPP
)

message(STATUS "VorticeCPP configured successfully with modules: ''' + ', '.join(modules) + '''")
'''
    
    # Write CMakeLists.txt
    output_path = Path(output_dir) / 'CMakeLists.txt'
    with open(output_path, 'w', encoding='utf-8') as f:
        f.write(cmake_content)
    
    print(f"Generated {output_path}")
    return True

if __name__ == '__main__':
    import sys
    if len(sys.argv) < 3:
        print("Usage: python generate_cmake.py <output_dir> <cpp_source_dir>")
        sys.exit(1)
    
    generate_cmake(sys.argv[1], sys.argv[2])
