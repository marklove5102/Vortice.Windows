// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_EMBOSS_H
#define VORTICE_DIRECT2D1_EMBOSS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_EMBOSS_H
#define VORTICE_VORTICE_EMBOSS_H

#include <cstdint>

namespace Vortice {

class Emboss : public ID2D1Effect
{
public:
    constexpr Emboss(ID2D1DeviceContext context)
    {}

    constexpr Emboss(ID2D1EffectContext context)
    {}

    ~Emboss() = default;

    float get_Height() const { GetFloatValue((int)EmbossProperties.Height) }
    float get_Direction() const { GetFloatValue((int)EmbossProperties.Direction) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_EMBOSS_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_EMBOSS_H
