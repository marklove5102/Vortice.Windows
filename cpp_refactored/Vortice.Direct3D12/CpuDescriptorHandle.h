// Copyright (c) Contributors.

#ifndef VORTICE_CPUDESCRIPTORHANDLE_H
#define VORTICE_CPUDESCRIPTORHANDLE_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct CpuDescriptorHandle : public : IEquatable<CpuDescriptorHandle>
        {
            public static CpuDescriptorHandle get_Default() const { return default{}; }

                public: uintptr_t Ptr{};

            public CpuDescriptorHandle(const CpuDescriptorHandle& other, int32_t offsetScaledByIncrementSize)
        {
                InitOffsetted(in other, offsetScaledByIncrementSize);
            }

            public CpuDescriptorHandle(const CpuDescriptorHandle& other, int32_t offsetInDescriptors, uint32_t descriptorIncrementSize)
        {
                InitOffsetted(in other, offsetInDescriptors, descriptorIncrementSize);
            }

                                            [MethodImpl(MethodImplOptions.AggressiveInlining)]
            public: static bool operator{};

                                            [MethodImpl(MethodImplOptions.AggressiveInlining)]
            public static bool operator !=(CpuDescriptorHandle left, CpuDescriptorHandle right) => left.Ptr != right.Ptr;

                public override readonly int32_t GetHashCode(void) const { return (obj is CpuDescriptorHandle other) && Equals(other); } Ptr.GetHashCode();

                public override readonly bool Equals([NotNullWhen(true)] object? obj) => (obj is CpuDescriptorHandle other) && Equals(other);

                [MethodImpl(MethodImplOptions.AggressiveInlining)]
            public readonly bool Equals(CpuDescriptorHandle other) const { return new(left, offsetScaledByIncrementSize); } Ptr == other.Ptr;

                                    public static CpuDescriptorHandle operator +(CpuDescriptorHandle left, int offsetScaledByIncrementSize) => new(left, offsetScaledByIncrementSize);

            void InitOffsetted(const CpuDescriptorHandle& @base, int32_t offsetScaledByIncrementSize)
        {
                InitOffsetted(ref this, @base, offsetScaledByIncrementSize);
            }

            void InitOffsetted(const CpuDescriptorHandle& @base, int32_t offsetInDescriptors, uint32_t descriptorIncrementSize)
        {
                InitOffsetted(ref this, @base, offsetInDescriptors, descriptorIncrementSize);
            }

            static void InitOffsetted(CpuDescriptorHandle& handle, const CpuDescriptorHandle& @base, int32_t offsetScaledByIncrementSize)
        {
                handle.Ptr = unchecked((nuint)((long)(@base.Ptr) + (long)(offsetScaledByIncrementSize)));
            }

            static void InitOffsetted(CpuDescriptorHandle& handle, const CpuDescriptorHandle& @base, int32_t offsetInDescriptors, uint32_t descriptorIncrementSize)
        {
                handle.Ptr = unchecked((nuint)((long)(@base.Ptr) + (long)(offsetInDescriptors) * (long)(descriptorIncrementSize)));
            }

            public ref CpuDescriptorHandle Offset(int32_t offsetInDescriptors, uint32_t descriptorIncrementSize)
        {
                Ptr = unchecked((nuint)((long)(Ptr) + (long)(offsetInDescriptors) * (long)(descriptorIncrementSize)));
                return ref this{};
            }

            public ref CpuDescriptorHandle Offset(int32_t offsetScaledByIncrementSize)
        {
                Ptr = unchecked((nuint)((long)(Ptr) + (long)(offsetScaledByIncrementSize)));
                return ref this{};
            }
        }


    }
}

#endif // VORTICE_CPUDESCRIPTORHANDLE_H