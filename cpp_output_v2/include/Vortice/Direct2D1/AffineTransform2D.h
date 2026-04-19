// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_AFFINETRANSFORM2D_H
#define VORTICE_DIRECT2D1_AFFINETRANSFORM2D_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_AFFINETRANSFORM2D_H
#define VORTICE_VORTICE_AFFINETRANSFORM2D_H

#include <cstdint>

namespace Vortice {

class AffineTransform2D : public ID2D1Effect
{
public:
    constexpr AffineTransform2D(ID2D1DeviceContext context)
    {}

    constexpr AffineTransform2D(ID2D1EffectContext context)
    {}

    ~AffineTransform2D() = default;

    AffineTransform2DInterpolationMode get_InterPolationMode() const { GetEnumValue<AffineTransform2DInterpolationMode>((int)AffineTransform2DProperties.InterpolationMode) }
    BorderMode get_BorderMode() const { GetEnumValue<BorderMode>((uint)AffineTransform2DProperties.BorderMode) }
    Matrix3x2 get_TransformMatrix() const { GetMatrix3x2Value((uint)AffineTransform2DProperties.TransformMatrix) }
    float get_Sharpness() const { GetFloatValue((int)AffineTransform2DProperties.Sharpness) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_AFFINETRANSFORM2D_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_AFFINETRANSFORM2D_H
