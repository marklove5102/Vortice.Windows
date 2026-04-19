// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_HUETORGB_H
#define VORTICE_DIRECT2D1_HUETORGB_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_HUETORGB_H
#define VORTICE_VORTICE_HUETORGB_H

#include <cstdint>

namespace Vortice {

class HueToRgb : public ID2D1Effect
{
public:
    constexpr HueToRgb(ID2D1DeviceContext context)
    {}

    constexpr HueToRgb(ID2D1EffectContext context)
    {}

    ~HueToRgb() = default;

    HueToRGBInputColorSpace get_InputColorSpace() const { GetEnumValue<HueToRGBInputColorSpace>((int)HueToRGBProperties.InputColorSpace) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_HUETORGB_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_HUETORGB_H
