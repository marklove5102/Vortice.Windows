// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RESOURCEALLOCATIONINFO_H
#define VORTICE_DIRECT3D12_RESOURCEALLOCATIONINFO_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RESOURCEALLOCATIONINFO_H
#define VORTICE_VORTICE_RESOURCEALLOCATIONINFO_H

#include <cstdint>

namespace Vortice {

struct ResourceAllocationInfo
{
public:
    constexpr ResourceAllocationInfo(uint64_t sizeInBytes, uint64_t alignment)
    SizeInBytes = sizeInBytes;
        Alignment = alignment;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RESOURCEALLOCATIONINFO_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RESOURCEALLOCATIONINFO_H
