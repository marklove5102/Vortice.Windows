// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_POINTSPECULAR_H
#define VORTICE_DIRECT2D1_POINTSPECULAR_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_POINTSPECULAR_H
#define VORTICE_VORTICE_POINTSPECULAR_H

#include <cstdint>

namespace Vortice {

class PointSpecular : public ID2D1Effect
{
public:
    constexpr PointSpecular(ID2D1DeviceContext context)
    {}

    constexpr PointSpecular(ID2D1EffectContext context)
    {}

    ~PointSpecular() = default;

    Vector3 get_LightPosition() const { GetVector3Value((int)PointSpecularProperties.LightPosition) }
    float get_SpecularExponent() const { GetFloatValue((int)PointSpecularProperties.SpecularExponent) }
    float get_SpecularConstant() const { GetFloatValue((int)PointSpecularProperties.SpecularConstant) }
    float get_SurfaceScale() const { GetFloatValue((int)PointSpecularProperties.SurfaceScale) }
    Vector3 get_Color() const { GetVector3Value((int)PointSpecularProperties.Color) }
    Vector2 get_KernelUnitLength() const { GetVector2Value((int)PointSpecularProperties.KernelUnitLength) }
    PointSpecularScaleMode get_ScaleMode() const { GetEnumValue<PointSpecularScaleMode>((int)PointSpecularProperties.ScaleMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_POINTSPECULAR_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_POINTSPECULAR_H
