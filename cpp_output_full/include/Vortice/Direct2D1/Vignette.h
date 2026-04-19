// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_VIGNETTE_H
#define VORTICE_DIRECT2D1_VIGNETTE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VIGNETTE_H
#define VORTICE_VORTICE_VIGNETTE_H

#include <cstdint>

namespace Vortice {

class Vignette : public ID2D1Effect
{
public:
    constexpr Vignette(ID2D1DeviceContext context)
    {}

    constexpr Vignette(ID2D1EffectContext context)
    {}

    ~Vignette() = default;

    Vector4 get_Color() const { GetVector4Value((int)VignetteProperties.Color) }
    float get_TransitionSize() const { GetFloatValue((int)VignetteProperties.TransitionSize) }
    float get_Strength() const { GetFloatValue((int)VignetteProperties.Strength) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_VIGNETTE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_VIGNETTE_H
