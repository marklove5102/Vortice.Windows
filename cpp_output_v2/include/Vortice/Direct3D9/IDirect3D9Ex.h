// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_IDIRECT3D9EX_H
#define VORTICE_DIRECT3D9_IDIRECT3D9EX_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECT3D9EX_H
#define VORTICE_VORTICE_IDIRECT3D9EX_H

#include <cstdint>

namespace Vortice {

class IDirect3D9Ex
{
public:
    ~IDirect3D9Ex() = default;

    IDirect3DDevice9Ex CreateDeviceEx() { return CreateDeviceEx(adapter, deviceType, focusWindow, (int)createFlags, [presentationParameters], nullptr); }

    IDirect3DDevice9Ex CreateDeviceEx() { return CreateDeviceEx(adapter, deviceType, focusWindow, (int)createFlags, [presentationParameters], [fullScreenDisplayMode]); }

    IDirect3DDevice9Ex CreateDeviceEx() { return CreateDeviceEx(adapter, deviceType, focusWindow, (int)createFlags, presentationParameters, nullptr); }

    IDirect3DDevice9Ex CreateDeviceEx() { return CreateDeviceEx(adapter, deviceType, focusWindow, (int)createFlags, presentationParameters, fullScreenDisplayModes); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECT3D9EX_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_IDIRECT3D9EX_H
