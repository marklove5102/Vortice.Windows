// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_IDIRECT3DVOLUMETEXTURE9_H
#define VORTICE_DIRECT3D9_IDIRECT3DVOLUMETEXTURE9_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECT3DVOLUMETEXTURE9_H
#define VORTICE_VORTICE_IDIRECT3DVOLUMETEXTURE9_H

#include <cstdint>

namespace Vortice {

class IDirect3DVolumeTexture9
{
public:
    ~IDirect3DVolumeTexture9() = default;

    void AddDirtyBox() { AddDirtyBox((void*)nullptr); }

    void AddDirtyBox() { AddDirtyBox(&box); }

    LockedBox LockBox() { return LockBox(level, (void*)nullptr, flags); }

    LockedBox LockBox() { return LockBox(level, &box, flags); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECT3DVOLUMETEXTURE9_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_IDIRECT3DVOLUMETEXTURE9_H
