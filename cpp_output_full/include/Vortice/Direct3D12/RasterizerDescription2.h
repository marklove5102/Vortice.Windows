// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RASTERIZERDESCRIPTION2_H
#define VORTICE_DIRECT3D12_RASTERIZERDESCRIPTION2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RASTERIZERDESCRIPTION2_H
#define VORTICE_VORTICE_RASTERIZERDESCRIPTION2_H

#include <cstdint>

namespace Vortice {

struct RasterizerDescription2
{
public:
    constexpr RasterizerDescription2(CullMode cullMode, FillMode fillMode, bool false, float D3D12.DefaultDepthBias, float D3D12.DefaultDepthBiasClamp, float D3D12.DefaultSlopeScaledDepthBias, bool true, LineRasterizationMode LineRasterizationMode.Aliased, uint32_t 0, ConservativeRasterizationMode ConservativeRasterizationMode.Off)
    CullMode = cullMode;
        FillMode = fillMode;
        FrontCounterClockwise = frontCounterClockwise;
        DepthBias = depthBias;
        DepthBiasClamp = depthBiasClamp;
        SlopeScaledDepthBias = slopeScaledDepthBias;
        DepthClipEnable = depthClipEnable;
        LineRasterizationMode = lineRasterizationMode;
        ForcedSampleCount = forcedSampleCount;
        ConservativeRaster = conservativeRaster;
    constexpr RasterizerDescription2(const RasterizerDescription& description)
    {}

    constexpr RasterizerDescription2(const RasterizerDescription1& description)
    CullMode = description.CullMode;
        FillMode = description.FillMode;
        FrontCounterClockwise = description.FrontCounterClockwise;
        DepthBias = (float)description.DepthBias;
        DepthBiasClamp = description.DepthBiasClamp;
        SlopeScaledDepthBias = description.SlopeScaledDepthBias;
        DepthClipEnable = description.DepthClipEnable;
        LineRasterizationMode = LineRasterizationMode.Aliased;
        if (description.MultisampleEnable)
        {
            LineRasterizationMode = LineRasterizationMode.QuadrilateralWide;
        }
        else if (description.AntialiasedLineEnable)
        {
            LineRasterizationMode = LineRasterizationMode.AlphaAntialiased;
        }
        ForcedSampleCount = description.ForcedSampleCount;
        ConservativeRaster = description.ConservativeRaster;
    static RasterizerDescription2 CullNone{> new(CullMode.None, FillMode.Solid)};
    static RasterizerDescription2 CullClockwise{> new(CullMode.Front, FillMode.Solid)};
    static RasterizerDescription2 CullCounterClockwise{> new(CullMode.Back, FillMode.Solid)};
    static RasterizerDescription2 Wireframe{> new(CullMode.Back, FillMode.Wireframe)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RASTERIZERDESCRIPTION2_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RASTERIZERDESCRIPTION2_H
