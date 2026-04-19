// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_DISCRETETRANSFER_H
#define VORTICE_DIRECT2D1_DISCRETETRANSFER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DISCRETETRANSFER_H
#define VORTICE_VORTICE_DISCRETETRANSFER_H

#include <cstdint>

namespace Vortice {

class DiscreteTransfer : public ID2D1Effect
{
public:
    constexpr DiscreteTransfer(ID2D1DeviceContext context)
    {}

    constexpr DiscreteTransfer(ID2D1EffectContext context)
    {}

    ~DiscreteTransfer() = default;

    bool get_RedDisable() const { GetBoolValue((int)DiscreteTransferProperties.RedDisable) }
    bool get_GreenDisable() const { GetBoolValue((int)DiscreteTransferProperties.GreenDisable) }
    bool get_BlueDisable() const { GetBoolValue((int)DiscreteTransferProperties.BlueDisable) }
    bool get_AlphaDisable() const { GetBoolValue((int)DiscreteTransferProperties.AlphaDisable) }
    bool get_ClampOutput() const { GetBoolValue((int)DiscreteTransferProperties.ClampOutput) }


private:
    uint32_t _redTableSize{2};
    uint32_t _greenTableSize{2};
    uint32_t _blueTableSize{2};
    uint32_t _alphaTableSize{2};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_DISCRETETRANSFER_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_DISCRETETRANSFER_H
