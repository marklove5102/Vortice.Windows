// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_STRAIGHTEN_H
#define VORTICE_DIRECT2D1_STRAIGHTEN_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_STRAIGHTEN_H
#define VORTICE_VORTICE_STRAIGHTEN_H

#include <cstdint>

namespace Vortice {

class Straighten : public ID2D1Effect
{
public:
    constexpr Straighten(ID2D1DeviceContext context)
    {}

    constexpr Straighten(ID2D1EffectContext context)
    {}

    ~Straighten() = default;

    float get_Angle() const { GetFloatValue((int)StraightenProperties.Angle) }
    bool get_MaintainSize() const { GetBoolValue((int)StraightenProperties.MaintainSize) }
    StraightenModeProperties get_ScaleMode() const { GetEnumValue<StraightenModeProperties>((int)StraightenProperties.ScaleMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_STRAIGHTEN_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_STRAIGHTEN_H
