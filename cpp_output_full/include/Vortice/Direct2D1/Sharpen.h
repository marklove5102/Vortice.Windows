// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_SHARPEN_H
#define VORTICE_DIRECT2D1_SHARPEN_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SHARPEN_H
#define VORTICE_VORTICE_SHARPEN_H

#include <cstdint>

namespace Vortice {

class Sharpen : public ID2D1Effect
{
public:
    constexpr Sharpen(ID2D1DeviceContext context)
    {}

    constexpr Sharpen(ID2D1EffectContext context)
    {}

    ~Sharpen() = default;

    float get_Sharpness() const { GetFloatValue((int)SharpenProperties.Sharpness) }
    float get_Threshold() const { GetFloatValue((int)SharpenProperties.Threshold) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SHARPEN_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_SHARPEN_H
