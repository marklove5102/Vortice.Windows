// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_LINEARTRANSFER_H
#define VORTICE_DIRECT2D1_LINEARTRANSFER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_LINEARTRANSFER_H
#define VORTICE_VORTICE_LINEARTRANSFER_H

#include <cstdint>

namespace Vortice {

class LinearTransfer : public ID2D1Effect
{
public:
    constexpr LinearTransfer(ID2D1DeviceContext context)
    {}

    constexpr LinearTransfer(ID2D1EffectContext context)
    {}

    ~LinearTransfer() = default;

    float get_RedYIntercept() const { GetFloatValue((int)LinearTransferProperties.RedYIntercept) }
    float get_RedSlope() const { GetFloatValue((int)LinearTransferProperties.RedSlope) }
    bool get_RedDisable() const { GetBoolValue((int)LinearTransferProperties.RedDisable) }
    float get_GreenYIntercept() const { GetFloatValue((int)LinearTransferProperties.GreenYIntercept) }
    float get_GreenSlope() const { GetFloatValue((int)LinearTransferProperties.GreenSlope) }
    bool get_GreenDisable() const { GetBoolValue((int)LinearTransferProperties.GreenDisable) }
    float get_BlueYIntercept() const { GetFloatValue((int)LinearTransferProperties.BlueYIntercept) }
    float get_BlueSlope() const { GetFloatValue((int)LinearTransferProperties.BlueSlope) }
    bool get_BlueDisable() const { GetBoolValue((int)LinearTransferProperties.BlueDisable) }
    float get_AlphaYIntercept() const { GetFloatValue((int)LinearTransferProperties.AlphaYIntercept) }
    float get_AlphaSlope() const { GetFloatValue((int)LinearTransferProperties.AlphaSlope) }
    bool get_AlphaDisable() const { GetBoolValue((int)LinearTransferProperties.AlphaDisable) }
    bool get_ClampOutput() const { GetBoolValue((int)LinearTransferProperties.ClampOutput) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_LINEARTRANSFER_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_LINEARTRANSFER_H
