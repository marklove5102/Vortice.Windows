// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DCUBETEXTURE9_H
#define VORTICE_IDIRECT3DCUBETEXTURE9_H

#include <cstdint>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;
        publicclass IDirect3DCubeTexture9
        {
                            publicvoid AddDirtyRect(CubeMapFace faceType)
                {
                AddDirtyRect(faceType, nullptr);
            }
                                publicvoid AddDirtyRect(CubeMapFace faceType, Rect dirtyRect)
                {
                AddDirtyRect(faceType, &dirtyRect);
            }
                                            publicLockedRectangle LockRect(CubeMapFace faceType, uint32_t level, LockFlags flags)
                {
                return LockRect(void);
            }
                                            publicLockedRectangle LockRect(CubeMapFace faceType, uint32_t level, Rect rectangle, LockFlags flags)
                {
                return LockRect(void);
            }
        }

    }
}

#endif // VORTICE_IDIRECT3DCUBETEXTURE9_H