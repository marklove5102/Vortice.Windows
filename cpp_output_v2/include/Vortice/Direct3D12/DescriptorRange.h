// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_DESCRIPTORRANGE_H
#define VORTICE_DIRECT3D12_DESCRIPTORRANGE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DESCRIPTORRANGE_H
#define VORTICE_VORTICE_DESCRIPTORRANGE_H

#include <cstdint>

namespace Vortice {

struct DescriptorRange
{
public:
    constexpr DescriptorRange(DescriptorRangeType rangeType, uint32_t numDescriptors, uint32_t baseShaderRegister, uint32_t 0, uint32_t D3D12.DescriptorRangeOffsetAppend)
    RangeType = rangeType;
        NumDescriptors = numDescriptors;
        BaseShaderRegister = baseShaderRegister;
        RegisterSpace = registerSpace;
        OffsetInDescriptorsFromTableStart = offsetInDescriptorsFromTableStart;
    constexpr DescriptorRange(DescriptorRange1 other)
    RangeType = other.RangeType;
        NumDescriptors = other.NumDescriptors;
        BaseShaderRegister = other.BaseShaderRegister;
        RegisterSpace = other.RegisterSpace;
        OffsetInDescriptorsFromTableStart = other.OffsetInDescriptorsFromTableStart;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_DESCRIPTORRANGE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_DESCRIPTORRANGE_H
