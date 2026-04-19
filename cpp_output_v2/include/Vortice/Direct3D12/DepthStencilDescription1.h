// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_DEPTHSTENCILDESCRIPTION1_H
#define VORTICE_DIRECT3D12_DEPTHSTENCILDESCRIPTION1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DEPTHSTENCILDESCRIPTION1_H
#define VORTICE_VORTICE_DEPTHSTENCILDESCRIPTION1_H

#include <cstdint>

namespace Vortice {

struct DepthStencilDescription1
{
public:
    constexpr DepthStencilDescription1(bool depthEnable, DepthWriteMask depthWriteMask, ComparisonFunction depthFunc)
    DepthEnable = depthEnable;
        DepthWriteMask = depthWriteMask;
        DepthFunc = depthFunc;
        StencilEnable = false;
        StencilReadMask = D3D12.DefaultStencilReadMask;
        StencilWriteMask = D3D12.DefaultStencilWriteMask;
        FrontFace = DepthStencilOperationDescription.Default;
        BackFace = DepthStencilOperationDescription.Default;
        DepthBoundsTestEnable = false;
    constexpr DepthStencilDescription1(bool depthEnable, bool depthWriteEnable, ComparisonFunction depthFunc, bool stencilEnable, uint8_t stencilReadMask, uint8_t stencilWriteMask, StencilOperation frontStencilFailOp, StencilOperation frontStencilDepthFailOp, StencilOperation frontStencilPassOp, ComparisonFunction frontStencilFunc, StencilOperation backStencilFailOp, StencilOperation backStencilDepthFailOp, StencilOperation backStencilPassOp, ComparisonFunction backStencilFunc, bool depthBoundsTestEnable)
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
        DepthBoundsTestEnable = depthBoundsTestEnable;
    constexpr DepthStencilDescription1(const DepthStencilDescription& other)
    DepthEnable = other.DepthEnable;
        DepthWriteMask = other.DepthWriteMask;
        DepthFunc = other.DepthFunc;
        StencilEnable = other.StencilEnable;
        StencilReadMask = other.StencilReadMask;
        StencilWriteMask = other.StencilWriteMask;
        FrontFace.StencilFailOp = other.FrontFace.StencilFailOp;
        FrontFace.StencilDepthFailOp = other.FrontFace.StencilDepthFailOp;
        FrontFace.StencilPassOp = other.FrontFace.StencilPassOp;
        FrontFace.StencilFunc = other.FrontFace.StencilFunc;
        BackFace.StencilFailOp = other.BackFace.StencilFailOp;
        BackFace.StencilDepthFailOp = other.BackFace.StencilDepthFailOp;
        BackFace.StencilPassOp = other.BackFace.StencilPassOp;
        BackFace.StencilFunc = other.BackFace.StencilFunc;
        DepthBoundsTestEnable = false;
    static DepthStencilDescription1 None{> new(false, DepthWriteMask.Zero, ComparisonFunction.LessEqual)};
    static DepthStencilDescription1 Default{> new(true, DepthWriteMask.All, ComparisonFunction.LessEqual)};
    static DepthStencilDescription1 Read{> new(true, DepthWriteMask.Zero, ComparisonFunction.LessEqual)};
    static DepthStencilDescription1 ReverseZ{> new(true, DepthWriteMask.All, ComparisonFunction.GreaterEqual)};
    static DepthStencilDescription1 ReadReverseZ{> new(true, DepthWriteMask.Zero, ComparisonFunction.GreaterEqual)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DEPTHSTENCILDESCRIPTION1_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_DEPTHSTENCILDESCRIPTION1_H
