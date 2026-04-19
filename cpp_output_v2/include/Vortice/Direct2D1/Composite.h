// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_COMPOSITE_H
#define VORTICE_DIRECT2D1_COMPOSITE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_COMPOSITE_H
#define VORTICE_VORTICE_COMPOSITE_H

#include <cstdint>

namespace Vortice {

class Composite : public ID2D1Effect
{
public:
    constexpr Composite(ID2D1DeviceContext context)
    {}

    constexpr Composite(ID2D1EffectContext context)
    {}

    ~Composite() = default;

    CompositeMode get_Mode() const { GetEnumValue<CompositeMode>((int)CompositeProperties.Mode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_COMPOSITE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_COMPOSITE_H
