// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_BLEND_H
#define VORTICE_DIRECT2D1_BLEND_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BLEND_H
#define VORTICE_VORTICE_BLEND_H

#include <cstdint>

namespace Vortice {

class Blend : public ID2D1Effect
{
public:
    constexpr Blend(ID2D1DeviceContext context)
    {}

    constexpr Blend(ID2D1EffectContext context)
    {}

    ~Blend() = default;

    BlendMode get_Mode() const { GetEnumValue<BlendMode>((int)BlendProperties.Mode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_BLEND_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_BLEND_H
