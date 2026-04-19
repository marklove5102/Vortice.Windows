// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_DPICOMPENSATION_H
#define VORTICE_DIRECT2D1_DPICOMPENSATION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DPICOMPENSATION_H
#define VORTICE_VORTICE_DPICOMPENSATION_H

#include <cstdint>

namespace Vortice {

class DpiCompensation : public ID2D1Effect
{
public:
    constexpr DpiCompensation(ID2D1DeviceContext context)
    {}

    constexpr DpiCompensation(ID2D1EffectContext context)
    {}

    ~DpiCompensation() = default;

    DpiCompensationInterpolationMode get_InterpolationMode() const { GetEnumValue<DpiCompensationInterpolationMode>((int)DpiCompensationProperties.InterpolationMode) }
    BorderMode get_BorderMode() const { GetEnumValue<BorderMode>((int)DpiCompensationProperties.BorderMode) }
    float get_InputDpi() const { GetFloatValue((int)DpiCompensationProperties.InputDpi) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DPICOMPENSATION_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_DPICOMPENSATION_H
