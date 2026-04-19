// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_SATURATION_H
#define VORTICE_DIRECT2D1_SATURATION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SATURATION_H
#define VORTICE_VORTICE_SATURATION_H

#include <cstdint>

namespace Vortice {

class Saturation : public ID2D1Effect
{
public:
    constexpr Saturation(ID2D1DeviceContext context)
    {}

    constexpr Saturation(ID2D1EffectContext context)
    {}

    ~Saturation() = default;

    float get_Value() const { GetFloatValue((int)Props.Saturation) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SATURATION_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_SATURATION_H
