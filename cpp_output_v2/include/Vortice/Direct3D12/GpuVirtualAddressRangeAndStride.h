// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_GPUVIRTUALADDRESSRANGEANDSTRIDE_H
#define VORTICE_DIRECT3D12_GPUVIRTUALADDRESSRANGEANDSTRIDE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GPUVIRTUALADDRESSRANGEANDSTRIDE_H
#define VORTICE_VORTICE_GPUVIRTUALADDRESSRANGEANDSTRIDE_H

#include <cstdint>

namespace Vortice {

struct GpuVirtualAddressRangeAndStride
{
public:
    constexpr GpuVirtualAddressRangeAndStride(uint64_t startAddress, uint64_t sizeInBytes, uint64_t strideInBytes)
    StartAddress = startAddress;
        SizeInBytes = sizeInBytes;
        StrideInBytes = strideInBytes;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_GPUVIRTUALADDRESSRANGEANDSTRIDE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_GPUVIRTUALADDRESSRANGEANDSTRIDE_H
