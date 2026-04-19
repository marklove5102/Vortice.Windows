// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_CONTRAST_H
#define VORTICE_DIRECT2D1_CONTRAST_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CONTRAST_H
#define VORTICE_VORTICE_CONTRAST_H

#include <cstdint>

namespace Vortice {

class Contrast : public ID2D1Effect
{
public:
    constexpr Contrast(ID2D1DeviceContext context)
    {}

    constexpr Contrast(ID2D1EffectContext context)
    {}

    ~Contrast() = default;

    float get_Value() const { GetFloatValue((int)ContrastProperties.Contrast) }
    bool get_ClampInput() const { GetBoolValue((int)ContrastProperties.ClampInput) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_CONTRAST_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_CONTRAST_H
