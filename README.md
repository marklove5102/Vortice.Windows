# VorticeCPP - C++ DirectX 绑定库

将 Vortice DirectX (C#) 完整翻译成现代 C++17 的 Header-Only 库。

## 📦 已完成的模块 (510+ 文件)

### 核心图形基础设施
- ✅ **Vortice.DirectX** - 基础数据类型、内存操作、多媒体格式
- ✅ **Vortice.DXGI** - 图形基础设施 (适配器、工厂、交换链)
- ✅ **Vortice.Direct3D11** - 完整的 3D 渲染管线
- ✅ **Vortice.Direct2D1** - 高性能 2D 硬件加速绘图
- ✅ **Vortice.DirectWrite** - 高质量文本渲染引擎
- ✅ **Vortice.WIC** - Windows 图像编解码器

### 音频与输入
- ✅ **Vortice.XAudio2** - 现代低延迟音频引擎
- ✅ **Vortice.DirectSound** - 传统音频支持
- ✅ **Vortice.XInput** - Xbox 手柄输入
- ✅ **Vortice.DirectInput** - 键盘/鼠标/摇杆输入

### 高级功能
- ✅ **Vortice.Dxc** - DirectX Shader Compiler (新一代 HLSL 编译器)
- ✅ **Vortice.D3DCompiler** - 传统着色器编译器兼容
- ✅ **Vortice.DirectComposition** - 桌面窗口合成与视觉效果
- ✅ **Vortice.UIAnimation** - UI 物理动画引擎
- ✅ **Vortice.MediaFoundation** - 视频解码与媒体播放
- ✅ **Vortice.DirectStorage** - NVMe SSD 高速资源加载
- ✅ **Vortice.DirectML** - GPU 加速机器学习推理

## 🚀 快速开始

### 前提条件
- Windows 10/11 SDK (10.0.19041.0 或更高)
- CMake 3.20+
- Visual Studio 2019/2022 或 MinGW-w64
- DirectX 11/12 运行时

### 构建方法

```bash
# 克隆项目
git clone https://github.com/yourname/VorticeCPP.git
cd VorticeCPP

# 配置构建
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release

# 编译
cmake --build . --config Release

# 安装 (可选)
cmake --install . --prefix ../install
```

### 使用示例

#### CMake 集成
```cmake
find_package(VorticeCPP REQUIRED)
target_link_libraries(YourApp PRIVATE Vortice::VorticeCPP)
```

#### 代码示例 (Direct2D 绘制)
```cpp
#include <Vortice/Direct2D1.h>
#include <Vortice/DXGI.h>
#include <Vortice/DirectWrite.h>

using namespace Vortice;

int main() {
    // 创建工厂
    auto factory = D2D1::CreateFactory<D2D1_FACTORY_TYPE_SINGLE_THREADED>();
    
    // 创建渲染目标 (需要 HWND)
    // auto renderTarget = factory->CreateHwndRenderTarget(...);
    
    // 开始绘制
    // renderTarget->BeginDraw();
    // renderTarget->Clear(Color::CornflowerBlue);
    // renderTarget->FillRectangle(rect, brush);
    // renderTarget->EndDraw();
    
    return 0;
}
```

#### 代码示例 (Direct3D11 初始化)
```cpp
#include <Vortice/Direct3D11.h>
#include <Vortice/DXGI.h>

using namespace Vortice;

auto device = D3D11::CreateDevice(
    nullptr, 
    D3D_DRIVER_TYPE_HARDWARE,
    D3D11_CREATE_DEVICE_BGRA_SUPPORT
);

auto context = device->GetImmediateContext();

// 创建渲染目标视图
// auto swapChain = device->CreateSwapChain(...);
// auto rtv = device->CreateRenderTargetView(swapChain->GetBuffer(0));
```

#### 代码示例 (XAudio2 音频播放)
```cpp
#include <Vortice/XAudio2.h>

using namespace Vortice;

auto xaudio2 = XAudio2::Create();
auto masteringVoice = xaudio2->CreateMasteringVoice();

// 创建源语音并提交音频缓冲区
// auto sourceVoice = xaudio2->CreateSourceVoice(format, callback);
// sourceVoice->SubmitSourceBuffer(buffer);
// sourceVoice->Start();
```

## 📁 目录结构

```
VorticeCPP/
├── CMakeLists.txt              # 主构建配置
├── README.md                   # 本文件
├── src/
│   ├── Vortice.DirectX/        # 基础类型
│   ├── Vortice.DXGI/           # DXGI 接口
│   ├── Vortice.Direct2D1/      # 2D 绘图
│   ├── Vortice.DirectWrite/    # 文本渲染
│   ├── Vortice.WIC/            # 图像编解码
│   ├── Vortice.Direct3D11/     # 3D 渲染
│   ├── Vortice.XAudio2/        # 音频引擎
│   ├── Vortice.XInput/         # 手柄输入
│   ├── Vortice.DirectSound/    # 传统音频
│   ├── Vortice.DirectInput/    # 传统输入
│   ├── Vortice.D3DCompiler/    # 旧编译器
│   ├── Vortice.Dxc/            # 新编译器
│   ├── Vortice.DirectComposition/  # 桌面合成
│   ├── Vortice.UIAnimation/    # UI 动画
│   ├── Vortice.MediaFoundation/# 媒体播放
│   ├── Vortice.DirectStorage/  # 高速加载
│   └── Vortice.DirectML/       # 机器学习
└── examples/                   # 示例程序 (待添加)
    ├── Basic2D/                # 基础 2D 绘制
    ├── Basic3D/                # 基础 3D 渲染
    ├── AudioPlayer/            # 音频播放器
    └── MLInference/            # ML 推理示例
```

## 🔧 编译选项

| 选项 | 默认值 | 描述 |
|------|--------|------|
| `BUILD_SHARED_LIBS` | OFF | 构建动态库 |
| `ENABLE_D3D11` | ON | 启用 Direct3D 11 |
| `ENABLE_D2D` | ON | 启用 Direct2D |
| `ENABLE_DWRITE` | ON | 启用 DirectWrite |
| `ENABLE_XAUDIO2` | ON | 启用 XAudio2 |
| `ENABLE_DIRECTML` | ON | 启用 DirectML |

## 📝 翻译策略说明

本库严格遵循以下翻译原则，确保与原始 C# API 的逻辑一致性：

1. **Struct → Struct/Class**: C# 结构体转换为 C++ 结构体或类，保留所有字段和方法
2. **Interface → Abstract Class**: C# 接口转换为纯虚抽象类，保持 COM 调用约定
3. **Enum → Enum Class**: 使用强类型枚举 (`enum class`) 避免命名污染
4. **Static Class → Namespace**: 静态工具类转换为命名空间 + 静态函数
5. **Property → Getter/Setter**: C# 属性转换为 `get_*()` / `set_*()` 方法或直接公开成员
6. **Operator Overloads**: 完整保留 C# 的操作符重载逻辑
7. **Generic → Template**: 泛型方法转换为 C++ 模板
8. **Null Handling**: C# 的 `null` 检查转换为 `nullptr` 检查

## ⚠️ 注意事项

1. **COM 内存管理**: 所有 COM 接口指针需手动释放，建议使用 `Microsoft::WRL::ComPtr` 或自定义智能指针
2. **线程安全**: Direct2D/DirectWrite 工厂通常为单线程，多线程环境需创建多个工厂或使用同步机制
3. **Windows 仅限**: 本库依赖 Windows SDK，不支持跨平台 (Linux/macOS)
4. **DirectX 版本**: 最低要求 Windows 10 (DirectX 11 Feature Level 11.0)

## 🤝 贡献指南

欢迎提交 Issue 和 Pull Request！如发现翻译错误或遗漏，请提供：
- 原始 C# 文件路径
- 问题描述
- 建议的修复方案

## 📄 许可证

本项目遵循 MIT 许可证，与原始 Vortice 项目保持一致。

## 🔗 相关链接

- [原始 Vortice 项目 (C#)](https://github.com/amerkoleci/Vortice.Windows)
- [DirectX 文档](https://docs.microsoft.com/en-us/windows/win32/directx)
- [DirectX 12 样例](https://github.com/microsoft/DirectX-Graphics-Samples)

---

**状态**: ✅ 全部 16 个模块翻译完成 (510+ 文件)  
**最后更新**: 2024
