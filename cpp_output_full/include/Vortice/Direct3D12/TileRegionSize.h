// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_TILEREGIONSIZE_H
#define VORTICE_DIRECT3D12_TILEREGIONSIZE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TILEREGIONSIZE_H
#define VORTICE_VORTICE_TILEREGIONSIZE_H

#include <cstdint>

namespace Vortice {

struct TileRegionSize
{
public:
    constexpr TileRegionSize(uint32_t numTiles)
    NumTiles = numTiles;
        UseBox = false;
        Width = Height = Depth = 0;
    constexpr TileRegionSize(uint32_t width, uint16_t height, uint16_t depth)
    Width = width >= 1 ? width : 1;
        Height = height >= 1 ? height : (ushort)1;
        Depth = depth >= 1 ? depth : (ushort)1;
        NumTiles = Width * Height * Depth;
        UseBox = true;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TILEREGIONSIZE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_TILEREGIONSIZE_H
