// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_CONVOLVEMATRIX_H
#define VORTICE_DIRECT2D1_CONVOLVEMATRIX_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CONVOLVEMATRIX_H
#define VORTICE_VORTICE_CONVOLVEMATRIX_H

#include <cstdint>

namespace Vortice {

class ConvolveMatrix : public ID2D1Effect
{
public:
    constexpr ConvolveMatrix(ID2D1DeviceContext context)
    {}

    constexpr ConvolveMatrix(ID2D1EffectContext context)
    {}

    ~ConvolveMatrix() = default;

    float get_KernelUnitLength() const { GetFloatValue((int)ConvolveMatrixProperties.KernelUnitLength) }
    ConvolveMatrixScaleMode get_ScaleMode() const { GetEnumValue<ConvolveMatrixScaleMode>((int)ConvolveMatrixProperties.ScaleMode) }
    uint32_t get_KernelSizeX() const { GetUIntValue((int)ConvolveMatrixProperties.KernelSizeX) }
    uint32_t get_KernelSizeY() const { GetUIntValue((int)ConvolveMatrixProperties.KernelSizeY) }
    float get_Divisor() const { GetFloatValue((uint)ConvolveMatrixProperties.Divisor) }
    float get_Bias() const { GetFloatValue((uint)ConvolveMatrixProperties.Bias) }
    Vector2 get_KernelOffset() const { GetVector2Value((uint)ConvolveMatrixProperties.KernelOffset) }
    bool get_PreserveAlpha() const { GetBoolValue((int)ConvolveMatrixProperties.PreserveAlpha) }
    BorderMode get_BorderMode() const { GetEnumValue<BorderMode>((int)ConvolveMatrixProperties.BorderMode) }
    bool get_ClampOutput() const { GetBoolValue((int)ConvolveMatrixProperties.ClampOutput) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_CONVOLVEMATRIX_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_CONVOLVEMATRIX_H
