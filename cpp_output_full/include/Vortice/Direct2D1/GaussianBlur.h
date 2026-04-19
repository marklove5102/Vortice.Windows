// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_GAUSSIANBLUR_H
#define VORTICE_DIRECT2D1_GAUSSIANBLUR_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GAUSSIANBLUR_H
#define VORTICE_VORTICE_GAUSSIANBLUR_H

#include <cstdint>

namespace Vortice {

class GaussianBlur : public ID2D1Effect
{
public:
    constexpr GaussianBlur(ID2D1DeviceContext context)
    {}

    constexpr GaussianBlur(ID2D1EffectContext context)
    {}

    ~GaussianBlur() = default;

    float get_StandardDeviation() const { GetFloatValue((int)GaussianBlurProperties.StandardDeviation) }
    GaussianBlurOptimization get_Optimization() const { GetEnumValue<GaussianBlurOptimization>((int)GaussianBlurProperties.Optimization) }
    BorderMode get_BorderMode() const { GetEnumValue<BorderMode>((int)GaussianBlurProperties.BorderMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_GAUSSIANBLUR_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_GAUSSIANBLUR_H
