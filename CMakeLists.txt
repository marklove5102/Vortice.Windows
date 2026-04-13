cmake_minimum_required(VERSION 3.20)
project(VorticeCPP VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 选项控制
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)
option(ENABLE_D3D11 "Enable Direct3D 11 support" ON)
option(ENABLE_D2D "Enable Direct2D support" ON)
option(ENABLE_DWRITE "Enable DirectWrite support" ON)
option(ENABLE_XAUDIO2 "Enable XAudio2 support" ON)
option(ENABLE_DIRECTML "Enable DirectML support" ON)

# 收集所有头文件
file(GLOB_RECURSE VORTICE_HEADERS 
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DirectX/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DXGI/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.Direct2D1/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DirectWrite/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.WIC/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.Direct3D11/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.XAudio2/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.XInput/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DirectSound/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DirectInput/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.D3DCompiler/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.Dxc/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DirectComposition/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.UIAnimation/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.MediaFoundation/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DirectStorage/include/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DirectML/include/*.h"
)

# 创建接口库 (Header-Only 模式)
add_library(VorticeCPP INTERFACE)

target_include_directories(VorticeCPP INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DirectX/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DXGI/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.Direct2D1/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DirectWrite/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.WIC/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.Direct3D11/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.XAudio2/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.XInput/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DirectSound/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DirectInput/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.D3DCompiler/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.Dxc/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DirectComposition/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.UIAnimation/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.MediaFoundation/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DirectStorage/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/Vortice.DirectML/include>
    $<INSTALL_INTERFACE:include>
)

# 链接 Windows SDK 库
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
    )
    
    # 定义 Windows 版本宏 (Win10+)
    target_compile_definitions(VorticeCPP INTERFACE
        _WIN32_WINNT=0x0A00
        WINVER=0x0A00
        NTDDI_VERSION=0x0A000000
        NOMINMAX
        WIN32_LEAN_AND_MEAN
    )
endif()

# 安装规则
install(DIRECTORY src/ DESTINATION include FILES_MATCHING PATTERN "*.h")
install(TARGETS VorticeCPP EXPORT VorticeCPPTargets)

# 导出配置
install(EXPORT VorticeCPPTargets
    FILE VorticeCPPTargets.cmake
    NAMESPACE Vortice::
    DESTINATION lib/cmake/VorticeCPP
)

# 示例项目
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/examples")
    add_subdirectory(examples)
endif()

message(STATUS "VorticeCPP configured successfully with ${VORTICE_HEADERS} headers.")
