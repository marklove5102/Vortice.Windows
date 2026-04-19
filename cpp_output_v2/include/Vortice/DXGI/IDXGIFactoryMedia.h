// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGIFACTORYMEDIA_H
#define VORTICE_DXGI_IDXGIFACTORYMEDIA_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGIFACTORYMEDIA_H
#define VORTICE_VORTICE_IDXGIFACTORYMEDIA_H

#include <cstdint>

namespace Vortice {

class IDXGIFactoryMedia
{
public:
    ~IDXGIFactoryMedia() = default;

    IDXGISwapChain1 CreateSwapChainForCompositionSurfaceHandle() { return CreateSwapChainForCompositionSurfaceHandle(device, surface, ref description, nullptr); }

    IDXGISwapChain1 CreateSwapChainForCompositionSurfaceHandle() { return CreateSwapChainForCompositionSurfaceHandle(device, surface, ref description, restrictToOutput); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGIFACTORYMEDIA_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGIFACTORYMEDIA_H
