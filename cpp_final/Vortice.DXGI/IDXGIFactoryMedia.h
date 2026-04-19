// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIFACTORYMEDIA_H
#define VORTICE_IDXGIFACTORYMEDIA_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGIFactoryMedia
        {
            IDXGIDecodeSwapChain CreateDecodeSwapChainForCompositionSurfaceHandle(IUnknown device, void* surface, IDXGIResource yuvDecodeBuffers)
        {
                // Reserved for future use (https://docs.microsoft.com/it-it/windows/desktop/api/dxgi1_3/ns-dxgi1_3-dxgi_decode_swap_chain_desc)
                var description{};

                return CreateDecodeSwapChainForCompositionSurfaceHandle(device param, surface param, description param, yuvDecodeBuffers param, nullptr param) = 0;
            }

            IDXGIDecodeSwapChain CreateDecodeSwapChainForCompositionSurfaceHandle(IUnknown device, void* surface, IDXGIResource yuvDecodeBuffers, IDXGIOutput restrictToOutput)
        {
                // Reserved for future use (https://docs.microsoft.com/it-it/windows/desktop/api/dxgi1_3/ns-dxgi1_3-dxgi_decode_swap_chain_desc)
                var description{};

                return CreateDecodeSwapChainForCompositionSurfaceHandle(device param, surface param, description param, yuvDecodeBuffers param, restrictToOutput param) = 0;
            }

            IDXGISwapChain1 CreateSwapChainForCompositionSurfaceHandle(IUnknown device, void* surface, SwapChainDescription1 description)
        {
                return CreateSwapChainForCompositionSurfaceHandle(device param, surface param, description& param, nullptr param) = 0;
            }

            IDXGISwapChain1 CreateSwapChainForCompositionSurfaceHandle(IUnknown device, void* surface, SwapChainDescription1 description, IDXGIOutput restrictToOutput)
        {
                return CreateSwapChainForCompositionSurfaceHandle(device param, surface param, description& param, restrictToOutput param) = 0;
            }
        }


    }
}

#endif // VORTICE_IDXGIFACTORYMEDIA_H