// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_SHADOW_H
#define VORTICE_DIRECT2D1_SHADOW_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SHADOW_H
#define VORTICE_VORTICE_SHADOW_H

#include <cstdint>

namespace Vortice {

class Shadow : public ID2D1Effect
{
public:
    constexpr Shadow(ID2D1DeviceContext context)
    {}

    constexpr Shadow(ID2D1EffectContext context)
    {}

    ~Shadow() = default;

    float get_BlurStandardDeviation() const { GetFloatValue((int)ShadowProperties.BlurStandardDeviation) }
    Vector4 get_Color() const { GetVector4Value((int)ShadowProperties.Color) }
    ShadowOptimization get_Optimization() const { GetEnumValue<ShadowOptimization>((int)ShadowProperties.Optimization) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SHADOW_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_SHADOW_H
