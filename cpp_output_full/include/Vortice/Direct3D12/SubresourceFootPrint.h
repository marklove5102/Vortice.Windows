// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_SUBRESOURCEFOOTPRINT_H
#define VORTICE_DIRECT3D12_SUBRESOURCEFOOTPRINT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SUBRESOURCEFOOTPRINT_H
#define VORTICE_VORTICE_SUBRESOURCEFOOTPRINT_H

#include <cstdint>

namespace Vortice {

struct SubresourceFootPrint
{
public:
    constexpr SubresourceFootPrint(Format format, uint32_t width, uint32_t height, uint32_t depth, uint32_t rowPitch)
    Format = format;
        Width = width;
        Height = height;
        Depth = depth;
        RowPitch = rowPitch;
    constexpr SubresourceFootPrint(ResourceDescription description, uint32_t rowPitch)
    Format = description.Format;
        Width = (uint)description.Width;
        Height = description.Height;
        Depth = (description.Dimension == ResourceDimension.Texture3D ? description.DepthOrArraySize : 1u);
        RowPitch = rowPitch;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_SUBRESOURCEFOOTPRINT_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_SUBRESOURCEFOOTPRINT_H
