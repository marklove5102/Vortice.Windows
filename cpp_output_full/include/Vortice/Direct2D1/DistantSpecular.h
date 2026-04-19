// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_DISTANTSPECULAR_H
#define VORTICE_DIRECT2D1_DISTANTSPECULAR_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DISTANTSPECULAR_H
#define VORTICE_VORTICE_DISTANTSPECULAR_H

#include <cstdint>

namespace Vortice {

class DistantSpecular : public ID2D1Effect
{
public:
    constexpr DistantSpecular(ID2D1DeviceContext context)
    {}

    constexpr DistantSpecular(ID2D1EffectContext context)
    {}

    ~DistantSpecular() = default;

    float get_Azimuth() const { GetFloatValue((int)DistantSpecularProperties.Azimuth) }
    float get_Elevation() const { GetFloatValue((int)DistantSpecularProperties.Elevation) }
    float get_SpecularExponent() const { GetFloatValue((int)DistantSpecularProperties.SpecularExponent) }
    float get_SpecularConstant() const { GetFloatValue((int)DistantSpecularProperties.SpecularConstant) }
    float get_SurfaceScale() const { GetFloatValue((int)DistantSpecularProperties.SurfaceScale) }
    Vector3 get_Color() const { GetVector3Value((int)DistantSpecularProperties.Color) }
    Vector2 get_KernelUnitLength() const { GetVector2Value((int)DistantSpecularProperties.KernelUnitLength) }
    DistantSpecularScaleMode get_ScaleMode() const { GetEnumValue<DistantSpecularScaleMode>((int)DistantSpecularProperties.ScaleMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DISTANTSPECULAR_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_DISTANTSPECULAR_H
