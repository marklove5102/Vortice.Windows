// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_HEAPPROPERTIES_H
#define VORTICE_DIRECT3D12_HEAPPROPERTIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_HEAPPROPERTIES_H
#define VORTICE_VORTICE_HEAPPROPERTIES_H

#include <cstdint>

namespace Vortice {

struct HeapProperties
{
public:
    constexpr HeapProperties(HeapType type, CpuPageProperty cpuPageProperty, MemoryPool memoryPoolPreference, uint32_t 1, uint32_t 1)
    Type = type;
        CPUPageProperty = cpuPageProperty;
        MemoryPoolPreference = memoryPoolPreference;
        CreationNodeMask = creationNodeMask;
        VisibleNodeMask = visibleNodeMask;
    constexpr HeapProperties(CpuPageProperty cpuPageProperty, MemoryPool memoryPoolPreference, uint32_t 1, uint32_t 1)
    Type = HeapType.Custom;
        CPUPageProperty = cpuPageProperty;
        MemoryPoolPreference = memoryPoolPreference;
        CreationNodeMask = creationNodeMask;
        VisibleNodeMask = visibleNodeMask;
    constexpr HeapProperties(HeapType type, uint32_t 1, uint32_t 1)
    Type = type;
        CPUPageProperty = CpuPageProperty.Unknown;
        MemoryPoolPreference = MemoryPool.Unknown;
        CreationNodeMask = creationNodeMask;
        VisibleNodeMask = visibleNodeMask;
    static const HeapProperties DefaultHeapProperties{new(HeapType.Default)};
    static const HeapProperties UploadHeapProperties{new(HeapType.Upload)};
    static const HeapProperties ReadbackHeapProperties{new(HeapType.Readback)};

    bool get_IsCpuAccessible() const { return Type == HeapType.Upload
                || Type == HeapType.Readback
                || (Type == HeapType.Custom
                    && (CPUPageProperty == CpuPageProperty.WriteCombine || CPUPageProperty == CpuPageProperty.WriteBack)); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_HEAPPROPERTIES_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WITH_H
#define VORTICE_VORTICE_WITH_H

#include <cstdint>

namespace Vortice {

struct with
{
public:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_WITH_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_HEAPPROPERTIES_H
