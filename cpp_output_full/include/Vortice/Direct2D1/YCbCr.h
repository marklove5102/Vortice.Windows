// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_YCBCR_H
#define VORTICE_DIRECT2D1_YCBCR_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_YCBCR_H
#define VORTICE_VORTICE_YCBCR_H

#include <cstdint>

namespace Vortice {

class YCbCr : public ID2D1Effect
{
public:
    constexpr YCbCr(ID2D1DeviceContext context)
    {}

    constexpr YCbCr(ID2D1EffectContext context)
    {}

    ~YCbCr() = default;

    YCbCrChromaSubSampling get_ChromaSubsampling() const { GetEnumValue<YCbCrChromaSubSampling>((int)YCbCrProperties.ChromaSubsampling) }
    Matrix3x2 get_TransformMatrix() const { GetMatrix3x2Value((int)YCbCrProperties.TransformMatrix) }
    YCbCrInterpolationMode get_InterpolationMode() const { GetEnumValue<YCbCrInterpolationMode>((int)YCbCrProperties.InterpolationMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_YCBCR_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_YCBCR_H
