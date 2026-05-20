// Copyright (c) Contributors.

#ifndef VORTICE_GPUDESCRIPTORHANDLE_H
#define VORTICE_GPUDESCRIPTORHANDLE_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicstruct GpuDescriptorHandle : : IEquatable<GpuDescriptorHandle>
        {
            public static GpuDescriptorHandle get_Default() const { return {}; }
            public GpuDescriptorHandle(const GpuDescriptorHandle& other, int32_t offsetScaledByIncrementSize)
                {
                InitOffsetted(in other, offsetScaledByIncrementSize);
            }
            public GpuDescriptorHandle(const GpuDescriptorHandle& other, int32_t offsetInDescriptors, uint32_t descriptorIncrementSize)
                {
                InitOffsetted(in other, offsetInDescriptors, descriptorIncrementSize);
            }
            public: static bool operator{};
            public static bool operator !=(GpuDescriptorHandle left, GpuDescriptorHandle right)
                => left.Ptr != right.Ptr;
                public override bool Equals([NotNullWhen(true)] object? obj) => (obj is GpuDescriptorHandle other) && Equals(other);
                public readonly bool Equals(GpuDescriptorHandle other) this.Ptr == other.Ptr;
                public override readonly int32_t GetHashCode(void) Ptr.GetHashCode();
                                    public static GpuDescriptorHandle operator +(GpuDescriptorHandle left, int offsetScaledByIncrementSize) => new(left, offsetScaledByIncrementSize);
            publicvoid InitOffsetted(const GpuDescriptorHandle& @base, int32_t offsetScaledByIncrementSize)
                {
                InitOffsetted(ref this, @base, offsetScaledByIncrementSize);
            }
            publicvoid InitOffsetted(const GpuDescriptorHandle& @base, int32_t offsetInDescriptors, uint32_t descriptorIncrementSize)
                {
                InitOffsetted(ref this, @base, offsetInDescriptors, descriptorIncrementSize);
            }
            publicstatic void InitOffsetted(GpuDescriptorHandle& handle, const GpuDescriptorHandle& @base, int32_t offsetScaledByIncrementSize)
                {
                handle.Ptr = unchecked((ulong)((long)(@base.Ptr) + (long)(offsetScaledByIncrementSize)));
            }
            publicstatic void InitOffsetted(GpuDescriptorHandle& handle, const GpuDescriptorHandle& @base, int32_t offsetInDescriptors, uint32_t descriptorIncrementSize)
                {
                handle.Ptr = unchecked((ulong)((long)(@base.Ptr) + (long)(offsetInDescriptors) * (long)(descriptorIncrementSize)));
            }
            public ref GpuDescriptorHandle Offset(int32_t offsetInDescriptors, uint32_t descriptorIncrementSize)
                {
                Ptr = unchecked((ulong)((long)(Ptr) + (long)(offsetInDescriptors) * (long)(descriptorIncrementSize)));
                return ref this{};
            }
            public ref GpuDescriptorHandle Offset(int32_t offsetScaledByIncrementSize)
                {
                Ptr = unchecked((ulong)((long)(Ptr) + (long)(offsetScaledByIncrementSize)));
                return ref this{};
            }
        }

    }
}

#endif // VORTICE_GPUDESCRIPTORHANDLE_H