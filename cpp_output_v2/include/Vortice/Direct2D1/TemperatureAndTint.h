// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_TEMPERATUREANDTINT_H
#define VORTICE_DIRECT2D1_TEMPERATUREANDTINT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TEMPERATUREANDTINT_H
#define VORTICE_VORTICE_TEMPERATUREANDTINT_H

#include <cstdint>

namespace Vortice {

class TemperatureAndTint : public ID2D1Effect
{
public:
    constexpr TemperatureAndTint(ID2D1DeviceContext context)
    {}

    constexpr TemperatureAndTint(ID2D1EffectContext context)
    {}

    ~TemperatureAndTint() = default;

    float get_Temperature() const { GetFloatValue((int)TemperatureAndTintProperties.Temperature) }
    float get_Tint() const { GetFloatValue((int)TemperatureAndTintProperties.Tint) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_TEMPERATUREANDTINT_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_TEMPERATUREANDTINT_H
