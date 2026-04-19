// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_DEPTHSTENCILDESCRIPTION_H
#define VORTICE_DIRECT3D12_DEPTHSTENCILDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DEPTHSTENCILDESCRIPTION_H
#define VORTICE_VORTICE_DEPTHSTENCILDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct DepthStencilDescription
{
public:
    constexpr DepthStencilDescription(bool depthEnable, DepthWriteMask depthWriteMask, ComparisonFunction depthFunc)
    DepthEnable = depthEnable;
        DepthWriteMask = depthWriteMask;
        DepthFunc = depthFunc;
        StencilEnable = false;
        StencilReadMask = D3D12.DefaultStencilReadMask;
        StencilWriteMask = D3D12.DefaultStencilWriteMask;
        FrontFace = DepthStencilOperationDescription.Default;
        BackFace = DepthStencilOperationDescription.Default;
    constexpr DepthStencilDescription(bool depthEnable, bool depthWriteEnable, ComparisonFunction depthFunc, bool stencilEnable, uint8_t stencilReadMask, uint8_t stencilWriteMask, StencilOperation frontStencilFailOp, StencilOperation frontStencilDepthFailOp, StencilOperation frontStencilPassOp, ComparisonFunction frontStencilFunc, StencilOperation backStencilFailOp, StencilOperation backStencilDepthFailOp, StencilOperation backStencilPassOp, ComparisonFunction backStencilFunc)
    DepthEnable = depthEnable;
        DepthWriteMask = depthWriteEnable ? DepthWriteMask.All : DepthWriteMask.Zero;
        DepthFunc = depthFunc;
        StencilEnable = stencilEnable;
        StencilReadMask = stencilReadMask;
        StencilWriteMask = stencilWriteMask;
        FrontFace.StencilFailOp = frontStencilFailOp;
        FrontFace.StencilDepthFailOp = frontStencilDepthFailOp;
        FrontFace.StencilPassOp = frontStencilPassOp;
        FrontFace.StencilFunc = frontStencilFunc;
        BackFace.StencilFailOp = backStencilFailOp;
        BackFace.StencilDepthFailOp = backStencilDepthFailOp;
        BackFace.StencilPassOp = backStencilPassOp;
        BackFace.StencilFunc = backStencilFunc;
    static DepthStencilDescription None{> new(false, DepthWriteMask.Zero, ComparisonFunction.LessEqual)};
    static DepthStencilDescription Default{> new(true, DepthWriteMask.All, ComparisonFunction.LessEqual)};
    static DepthStencilDescription Read{> new(true, DepthWriteMask.Zero, ComparisonFunction.LessEqual)};
    static DepthStencilDescription ReverseZ{> new(true, DepthWriteMask.All, ComparisonFunction.GreaterEqual)};
    static DepthStencilDescription ReadReverseZ{> new(true, DepthWriteMask.Zero, ComparisonFunction.GreaterEqual)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DEPTHSTENCILDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_DEPTHSTENCILDESCRIPTION_H
