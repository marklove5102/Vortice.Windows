// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIDECODESWAPCHAIN_H
#define VORTICE_IDXGIDECODESWAPCHAIN_H

#include <cstdint>

namespace Vortice {
namespace DXGI {

        namespace Vortice.DXGI;

        class IDXGIDecodeSwapChain
        {
            public SizeI DestSize
            {
                get
                {
                    GetDestSize(out uint width, out uint height);
                    return new((int)width, (int)height);
                }
                set
                {
                    SetDestSize((uint)value.Width, (uint)value.Height);
                }
            }

            Result PresentBuffer(uint32_t bufferToPresent, uint32_t syncInterval)
        {
                return PresentBuffer(bufferToPresent param, syncInterval param, PresentFlags::None param) = 0;
            }
        }


    }
}

#endif // VORTICE_IDXGIDECODESWAPCHAIN_H