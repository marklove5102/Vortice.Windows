// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_CROSSFADE_H
#define VORTICE_DIRECT2D1_CROSSFADE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CROSSFADE_H
#define VORTICE_VORTICE_CROSSFADE_H

#include <cstdint>

namespace Vortice {

class CrossFade : public ID2D1Effect
{
public:
    constexpr CrossFade(ID2D1DeviceContext context)
    {}

    constexpr CrossFade(ID2D1EffectContext context)
    {}

    ~CrossFade() = default;

    float get_Weight() const { GetFloatValue((int)CrossFadeProperties.Weight) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_CROSSFADE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_CROSSFADE_H
