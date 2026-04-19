// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_TILEDRESOURCECOORDINATE_H
#define VORTICE_DIRECT3D12_TILEDRESOURCECOORDINATE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TILEDRESOURCECOORDINATE_H
#define VORTICE_VORTICE_TILEDRESOURCECOORDINATE_H

#include <cstdint>

namespace Vortice {

struct TiledResourceCoordinate
{
public:
    constexpr TiledResourceCoordinate(uint32_t x, uint32_t y, uint32_t z, uint32_t 0)
    X = x;
        Y = y;
        Z = z;
        Subresource = subresource;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TILEDRESOURCECOORDINATE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_TILEDRESOURCECOORDINATE_H
