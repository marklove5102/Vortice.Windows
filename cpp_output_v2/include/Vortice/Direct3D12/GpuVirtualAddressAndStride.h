// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_GPUVIRTUALADDRESSANDSTRIDE_H
#define VORTICE_DIRECT3D12_GPUVIRTUALADDRESSANDSTRIDE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GPUVIRTUALADDRESSANDSTRIDE_H
#define VORTICE_VORTICE_GPUVIRTUALADDRESSANDSTRIDE_H

#include <cstdint>

namespace Vortice {

struct GpuVirtualAddressAndStride
{
public:
    constexpr GpuVirtualAddressAndStride(uint64_t startAddress, uint64_t strideInBytes)
    StartAddress = startAddress;
        StrideInBytes = strideInBytes;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_GPUVIRTUALADDRESSANDSTRIDE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_GPUVIRTUALADDRESSANDSTRIDE_H
