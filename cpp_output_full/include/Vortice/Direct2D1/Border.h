// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_BORDER_H
#define VORTICE_DIRECT2D1_BORDER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BORDER_H
#define VORTICE_VORTICE_BORDER_H

#include <cstdint>

namespace Vortice {

class Border : public ID2D1Effect
{
public:
    constexpr Border(ID2D1DeviceContext context)
    {}

    constexpr Border(ID2D1EffectContext context)
    {}

    ~Border() = default;

    BorderEdgeMode get_EdgeModeX() const { GetEnumValue<BorderEdgeMode>((int)BorderProperties.EdgeModeX) }
    BorderEdgeMode get_EdgeModeY() const { GetEnumValue<BorderEdgeMode>((int)BorderProperties.EdgeModeY) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_BORDER_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_BORDER_H
