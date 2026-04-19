// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_TURBULENCE_H
#define VORTICE_DIRECT2D1_TURBULENCE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TURBULENCE_H
#define VORTICE_VORTICE_TURBULENCE_H

#include <cstdint>

namespace Vortice {

class Turbulence : public ID2D1Effect
{
public:
    constexpr Turbulence(ID2D1DeviceContext context)
    {}

    constexpr Turbulence(ID2D1EffectContext context)
    {}

    ~Turbulence() = default;

    Vector2 get_Offset() const { GetVector2Value((int)TurbulenceProperties.Offset) }
    Vector2 get_Size() const { GetVector2Value((int)TurbulenceProperties.Size) }
    Vector2 get_BaseFrequency() const { GetVector2Value((int)TurbulenceProperties.BaseFrequency) }
    int32_t get_NumOctaves() const { (int)GetUIntValue((int)TurbulenceProperties.NumOctaves) }
    int32_t get_Seed() const { GetIntValue((int)TurbulenceProperties.Seed) }
    TurbulenceNoise get_Noise() const { GetEnumValue<TurbulenceNoise>((int)TurbulenceProperties.Noise) }
    bool get_Stitchable() const { GetBoolValue((int)TurbulenceProperties.Stitchable) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_TURBULENCE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_TURBULENCE_H
