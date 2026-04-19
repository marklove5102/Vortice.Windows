// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_UNPREMULTIPLY_H
#define VORTICE_DIRECT2D1_UNPREMULTIPLY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UNPREMULTIPLY_H
#define VORTICE_VORTICE_UNPREMULTIPLY_H

#include <cstdint>

namespace Vortice {

class Unpremultiply : public ID2D1Effect
{
public:
    constexpr Unpremultiply(ID2D1DeviceContext context)
    {}

    constexpr Unpremultiply(ID2D1EffectContext context)
    {}

    ~Unpremultiply() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_UNPREMULTIPLY_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_UNPREMULTIPLY_H
