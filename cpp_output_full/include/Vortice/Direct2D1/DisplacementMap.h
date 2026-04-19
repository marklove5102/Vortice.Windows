// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_DISPLACEMENTMAP_H
#define VORTICE_DIRECT2D1_DISPLACEMENTMAP_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DISPLACEMENTMAP_H
#define VORTICE_VORTICE_DISPLACEMENTMAP_H

#include <cstdint>

namespace Vortice {

class DisplacementMap : public ID2D1Effect
{
public:
    constexpr DisplacementMap(ID2D1DeviceContext context)
    {}

    constexpr DisplacementMap(ID2D1EffectContext context)
    {}

    ~DisplacementMap() = default;

    float get_Scale() const { GetFloatValue((int)DisplacementMapProperties.Scale) }
    ChannelSelector get_XChannelSelect() const { GetEnumValue<ChannelSelector>((int)DisplacementMapProperties.XChannelSelect) }
    ChannelSelector get_YChannelSelect() const { GetEnumValue<ChannelSelector>((int)DisplacementMapProperties.YChannelSelect) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DISPLACEMENTMAP_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_DISPLACEMENTMAP_H
