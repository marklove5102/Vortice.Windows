// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_SPOTDIFFUSE_H
#define VORTICE_DIRECT2D1_SPOTDIFFUSE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SPOTDIFFUSE_H
#define VORTICE_VORTICE_SPOTDIFFUSE_H

#include <cstdint>

namespace Vortice {

class SpotDiffuse : public ID2D1Effect
{
public:
    constexpr SpotDiffuse(ID2D1DeviceContext context)
    {}

    constexpr SpotDiffuse(ID2D1EffectContext context)
    {}

    ~SpotDiffuse() = default;

    Vector3 get_LightPosition() const { GetVector3Value((int)SpotDiffuseProperties.LightPosition) }
    Vector3 get_PointsAt() const { GetVector3Value((int)SpotDiffuseProperties.PointsAt) }
    float get_Focus() const { GetFloatValue((int)SpotDiffuseProperties.Focus) }
    float get_LimitingConeAngle() const { GetFloatValue((int)SpotDiffuseProperties.LimitingConeAngle) }
    float get_DiffuseConstant() const { GetFloatValue((int)SpotDiffuseProperties.DiffuseConstant) }
    float get_SurfaceScale() const { GetFloatValue((int)SpotDiffuseProperties.SurfaceScale) }
    Vector3 get_Color() const { GetVector3Value((int)SpotDiffuseProperties.Color) }
    Vector2 get_KernelUnitLength() const { GetVector2Value((int)SpotDiffuseProperties.KernelUnitLength) }
    SpotDiffuseScaleMode get_ScaleMode() const { GetEnumValue<SpotDiffuseScaleMode>((int)SpotDiffuseProperties.ScaleMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SPOTDIFFUSE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_SPOTDIFFUSE_H
