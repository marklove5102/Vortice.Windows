// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_POSTERIZE_H
#define VORTICE_DIRECT2D1_POSTERIZE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_POSTERIZE_H
#define VORTICE_VORTICE_POSTERIZE_H

#include <cstdint>

namespace Vortice {

class Posterize : public ID2D1Effect
{
public:
    constexpr Posterize(ID2D1DeviceContext context)
    {}

    constexpr Posterize(ID2D1EffectContext context)
    {}

    ~Posterize() = default;

    int32_t get_RedValueCount() const { (int)GetUIntValue((int)PosterizeProperties.RedValueCount) }
    int32_t get_GreenValueCount() const { (int)GetUIntValue((int)PosterizeProperties.GreenValueCount) }
    int32_t get_BlueValueCount() const { (int)GetUIntValue((int)PosterizeProperties.BlueValueCount) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_POSTERIZE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_POSTERIZE_H
