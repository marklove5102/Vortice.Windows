// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_TINT_H
#define VORTICE_DIRECT2D1_TINT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TINT_H
#define VORTICE_VORTICE_TINT_H

#include <cstdint>

namespace Vortice {

class Tint : public ID2D1Effect
{
public:
    constexpr Tint(ID2D1DeviceContext context)
    {}

    constexpr Tint(ID2D1EffectContext context)
    {}

    ~Tint() = default;

    Vector4 get_Color() const { GetVector4Value((int)TintProperties.Color) }
    bool get_ClampOutput() const { GetBoolValue((int)TintProperties.ClampOutput) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_TINT_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_TINT_H
