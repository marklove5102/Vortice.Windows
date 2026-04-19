// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_COLORMATRIX_H
#define VORTICE_DIRECT2D1_COLORMATRIX_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_COLORMATRIX_H
#define VORTICE_VORTICE_COLORMATRIX_H

#include <cstdint>

namespace Vortice {

class ColorMatrix : public ID2D1Effect
{
public:
    constexpr ColorMatrix(ID2D1DeviceContext context)
    {}

    constexpr ColorMatrix(ID2D1EffectContext context)
    {}

    ~ColorMatrix() = default;

    Matrix5x4 get_Matrix() const { GetMatrix5x4Value((int)ColorMatrixProperties.ColorMatrix) }
    ColorMatrixAlphaMode get_AlphaMode() const { GetEnumValue<ColorMatrixAlphaMode>((int)ColorMatrixProperties.AlphaMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_COLORMATRIX_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_COLORMATRIX_H
