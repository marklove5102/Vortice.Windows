// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGISWAPCHAIN2_H
#define VORTICE_IDXGISWAPCHAIN2_H

#include <cstdint>

namespace Vortice {
namespace DXGI {

        namespace Vortice.DXGI;

        class IDXGISwapChain2
        {
            public SizeI SourceSize
            {
                get
                {
                    GetSourceSize(out uint width, out uint height);
                    return new((int)width, (int)height);
                }
                set => SetSourceSize((uint)value.Width, (uint)value.Height);
            }
        }


    }
}

#endif // VORTICE_IDXGISWAPCHAIN2_H