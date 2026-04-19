// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_DEPTHSTENCILOPERATIONDESCRIPTION1_H
#define VORTICE_DIRECT3D12_DEPTHSTENCILOPERATIONDESCRIPTION1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION1_H
#define VORTICE_VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION1_H

#include <cstdint>

namespace Vortice {

struct DepthStencilOperationDescription1
{
public:
    constexpr DepthStencilOperationDescription1(StencilOperation stencilFailOp, StencilOperation stencilDepthFailOp, StencilOperation stencilPassOp, ComparisonFunction stencilFunc, uint8_t D3D12.DefaultStencilReadMask, uint8_t D3D12.DefaultStencilWriteMask)
    StencilFailOp = stencilFailOp;
        StencilDepthFailOp = stencilDepthFailOp;
        StencilPassOp = stencilPassOp;
        StencilFunc = stencilFunc;
        StencilReadMask = stencilReadMask;
        StencilWriteMask = stencilWriteMask;
    static DepthStencilOperationDescription1 Default{> new(StencilOperation.Keep, StencilOperation.Keep, StencilOperation.Keep, ComparisonFunction.Always)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION1_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_DEPTHSTENCILOPERATIONDESCRIPTION1_H
