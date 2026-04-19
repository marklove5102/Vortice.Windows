// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_SCALE_H
#define VORTICE_DIRECT2D1_SCALE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SCALE_H
#define VORTICE_VORTICE_SCALE_H

#include <cstdint>

namespace Vortice {

class Scale : public ID2D1Effect
{
public:
    constexpr Scale(ID2D1DeviceContext context)
    {}

    constexpr Scale(ID2D1EffectContext context)
    {}

    ~Scale() = default;

    Vector2 get_Value() const { GetVector2Value((int)ScaleProperties.Scale) }
    Vector2 get_CenterPoint() const { GetVector2Value((int)ScaleProperties.CenterPoint) }
    BorderMode get_BorderMode() const { GetEnumValue<BorderMode>((int)ScaleProperties.BorderMode) }
    float get_Sharpness() const { GetFloatValue((int)ScaleProperties.Sharpness) }
    ScaleInterpolationMode get_InterpolationMode() const { GetEnumValue<ScaleInterpolationMode>((int)ScaleProperties.InterpolationMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SCALE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_SCALE_H
