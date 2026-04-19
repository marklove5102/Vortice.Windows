// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_RASTERIZERDESCRIPTION_H
#define VORTICE_DIRECT3D11_RASTERIZERDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RASTERIZERDESCRIPTION_H
#define VORTICE_VORTICE_RASTERIZERDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct RasterizerDescription : public IEquatable<RasterizerDescription>
{
public:
    constexpr RasterizerDescription(CullMode cullMode, FillMode fillMode)
    CullMode = cullMode;
        FillMode = fillMode;
        FrontCounterClockwise = false;
        DepthBias = ID3D11RasterizerState.DefaultDepthBias;
        DepthBiasClamp = ID3D11RasterizerState.DefaultDepthBiasClamp;
        SlopeScaledDepthBias = ID3D11RasterizerState.DefaultSlopeScaledDepthBias;
        DepthClipEnable = true;
        ScissorEnable = false;
        MultisampleEnable = true;
        AntialiasedLineEnable = false;
    static RasterizerDescription CullNone{> new(CullMode.None, FillMode.Solid)};
    static RasterizerDescription CullFront{> new(CullMode.Front, FillMode.Solid)};
    static RasterizerDescription CullBack{> new(CullMode.Back, FillMode.Solid)};
    static RasterizerDescription Wireframe{> new(CullMode.None, FillMode.Wireframe)};
    static bool operator{=(in RasterizerDescription left, in RasterizerDescription right)
    {
        return (left.FillMode == right.FillMode)
            && (left.CullMode == right.CullMode)
            && (left.FrontCounterClockwise == right.FrontCounterClockwise)
            && (left.DepthBias == right.DepthBias)
            && (left.DepthBiasClamp == right.DepthBiasClamp)
            && (left.SlopeScaledDepthBias == right.SlopeScaledDepthBias)
            && (left.DepthClipEnable == right.DepthClipEnable)
            && (left.ScissorEnable == right.ScissorEnable)
            && (left.MultisampleEnable == right.MultisampleEnable)
            && (left.AntialiasedLineEnable == right.AntialiasedLineEnable)};

    int32_t GetHashCode() override { HashCode hashCode = new();
        hashCode.Add(FillMode);
        hashCode.Add(CullMode);
        hashCode.Add(FrontCounterClockwise);
        hashCode.Add(DepthBias);
        hashCode.Add(DepthBiasClamp);
        hashCode.Add(SlopeScaledDepthBias);
        hashCode.Add(DepthClipEnable);
        hashCode.Add(ScissorEnable);
        hashCode.Add(MultisampleEnable);
        hashCode.Add(AntialiasedLineEnable);
        return hashCode.ToHashCode(); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RASTERIZERDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_RASTERIZERDESCRIPTION_H
