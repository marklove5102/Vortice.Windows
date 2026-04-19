// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_TRANSFORM3D_H
#define VORTICE_DIRECT2D1_TRANSFORM3D_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TRANSFORM3D_H
#define VORTICE_VORTICE_TRANSFORM3D_H

#include <cstdint>

namespace Vortice {

class Transform3D : public ID2D1Effect
{
public:
    constexpr Transform3D(ID2D1DeviceContext context)
    {}

    constexpr Transform3D(ID2D1EffectContext context)
    {}

    ~Transform3D() = default;

    Transform3DInterpolationMode get_InterPolationMode() const { GetEnumValue<Transform3DInterpolationMode>((int)Transform3DProperties.InterpolationMode) }
    BorderMode get_BorderMode() const { GetEnumValue<BorderMode>((int)Transform3DProperties.BorderMode) }
    Matrix4x4 get_TransformMatrix() const { GetMatrix4x4Value((int)Transform3DProperties.TransformMatrix) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_TRANSFORM3D_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_TRANSFORM3D_H
