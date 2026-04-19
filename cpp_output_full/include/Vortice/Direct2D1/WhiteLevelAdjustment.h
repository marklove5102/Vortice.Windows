// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_WHITELEVELADJUSTMENT_H
#define VORTICE_DIRECT2D1_WHITELEVELADJUSTMENT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WHITELEVELADJUSTMENT_H
#define VORTICE_VORTICE_WHITELEVELADJUSTMENT_H

#include <cstdint>

namespace Vortice {

class WhiteLevelAdjustment : public ID2D1Effect
{
public:
    constexpr WhiteLevelAdjustment(ID2D1DeviceContext context)
    {}

    constexpr WhiteLevelAdjustment(ID2D1EffectContext context)
    {}

    ~WhiteLevelAdjustment() = default;

    float get_InputWhiteLebel() const { GetFloatValue((int)WhiteLevelAdjustmentProperties.InputWhiteLevel) }
    float get_OutputWhiteLevel() const { GetFloatValue((int)WhiteLevelAdjustmentProperties.OutputWhiteLevel) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_WHITELEVELADJUSTMENT_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_WHITELEVELADJUSTMENT_H
