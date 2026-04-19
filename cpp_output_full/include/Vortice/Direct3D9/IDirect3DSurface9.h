// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_IDIRECT3DSURFACE9_H
#define VORTICE_DIRECT3D9_IDIRECT3DSURFACE9_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECT3DSURFACE9_H
#define VORTICE_VORTICE_IDIRECT3DSURFACE9_H

#include <cstdint>

namespace Vortice {

class IDirect3DSurface9
{
public:
    ~IDirect3DSurface9() = default;

    LockedRectangle LockRect() { return LockRect(nullptr, flags); }

    LockedRectangle LockRect() { return LockRect(&rect, flags); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECT3DSURFACE9_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_IDIRECT3DSURFACE9_H
