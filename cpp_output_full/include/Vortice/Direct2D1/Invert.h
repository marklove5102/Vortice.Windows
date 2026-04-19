// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_INVERT_H
#define VORTICE_DIRECT2D1_INVERT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_INVERT_H
#define VORTICE_VORTICE_INVERT_H

#include <cstdint>

namespace Vortice {

class Invert : public ID2D1Effect
{
public:
    constexpr Invert(ID2D1DeviceContext context)
    {}

    constexpr Invert(ID2D1EffectContext context)
    {}

    ~Invert() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_INVERT_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_INVERT_H
