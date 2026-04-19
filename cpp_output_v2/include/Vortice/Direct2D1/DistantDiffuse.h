// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_DISTANTDIFFUSE_H
#define VORTICE_DIRECT2D1_DISTANTDIFFUSE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DISTANTDIFFUSE_H
#define VORTICE_VORTICE_DISTANTDIFFUSE_H

#include <cstdint>

namespace Vortice {

class DistantDiffuse : public ID2D1Effect
{
public:
    constexpr DistantDiffuse(ID2D1DeviceContext context)
    {}

    constexpr DistantDiffuse(ID2D1EffectContext context)
    {}

    ~DistantDiffuse() = default;

    float get_Azimuth() const { GetFloatValue((int)DistantDiffuseProperties.Azimuth) }
    float get_Elevation() const { GetFloatValue((int)DistantDiffuseProperties.Elevation) }
    float get_DiffuseConstant() const { GetFloatValue((int)DistantDiffuseProperties.DiffuseConstant) }
    float get_SurfaceScale() const { GetFloatValue((int)DistantDiffuseProperties.SurfaceScale) }
    Vector3 get_Color() const { GetVector3Value((int)DistantDiffuseProperties.Color) }
    Vector2 get_KernelUnitLength() const { GetVector2Value((int)DistantDiffuseProperties.KernelUnitLength) }
    DistantDiffuseScaleMode get_ScaleMode() const { GetEnumValue<DistantDiffuseScaleMode>((int)DistantDiffuseProperties.ScaleMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DISTANTDIFFUSE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_DISTANTDIFFUSE_H
