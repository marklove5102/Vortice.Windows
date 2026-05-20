// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DSWAPCHAIN9_H
#define VORTICE_IDIRECT3DSWAPCHAIN9_H

#include <cstdint>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;
        publicclass IDirect3DSwapChain9
        {
                                        publicIDirect3DSurface9 GetBackBuffer(uint32_t backBuffer)
                {
                return GetBackBuffer(void);
            }
                            publicvoid Present(Present presentFlags)
                {
                Present(nullptr, nullptr, IntPtr.Zero, nullptr, (int)presentFlags);
            }
                                        publicvoid Present(Rect sourceRectangle, Rect destinationRectangle, Present presentFlags)
                {
                Present(&sourceRectangle, &destinationRectangle, IntPtr.Zero, nullptr, (int)presentFlags);
            }
                                            publicvoid Present(Rect sourceRectangle, Rect destinationRectangle, void* windowOverride, Present presentFlags)
                {
                Present(&sourceRectangle, &destinationRectangle, windowOverride, nullptr, (int)presentFlags);
            }
        }

    }
}

#endif // VORTICE_IDIRECT3DSWAPCHAIN9_H