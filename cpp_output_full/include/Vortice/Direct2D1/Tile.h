// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_TILE_H
#define VORTICE_DIRECT2D1_TILE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TILE_H
#define VORTICE_VORTICE_TILE_H

#include <cstdint>

namespace Vortice {

class Tile : public ID2D1Effect
{
public:
    constexpr Tile(ID2D1DeviceContext context)
    {}

    constexpr Tile(ID2D1EffectContext context)
    {}

    ~Tile() = default;

    Vector4 get_Rectangle() const { GetVector4Value((int)TileProperties.Rectangle) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_TILE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_TILE_H
