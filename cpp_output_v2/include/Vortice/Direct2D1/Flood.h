// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_FLOOD_H
#define VORTICE_DIRECT2D1_FLOOD_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_FLOOD_H
#define VORTICE_VORTICE_FLOOD_H

#include <cstdint>

namespace Vortice {

class Flood : public ID2D1Effect
{
public:
    constexpr Flood(ID2D1DeviceContext context)
    {}

    constexpr Flood(ID2D1EffectContext context)
    {}

    ~Flood() = default;

    Vector4 get_Color() const { GetVector4Value((int)FloodProperties.Color) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_FLOOD_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_FLOOD_H
