// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DVOLUMETEXTURE9_H
#define VORTICE_IDIRECT3DVOLUMETEXTURE9_H

#include <cstdint>

namespace Vortice {
namespace Direct3D9 {

        namespace Vortice.Direct3D9;
        publicclass IDirect3DVolumeTexture9
        {
                        publicvoid AddDirtyBox(void)
                {
                AddDirtyBox((void*)nullptr);
            }
                            publicvoid AddDirtyBox(Box box)
                {
                AddDirtyBox(&box);
            }
                                    publicLockedBox LockBox(uint32_t level, LockFlags flags)
                {
                return LockBox(level, (void*)nullptr, flags);
            }
                                        publicLockedBox LockBox(uint32_t level, Box box, LockFlags flags)
                {
                return LockBox(void);
            }
        }

    }
}

#endif // VORTICE_IDIRECT3DVOLUMETEXTURE9_H