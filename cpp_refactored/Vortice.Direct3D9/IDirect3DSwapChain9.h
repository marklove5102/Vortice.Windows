// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DSWAPCHAIN9_H
#define VORTICE_IDIRECT3DSWAPCHAIN9_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;

        class IDirect3DSwapChain9
        {
                                        IDirect3DSurface9 GetBackBuffer(uint32_t backBuffer)
        {
                return GetBackBuffer(backBuffer param, BackBufferType::Mono param) = 0;
            }

                            void Present(Present presentFlags)
        {
                Present(nullptr, nullptr, IntPtr.Zero, nullptr, (int)presentFlags);
            }

                                        void Present(Rect sourceRectangle, Rect destinationRectangle, Present presentFlags)
        {
                Present(&sourceRectangle, &destinationRectangle, IntPtr.Zero, nullptr, (int)presentFlags);
            }

                                            void Present(Rect sourceRectangle, Rect destinationRectangle, void* windowOverride, Present presentFlags)
        {
                Present(&sourceRectangle, &destinationRectangle, windowOverride, nullptr, (int)presentFlags);
            }
        }


    }
}

#endif // VORTICE_IDIRECT3DSWAPCHAIN9_H