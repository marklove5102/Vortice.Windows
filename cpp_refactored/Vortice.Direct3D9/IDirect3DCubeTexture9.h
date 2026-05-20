// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DCUBETEXTURE9_H
#define VORTICE_IDIRECT3DCUBETEXTURE9_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;

        class IDirect3DCubeTexture9
        {
                            void AddDirtyRect(CubeMapFace faceType)
        {
                AddDirtyRect(faceType, nullptr);
            }

                                void AddDirtyRect(CubeMapFace faceType, Rect dirtyRect)
        {
                AddDirtyRect(faceType, &dirtyRect);
            }

                                            LockedRectangle LockRect(CubeMapFace faceType, uint32_t level, LockFlags flags)
        {
                return LockRect(faceType param, level param, nullptr param, flags param) = 0;
            }

                                            LockedRectangle LockRect(CubeMapFace faceType, uint32_t level, Rect rectangle, LockFlags flags)
        {
                return LockRect(faceType param, level param, &rectangle param, flags param) = 0;
            }
        }


    }
}

#endif // VORTICE_IDIRECT3DCUBETEXTURE9_H