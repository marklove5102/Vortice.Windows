// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_TABLETRANSFER_H
#define VORTICE_DIRECT2D1_TABLETRANSFER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TABLETRANSFER_H
#define VORTICE_VORTICE_TABLETRANSFER_H

#include <cstdint>

namespace Vortice {

class TableTransfer : public ID2D1Effect
{
public:
    constexpr TableTransfer(ID2D1DeviceContext context)
    {}

    constexpr TableTransfer(ID2D1EffectContext context)
    {}

    ~TableTransfer() = default;

    bool get_RedDisable() const { GetBoolValue((int)TableTransferProperties.RedDisable) }
    bool get_GreenDisable() const { GetBoolValue((int)TableTransferProperties.GreenDisable) }
    bool get_BlueDisable() const { GetBoolValue((int)TableTransferProperties.BlueDisable) }
    bool get_AlphaDisable() const { GetBoolValue((int)TableTransferProperties.AlphaDisable) }
    bool get_ClampOutput() const { GetBoolValue((int)TableTransferProperties.ClampOutput) }


private:
    uint32_t _redTableSize{2};
    uint32_t _greenTableSize{2};
    uint32_t _blueTableSize{2};
    uint32_t _alphaTableSize{2};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TABLETRANSFER_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_TABLETRANSFER_H
