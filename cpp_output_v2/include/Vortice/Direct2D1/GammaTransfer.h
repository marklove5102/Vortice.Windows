// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_GAMMATRANSFER_H
#define VORTICE_DIRECT2D1_GAMMATRANSFER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GAMMATRANSFER_H
#define VORTICE_VORTICE_GAMMATRANSFER_H

#include <cstdint>

namespace Vortice {

class GammaTransfer : public ID2D1Effect
{
public:
    constexpr GammaTransfer(ID2D1DeviceContext context)
    {}

    constexpr GammaTransfer(ID2D1EffectContext context)
    {}

    ~GammaTransfer() = default;

    float get_RedAmplitude() const { GetFloatValue((int)GammaTransferProperties.RedAmplitude) }
    float get_RedExponent() const { GetFloatValue((int)GammaTransferProperties.RedExponent) }
    float get_RedOffset() const { GetFloatValue((int)GammaTransferProperties.RedOffset) }
    bool get_RedDisable() const { GetBoolValue((int)GammaTransferProperties.RedDisable) }
    float get_GreenAmplitude() const { GetFloatValue((int)GammaTransferProperties.GreenAmplitude) }
    float get_GreenExponent() const { GetFloatValue((int)GammaTransferProperties.GreenExponent) }
    float get_GreenOffset() const { GetFloatValue((int)GammaTransferProperties.GreenOffset) }
    bool get_GreenDisable() const { GetBoolValue((int)GammaTransferProperties.GreenDisable) }
    float get_BlueAmplitude() const { GetFloatValue((int)GammaTransferProperties.BlueAmplitude) }
    float get_BlueExponent() const { GetFloatValue((int)GammaTransferProperties.BlueExponent) }
    float get_BlueOffset() const { GetFloatValue((int)GammaTransferProperties.BlueOffset) }
    bool get_BlueDisable() const { GetBoolValue((int)GammaTransferProperties.BlueDisable) }
    float get_AlphaAmplitude() const { GetFloatValue((int)GammaTransferProperties.AlphaAmplitude) }
    float get_AlphaExponent() const { GetFloatValue((int)GammaTransferProperties.AlphaExponent) }
    float get_AlphaOffset() const { GetFloatValue((int)GammaTransferProperties.AlphaOffset) }
    bool get_AlphaDisable() const { GetBoolValue((int)GammaTransferProperties.AlphaDisable) }
    bool get_ClampOutput() const { GetBoolValue((int)GammaTransferProperties.ClampOutput) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_GAMMATRANSFER_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_GAMMATRANSFER_H
