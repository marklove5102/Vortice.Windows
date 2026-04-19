// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_GPUVIRTUALADDRESSRANGE_H
#define VORTICE_DIRECT3D12_GPUVIRTUALADDRESSRANGE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GPUVIRTUALADDRESSRANGE_H
#define VORTICE_VORTICE_GPUVIRTUALADDRESSRANGE_H

#include <cstdint>

namespace Vortice {

struct GpuVirtualAddressRange
{
public:
    constexpr GpuVirtualAddressRange(uint64_t startAddress, uint64_t sizeInBytes)
    StartAddress = startAddress;
        SizeInBytes = sizeInBytes;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_GPUVIRTUALADDRESSRANGE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_GPUVIRTUALADDRESSRANGE_H
