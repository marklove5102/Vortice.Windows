// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_HUEROTATION_H
#define VORTICE_DIRECT2D1_HUEROTATION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_HUEROTATION_H
#define VORTICE_VORTICE_HUEROTATION_H

#include <cstdint>

namespace Vortice {

class HueRotation : public ID2D1Effect
{
public:
    constexpr HueRotation(ID2D1DeviceContext context)
    {}

    constexpr HueRotation(ID2D1EffectContext context)
    {}

    ~HueRotation() = default;

    float get_Angle() const { GetFloatValue((int)HueRotationProperties.Angle) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_HUEROTATION_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_HUEROTATION_H
