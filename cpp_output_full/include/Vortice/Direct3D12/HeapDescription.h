// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_HEAPDESCRIPTION_H
#define VORTICE_DIRECT3D12_HEAPDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_HEAPDESCRIPTION_H
#define VORTICE_VORTICE_HEAPDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct HeapDescription
{
public:
    constexpr HeapDescription(uint64_t size, HeapProperties properties, uint64_t 0, HeapFlags HeapFlags.None)
    SizeInBytes = size;
        Properties = properties;
        Alignment = alignment;
        Flags = flags;
    constexpr HeapDescription(uint64_t size, HeapType type, uint64_t 0, HeapFlags HeapFlags.None)
    SizeInBytes = size;
        Properties = new HeapProperties(type);
        Alignment = alignment;
        Flags = flags;
    constexpr HeapDescription(uint64_t size, CpuPageProperty cpuPageProperty, MemoryPool memoryPoolPreference, uint64_t 0, HeapFlags HeapFlags.None)
    SizeInBytes = size;
        Properties = new HeapProperties(cpuPageProperty, memoryPoolPreference);
        Alignment = alignment;
        Flags = flags;
    constexpr HeapDescription(const ResourceAllocationInfo& resourceAllocationInfo, HeapProperties properties, HeapFlags HeapFlags.None)
    SizeInBytes = resourceAllocationInfo.SizeInBytes;
        Properties = properties;
        Alignment = resourceAllocationInfo.Alignment;
        Flags = flags;
    constexpr HeapDescription(const ResourceAllocationInfo& resourceAllocationInfo, HeapType type, HeapFlags HeapFlags.None)
    SizeInBytes = resourceAllocationInfo.SizeInBytes;
        Properties = new HeapProperties(type);
        Alignment = resourceAllocationInfo.Alignment;
        Flags = flags;
    constexpr HeapDescription(const ResourceAllocationInfo& resourceAllocationInfo, CpuPageProperty cpuPageProperty, MemoryPool memoryPoolPreference, HeapFlags HeapFlags.None)
    SizeInBytes = resourceAllocationInfo.SizeInBytes;
        Properties = new HeapProperties(cpuPageProperty, memoryPoolPreference);
        Alignment = resourceAllocationInfo.Alignment;
        Flags = flags;
    bool IsCpuAccessible{> Properties.IsCpuAccessible};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_HEAPDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_HEAPDESCRIPTION_H
