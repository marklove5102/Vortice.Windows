// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RASTERIZERDESCRIPTION_H
#define VORTICE_DIRECT3D12_RASTERIZERDESCRIPTION_H

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

struct RasterizerDescription
{
public:
    constexpr RasterizerDescription(CullMode cullMode, FillMode fillMode, bool false, int32_t D3D12.DefaultDepthBias, float D3D12.DefaultDepthBiasClamp, float D3D12.DefaultSlopeScaledDepthBias, bool true, bool false, bool false, uint32_t 0, ConservativeRasterizationMode ConservativeRasterizationMode.Off)
    CullMode = cullMode;
        FillMode = fillMode;
        FrontCounterClockwise = frontCounterClockwise;
        DepthBias = depthBias;
        DepthBiasClamp = depthBiasClamp;
        SlopeScaledDepthBias = slopeScaledDepthBias;
        DepthClipEnable = depthClipEnable;
        MultisampleEnable = multisampleEnable;
        AntialiasedLineEnable = antialiasedLineEnable;
        ForcedSampleCount = forcedSampleCount;
        ConservativeRaster = conservativeRaster;
    static RasterizerDescription CullNone{> new(CullMode.None, FillMode.Solid)};
    static RasterizerDescription CullClockwise{> new(CullMode.Front, FillMode.Solid)};
    static RasterizerDescription CullCounterClockwise{> new(CullMode.Back, FillMode.Solid)};
    static RasterizerDescription Wireframe{> new(CullMode.Back, FillMode.Wireframe)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RASTERIZERDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RASTERIZERDESCRIPTION_H
