# Vortice C++ Headers

This directory contains C++17 header-only bindings for Windows DirectX and related APIs, automatically converted from the C# Vortice.Windows library.

## Structure

```
cpp_refactored_v2/
├── CMakeLists.txt          # CMake build configuration
├── Vortice.DXGI/           # DXGI interfaces
├── Vortice.Direct3D11/     # Direct3D 11 bindings
├── Vortice.Direct3D12/     # Direct3D 12 bindings
├── Vortice.Direct2D1/      # Direct2D bindings
├── Vortice.DirectWrite/    # DirectWrite bindings
├── Vortice.XAudio2/        # XAudio2 bindings
├── Vortice.XInput/         # XInput bindings
├── Vortice.DirectML/       # DirectML bindings
├── Vortice.Dxc/            # DirectX Compiler bindings
├── Vortice.D3DCompiler/    # D3DCompiler bindings
└── ... (other modules)
```

## Usage

### CMake Integration

```cmake
add_subdirectory(path/to/cpp_refactored_v2)
target_link_libraries(your_target PRIVATE VorticeCPP)
```

### Manual Include

```cpp
#include <Vortice/Vortice.DXGI/IDXGISwapChain.h>
#include <Vortice/Vortice.Direct3D11/ID3D11Device.h>
```

## Requirements

- C++17 compatible compiler
- Windows SDK 10.0.17763.0 or later
- Visual Studio 2019+ (Windows)

## Modules

| Module | Status | Description |
|--------|--------|-------------|
| Vortice.DirectX | ✓ | Core DirectX types |
| Vortice.DXGI | ✓ | DirectX Graphics Infrastructure |
| Vortice.Direct3D11 | ✓ | Direct3D 11 API |
| Vortice.Direct3D12 | ✓ | Direct3D 12 API |
| Vortice.Direct2D1 | ✓ | Direct2D 2D graphics |
| Vortice.DirectWrite | ✓ | DirectWrite text rendering |
| Vortice.XAudio2 | ✓ | XAudio2 audio |
| Vortice.XInput | ✓ | XInput game controller |
| Vortice.DirectML | ✓ | DirectML machine learning |
| Vortice.Dxc | ✓ | DirectX Shader Compiler |
| Vortice.D3DCompiler | ✓ | D3DCompile API |
| Vortice.MediaFoundation | ✓ | Media Foundation |
| Vortice.DirectStorage | ✓ | DirectStorage API |
| Vortice.DirectComposition | ✓ | DirectComposition |
| Vortice.UIAnimation | ✓ | UI Animation |
| Vortice.WinForms | ⚠ | WinForms interop (partial) |
| Vortice.Wpf | ⚠ | WPF interop (partial) |
| Vortice.WinUI | ⚠ | WinUI interop (partial) |

## Notes

- This is an **automatic conversion** from C# - manual review and adjustments may be needed
- COM interfaces use `__declspec(uuid())` attributes
- Some C# features (delegates, events, LINQ) require manual adaptation
- Memory management follows C++ RAII patterns where applicable

## License

MIT License - same as the original Vortice.Windows project
