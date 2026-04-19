// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTCOMPOSITION_IDCOMPOSITIONDESKTOPDEVICE_H
#define VORTICE_DIRECTCOMPOSITION_IDCOMPOSITIONDESKTOPDEVICE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDCOMPOSITIONDESKTOPDEVICE_H
#define VORTICE_VORTICE_IDCOMPOSITIONDESKTOPDEVICE_H

#include <cstdint>

namespace Vortice {

class IDCompositionDesktopDevice
{
public:
    ~IDCompositionDesktopDevice() = default;

    IUnknown CreateSurfaceFromHandle() { CreateSurfaceFromHandle(handle, out IUnknown surface).CheckError();
        return surface; }

    IUnknown CreateSurfaceFromHwnd() { CreateSurfaceFromHwnd(hwnd, out IUnknown surface).CheckError();
        return surface; }

    IDCompositionTarget CreateSurfaceFromHwnd() { CreateTargetForHwnd(hwnd, topmost, out IDCompositionTarget target).CheckError();
        return target; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDCOMPOSITIONDESKTOPDEVICE_H

} // namespace Vortice

#endif // VORTICE_DIRECTCOMPOSITION_IDCOMPOSITIONDESKTOPDEVICE_H
