// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_IDIRECT3DSWAPCHAIN9_H
#define VORTICE_DIRECT3D9_IDIRECT3DSWAPCHAIN9_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>
#include <windows.h>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECT3DSWAPCHAIN9_H
#define VORTICE_VORTICE_IDIRECT3DSWAPCHAIN9_H

#include <cstdint>

namespace Vortice {

class IDirect3DSwapChain9
{
public:
    ~IDirect3DSwapChain9() = default;

    IDirect3DSurface9 GetBackBuffer() { return GetBackBuffer(backBuffer, BackBufferType.Mono); }

    void Present() { Present(nullptr, nullptr, IntPtr.Zero, nullptr, (int)presentFlags); }

    void Present() { Present(&sourceRectangle, &destinationRectangle, IntPtr.Zero, nullptr, (int)presentFlags); }

    void Present() { Present(&sourceRectangle, &destinationRectangle, windowOverride, nullptr, (int)presentFlags); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECT3DSWAPCHAIN9_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_IDIRECT3DSWAPCHAIN9_H
