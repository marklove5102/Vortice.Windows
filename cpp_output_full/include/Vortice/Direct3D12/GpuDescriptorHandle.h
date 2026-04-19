// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_GPUDESCRIPTORHANDLE_H
#define VORTICE_DIRECT3D12_GPUDESCRIPTORHANDLE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GPUDESCRIPTORHANDLE_H
#define VORTICE_VORTICE_GPUDESCRIPTORHANDLE_H

#include <cstdint>

namespace Vortice {

struct GpuDescriptorHandle : public IEquatable<GpuDescriptorHandle>
{
public:
    constexpr GpuDescriptorHandle(const GpuDescriptorHandle& other, int32_t offsetScaledByIncrementSize)
    InitOffsetted(in other, offsetScaledByIncrementSize);
    constexpr GpuDescriptorHandle(const GpuDescriptorHandle& other, int32_t offsetInDescriptors, uint32_t descriptorIncrementSize)
    InitOffsetted(in other, offsetInDescriptors, descriptorIncrementSize);
    static GpuDescriptorHandle Default{> default};
    static bool operator{=(GpuDescriptorHandle left, GpuDescriptorHandle right)
        => left.Ptr == right.Ptr};

    void InitOffsetted() { InitOffsetted(ref this, @base, offsetScaledByIncrementSize); }

    void InitOffsetted() { InitOffsetted(ref this, @base, offsetInDescriptors, descriptorIncrementSize); }

    static void InitOffsetted() { handle.Ptr = unchecked((ulong)((long)(@base.Ptr) + (long)(offsetScaledByIncrementSize))); }

    static void InitOffsetted() { handle.Ptr = unchecked((ulong)((long)(@base.Ptr) + (long)(offsetInDescriptors) * (long)(descriptorIncrementSize))); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_GPUDESCRIPTORHANDLE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_GPUDESCRIPTORHANDLE_H
