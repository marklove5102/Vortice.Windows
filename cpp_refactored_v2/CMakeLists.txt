cmake_minimum_required(VERSION 3.20)
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
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

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
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/ DESTINATION include/Vortice FILES_MATCHING PATTERN "*.h")
install(TARGETS VorticeCPP EXPORT VorticeCPPTargets)

install(EXPORT VorticeCPPTargets
    FILE VorticeCPPTargets.cmake
    NAMESPACE Vortice::
    DESTINATION lib/cmake/VorticeCPP
)

message(STATUS "VorticeCPP configured successfully")
