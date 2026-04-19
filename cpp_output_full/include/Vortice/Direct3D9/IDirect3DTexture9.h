// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_IDIRECT3DTEXTURE9_H
#define VORTICE_DIRECT3D9_IDIRECT3DTEXTURE9_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECT3DTEXTURE9_H
#define VORTICE_VORTICE_IDIRECT3DTEXTURE9_H

#include <cstdint>

namespace Vortice {

class IDirect3DTexture9
{
public:
    ~IDirect3DTexture9() = default;

    void AddDirtyRect() { AddDirtyRect((void*)nullptr); }

    void AddDirtyRect() { AddDirtyRect(&dirtyRect); }

    LockedRectangle LockRect() { return LockRect(level, nullptr, flags); }

    LockedRectangle LockRect() { return LockRect(level, &rectangle, flags); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECT3DTEXTURE9_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_IDIRECT3DTEXTURE9_H
