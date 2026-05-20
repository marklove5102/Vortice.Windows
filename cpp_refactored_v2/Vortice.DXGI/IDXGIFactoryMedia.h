// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIFACTORYMEDIA_H
#define VORTICE_IDXGIFACTORYMEDIA_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;
        publicclass IDXGIFactoryMedia
        {
            publicIDXGIDecodeSwapChain CreateDecodeSwapChainForCompositionSurfaceHandle(IUnknown device, void* surface, IDXGIResource yuvDecodeBuffers)
                {
                // Reserved for future use (https://docs.microsoft.com/it-it/windows/desktop/api/dxgi1_3/ns-dxgi1_3-dxgi_decode_swap_chain_desc)
                var description{};
                return CreateDecodeSwapChainForCompositionSurfaceHandle(void);
            }
            publicIDXGIDecodeSwapChain CreateDecodeSwapChainForCompositionSurfaceHandle(IUnknown device, void* surface, IDXGIResource yuvDecodeBuffers, IDXGIOutput restrictToOutput)
                {
                // Reserved for future use (https://docs.microsoft.com/it-it/windows/desktop/api/dxgi1_3/ns-dxgi1_3-dxgi_decode_swap_chain_desc)
                var description{};
                return CreateDecodeSwapChainForCompositionSurfaceHandle(void);
            }
            publicIDXGISwapChain1 CreateSwapChainForCompositionSurfaceHandle(IUnknown device, void* surface, SwapChainDescription1 description)
                {
                return CreateSwapChainForCompositionSurfaceHandle(void);
            }
            publicIDXGISwapChain1 CreateSwapChainForCompositionSurfaceHandle(IUnknown device, void* surface, SwapChainDescription1 description, IDXGIOutput restrictToOutput)
                {
                return CreateSwapChainForCompositionSurfaceHandle(void);
            }
        }

    }
}

#endif // VORTICE_IDXGIFACTORYMEDIA_H