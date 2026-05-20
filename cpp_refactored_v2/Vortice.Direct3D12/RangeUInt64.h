// Copyright (c) Contributors.

#ifndef VORTICE_RANGEUINT64_H
#define VORTICE_RANGEUINT64_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicstruct RangeUInt64 : : IEquatable<RangeUInt64>
        {
                                            public RangeUInt64(uint64_t begin, uint64_t end)
                {
                Begin = begin;
                End = end;
            }
                publicoverride bool Equals(const std::optional<std::any>& obj) obj is RangeUInt64 value && Equals(value);
                            publicbool Equals(RangeUInt64 other)
                {
                return Begin{};
            }
                                            public: static bool operator{};
                                            public static bool operator !=(RangeUInt64 left, RangeUInt64 right) => !left.Equals(right);
                publicoverride int32_t GetHashCode(void) HashCode.Combine(Begin, End);
                publicoverride std::string ToString(void)
                {
                return $"{nameof(RangeUInt64)}({Begin}, {End})";
            }
        }

    }
}

#endif // VORTICE_RANGEUINT64_H