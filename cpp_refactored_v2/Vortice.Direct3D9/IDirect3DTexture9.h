// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DTEXTURE9_H
#define VORTICE_IDIRECT3DTEXTURE9_H

#include <cstdint>

namespace Vortice {
namespace Direct3D9 {

        namespace Vortice.Direct3D9;
        publicclass IDirect3DTexture9
        {
                        publicvoid AddDirtyRect(void)
                {
                AddDirtyRect((void*)nullptr);
            }
                            publicvoid AddDirtyRect(RectI dirtyRect)
                {
                AddDirtyRect(&dirtyRect);
            }
                                    publicLockedRectangle LockRect(uint32_t level, LockFlags flags)
                {
                return LockRect(void);
            }
                                        publicLockedRectangle LockRect(uint32_t level, RectI rectangle, LockFlags flags)
                {
                return LockRect(void);
            }
        }

    }
}

#endif // VORTICE_IDIRECT3DTEXTURE9_H