// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGISWAPCHAIN3_H
#define VORTICE_IDXGISWAPCHAIN3_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGISwapChain3
        {
            SwapChainColorSpaceSupportFlags CheckColorSpaceSupport(ColorSpaceType colorSpace)
        {
                Result result{};
                if (result.Failure)
                {
                    return SwapChainColorSpaceSupportFlags.None;
                }

                return colorSpaceSupport{};
            }

            Result ResizeBuffers1(uint32_t bufferCount, uint32_t width, uint32_t height, Format format{};
            }
        }


    }
}

#endif // VORTICE_IDXGISWAPCHAIN3_H