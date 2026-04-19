// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_DEPTHSTENCILOPERATIONDESCRIPTION_H
#define VORTICE_DIRECT3D11_DEPTHSTENCILOPERATIONDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION_H
#define VORTICE_VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct DepthStencilOperationDescription : public IEquatable<DepthStencilOperationDescription>
{
public:
    constexpr DepthStencilOperationDescription(StencilOperation stencilFailOp, StencilOperation stencilDepthFailOp, StencilOperation stencilPassOp, ComparisonFunction stencilFunc)
    StencilFailOp = stencilFailOp;
        StencilDepthFailOp = stencilDepthFailOp;
        StencilPassOp = stencilPassOp;
        StencilFunc = stencilFunc;
    static const DepthStencilOperationDescription Default{new(StencilOperation.Keep, StencilOperation.Keep, StencilOperation.Keep, ComparisonFunction.Always)};
    static bool operator{=(in DepthStencilOperationDescription left, in DepthStencilOperationDescription right)
    {
        return (left.StencilFailOp == right.StencilFailOp)
            && (left.StencilDepthFailOp == right.StencilDepthFailOp)
            && (left.StencilPassOp == right.StencilPassOp)
            && (left.StencilFunc == right.StencilFunc)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_DEPTHSTENCILOPERATIONDESCRIPTION_H
