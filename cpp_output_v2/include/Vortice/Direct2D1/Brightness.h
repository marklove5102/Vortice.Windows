// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_BRIGHTNESS_H
#define VORTICE_DIRECT2D1_BRIGHTNESS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BRIGHTNESS_H
#define VORTICE_VORTICE_BRIGHTNESS_H

#include <cstdint>

namespace Vortice {

class Brightness : public ID2D1Effect
{
public:
    constexpr Brightness(ID2D1DeviceContext context)
    {}

    constexpr Brightness(ID2D1EffectContext context)
    {}

    ~Brightness() = default;

    Vector2 get_WhitePoint() const { GetVector2Value((int)BrightnessProperties.WhitePoint) }
    Vector2 get_BlackPoint() const { GetVector2Value((int)BrightnessProperties.BlackPoint) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_BRIGHTNESS_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_BRIGHTNESS_H
