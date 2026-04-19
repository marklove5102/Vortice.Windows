// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_IDIRECT3D9_H
#define VORTICE_DIRECT3D9_IDIRECT3D9_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECT3D9_H
#define VORTICE_VORTICE_IDIRECT3D9_H

#include <cstdint>

namespace Vortice {

class IDirect3D9
{
public:
    ~IDirect3D9() = default;

    IDirect3DDevice9 CreateDevice() { return CreateDevice(adapter, deviceType, focusWindow, (int)createFlags, ref presentationParameters); }

    AdapterIdentifier GetAdapterIdentifier() { return GetAdapterIdentifier(adapter, 0); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECT3D9_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_IDIRECT3D9_H
