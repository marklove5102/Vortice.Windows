// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ALPHAMASK_H
#define VORTICE_DIRECT2D1_ALPHAMASK_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ALPHAMASK_H
#define VORTICE_VORTICE_ALPHAMASK_H

#include <cstdint>

namespace Vortice {

class AlphaMask : public ID2D1Effect
{
public:
    constexpr AlphaMask(ID2D1DeviceContext context)
    {}

    constexpr AlphaMask(ID2D1EffectContext context)
    {}

    ~AlphaMask() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ALPHAMASK_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ALPHAMASK_H
