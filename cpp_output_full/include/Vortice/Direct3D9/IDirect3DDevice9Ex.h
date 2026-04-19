// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_IDIRECT3DDEVICE9EX_H
#define VORTICE_DIRECT3D9_IDIRECT3DDEVICE9EX_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECT3DDEVICE9EX_H
#define VORTICE_VORTICE_IDIRECT3DDEVICE9EX_H

#include <cstdint>

namespace Vortice {

class IDirect3DDevice9Ex
{
public:
    ~IDirect3DDevice9Ex() = default;

    IDirect3DSurface9 CreateRenderTargetEx() { return CreateRenderTargetEx_(width, height, format, multiSample, multisampleQuality, lockable, IntPtr.Zero, usage); }

    IDirect3DSurface9 CreateDepthStencilSurfaceEx() { return CreateDepthStencilSurfaceEx_(width, height, format, multiSample, multisampleQuality, discard, IntPtr.Zero, usage); }

    IDirect3DSurface9 CreateOffscreenPlainSurfaceEx() { return CreateOffscreenPlainSurfaceEx_(width, height, format, pool, IntPtr.Zero, usage); }

    void PresentEx() { PresentEx(nullptr, nullptr, IntPtr.Zero, nullptr, (int)flags); }

    void PresentEx() { PresentEx(flags, sourceRectangle, destinationRectangle, IntPtr.Zero); }

    void PresentEx() { PresentEx(&sourceRectangle, &destinationRectangle, windowOverride, nullptr, (int)flags); }

    void PresentEx() { PresentEx(&sourceRectangle, &destinationRectangle, windowOverride, dirtyRegionRGNData.ToPointer(), (int)flags); }

    void ResetEx() { ResetEx(ref presentationParameters, nullptr); }

    void ResetEx() { ResetEx(ref presentationParameters, &fullScreenDisplayMode); }

    HRESULT CheckResourceResidency() { return CheckResourceResidency(resources, (uint)resources.Length); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECT3DDEVICE9EX_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_IDIRECT3DDEVICE9EX_H
