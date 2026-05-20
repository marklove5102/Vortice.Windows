// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DVOLUMETEXTURE9_H
#define VORTICE_IDIRECT3DVOLUMETEXTURE9_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D9 {

        namespace Vortice.Direct3D9;

        class IDirect3DVolumeTexture9
        {
                        void AddDirtyBox(void)
        {
                AddDirtyBox((void*)nullptr);
            }

                            void AddDirtyBox(Box box)
        {
                AddDirtyBox(&box);
            }

                                    LockedBox LockBox(uint32_t level, LockFlags flags)
        {
                return LockBox(level, (void*)nullptr, flags);
            }

                                        LockedBox LockBox(uint32_t level, Box box, LockFlags flags)
        {
                return LockBox(level param, &box param, flags param) = 0;
            }
        }


    }
}

#endif // VORTICE_IDIRECT3DVOLUMETEXTURE9_H