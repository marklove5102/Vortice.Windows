// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_RGBTOHUE_H
#define VORTICE_DIRECT2D1_RGBTOHUE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RGBTOHUE_H
#define VORTICE_VORTICE_RGBTOHUE_H

#include <cstdint>

namespace Vortice {

class RgbToHue : public ID2D1Effect
{
public:
    constexpr RgbToHue(ID2D1DeviceContext context)
    {}

    constexpr RgbToHue(ID2D1EffectContext context)
    {}

    ~RgbToHue() = default;

    RGBToHueOutputColorSpace get_OutputColorSpace() const { GetEnumValue<RGBToHueOutputColorSpace>((int)RGBToHueProperties.OutputColorSpace) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RGBTOHUE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_RGBTOHUE_H
