// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_POINTDIFFUSE_H
#define VORTICE_DIRECT2D1_POINTDIFFUSE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_POINTDIFFUSE_H
#define VORTICE_VORTICE_POINTDIFFUSE_H

#include <cstdint>

namespace Vortice {

class PointDiffuse : public ID2D1Effect
{
public:
    constexpr PointDiffuse(ID2D1DeviceContext context)
    {}

    constexpr PointDiffuse(ID2D1EffectContext context)
    {}

    ~PointDiffuse() = default;

    Vector3 get_LightPosition() const { GetVector3Value((int)PointDiffuseProperties.LightPosition) }
    float get_DiffuseConstant() const { GetFloatValue((int)PointDiffuseProperties.DiffuseConstant) }
    float get_SurfaceScale() const { GetFloatValue((int)PointDiffuseProperties.SurfaceScale) }
    Vector3 get_Color() const { GetVector3Value((int)PointDiffuseProperties.Color) }
    Vector2 get_KernelUnitLength() const { GetVector2Value((int)PointDiffuseProperties.KernelUnitLength) }
    PointDiffuseScaleMode get_ScaleMode() const { GetEnumValue<PointDiffuseScaleMode>((int)PointDiffuseProperties.ScaleMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_POINTDIFFUSE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_POINTDIFFUSE_H
