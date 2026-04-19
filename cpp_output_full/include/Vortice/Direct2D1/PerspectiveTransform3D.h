// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_PERSPECTIVETRANSFORM3D_H
#define VORTICE_DIRECT2D1_PERSPECTIVETRANSFORM3D_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PERSPECTIVETRANSFORM3D_H
#define VORTICE_VORTICE_PERSPECTIVETRANSFORM3D_H

#include <cstdint>

namespace Vortice {

class PerspectiveTransform3D : public ID2D1Effect
{
public:
    constexpr PerspectiveTransform3D(ID2D1DeviceContext context)
    {}

    constexpr PerspectiveTransform3D(ID2D1EffectContext context)
    {}

    ~PerspectiveTransform3D() = default;

    PerspectiveTransform3DInteroplationMode get_InterpolationMode() const { GetEnumValue<PerspectiveTransform3DInteroplationMode>((int)PerspectiveTransform3DProperties.InterpolationMode) }
    BorderMode get_BorderMode() const { GetEnumValue<BorderMode>((int)PerspectiveTransform3DProperties.BorderMode) }
    float get_Depth() const { GetFloatValue((int)PerspectiveTransform3DProperties.Depth) }
    Vector2 get_PerspectiveOrigin() const { GetVector2Value((int)PerspectiveTransform3DProperties.PerspectiveOrigin) }
    Vector3 get_LocalOffset() const { GetVector3Value((int)PerspectiveTransform3DProperties.LocalOffset) }
    Vector3 get_GlobalOffset() const { GetVector3Value((int)PerspectiveTransform3DProperties.GlobalOffset) }
    Vector3 get_RotationOrigin() const { GetVector3Value((int)PerspectiveTransform3DProperties.RotationOrigin) }
    Vector3 get_Rotation() const { GetVector3Value((int)PerspectiveTransform3DProperties.Rotation) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_PERSPECTIVETRANSFORM3D_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_PERSPECTIVETRANSFORM3D_H
