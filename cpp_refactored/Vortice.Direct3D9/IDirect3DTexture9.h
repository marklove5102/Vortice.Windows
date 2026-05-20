// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DTEXTURE9_H
#define VORTICE_IDIRECT3DTEXTURE9_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D9 {

        namespace Vortice.Direct3D9;

        class IDirect3DTexture9
        {
                        void AddDirtyRect(void)
        {
                AddDirtyRect((void*)nullptr);
            }

                            void AddDirtyRect(RectI dirtyRect)
        {
                AddDirtyRect(&dirtyRect);
            }

                                    LockedRectangle LockRect(uint32_t level, LockFlags flags)
        {
                return LockRect(level param, nullptr param, flags param) = 0;
            }

                                        LockedRectangle LockRect(uint32_t level, RectI rectangle, LockFlags flags)
        {
                return LockRect(level param, &rectangle param, flags param) = 0;
            }
        }


    }
}

#endif // VORTICE_IDIRECT3DTEXTURE9_H