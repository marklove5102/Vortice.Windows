// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_SPOTSPECULAR_H
#define VORTICE_DIRECT2D1_SPOTSPECULAR_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SPOTSPECULAR_H
#define VORTICE_VORTICE_SPOTSPECULAR_H

#include <cstdint>

namespace Vortice {

class SpotSpecular : public ID2D1Effect
{
public:
    constexpr SpotSpecular(ID2D1DeviceContext context)
    {}

    constexpr SpotSpecular(ID2D1EffectContext context)
    {}

    ~SpotSpecular() = default;

    Vector3 get_LightPosition() const { GetVector3Value((int)SpotSpecularProperties.LightPosition) }
    Vector3 get_PointsAt() const { GetVector3Value((int)SpotSpecularProperties.PointsAt) }
    float get_Focus() const { GetFloatValue((int)SpotSpecularProperties.Focus) }
    float get_LimitingConeAngle() const { GetFloatValue((int)SpotSpecularProperties.LimitingConeAngle) }
    float get_SpecularExponent() const { GetFloatValue((int)SpotSpecularProperties.SpecularExponent) }
    float get_SpecularConstant() const { GetFloatValue((int)SpotSpecularProperties.SpecularConstant) }
    float get_SurfaceScale() const { GetFloatValue((int)SpotSpecularProperties.SurfaceScale) }
    Vector3 get_Color() const { GetVector3Value((int)SpotSpecularProperties.Color) }
    Vector2 get_KernelUnitLength() const { GetVector2Value((int)SpotSpecularProperties.KernelUnitLength) }
    SpotSpecularScaleMode get_ScaleMode() const { GetEnumValue<SpotSpecularScaleMode>((int)SpotSpecularProperties.ScaleMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SPOTSPECULAR_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_SPOTSPECULAR_H
