// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_CPUDESCRIPTORHANDLE_H
#define VORTICE_DIRECT3D12_CPUDESCRIPTORHANDLE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>
#include <windows.h>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CPUDESCRIPTORHANDLE_H
#define VORTICE_VORTICE_CPUDESCRIPTORHANDLE_H

#include <cstdint>

namespace Vortice {

struct CpuDescriptorHandle : public IEquatable<CpuDescriptorHandle>
{
public:
    constexpr CpuDescriptorHandle(const CpuDescriptorHandle& other, int32_t offsetScaledByIncrementSize)
    InitOffsetted(in other, offsetScaledByIncrementSize);
    constexpr CpuDescriptorHandle(const CpuDescriptorHandle& other, int32_t offsetInDescriptors, uint32_t descriptorIncrementSize)
    InitOffsetted(in other, offsetInDescriptors, descriptorIncrementSize);
    static CpuDescriptorHandle Default{> default};
    uintptr_t Ptr;
    static bool operator{=(CpuDescriptorHandle left, CpuDescriptorHandle right) => left.Ptr == right.Ptr};

    void InitOffsetted() { InitOffsetted(ref this, @base, offsetScaledByIncrementSize); }

    void InitOffsetted() { InitOffsetted(ref this, @base, offsetInDescriptors, descriptorIncrementSize); }

    static void InitOffsetted() { handle.Ptr = unchecked((nuint)((long)(@base.Ptr) + (long)(offsetScaledByIncrementSize))); }

    static void InitOffsetted() { handle.Ptr = unchecked((nuint)((long)(@base.Ptr) + (long)(offsetInDescriptors) * (long)(descriptorIncrementSize))); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_CPUDESCRIPTORHANDLE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_CPUDESCRIPTORHANDLE_H
