// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_DIRECTIONALBLUR_H
#define VORTICE_DIRECT2D1_DIRECTIONALBLUR_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTIONALBLUR_H
#define VORTICE_VORTICE_DIRECTIONALBLUR_H

#include <cstdint>

namespace Vortice {

class DirectionalBlur : public ID2D1Effect
{
public:
    constexpr DirectionalBlur(ID2D1DeviceContext context)
    {}

    constexpr DirectionalBlur(ID2D1EffectContext context)
    {}

    ~DirectionalBlur() = default;

    float get_StandardDeviation() const { GetFloatValue((int)DirectionalBlurProperties.StandardDeviation) }
    float get_Angle() const { GetFloatValue((int)DirectionalBlurProperties.Angle) }
    DirectionalBlurOptimization get_Optimization() const { GetEnumValue<DirectionalBlurOptimization>((int)DirectionalBlurProperties.Optimization) }
    BorderMode get_BorderMode() const { GetEnumValue<BorderMode>((int)DirectionalBlurProperties.BorderMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DIRECTIONALBLUR_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_DIRECTIONALBLUR_H
