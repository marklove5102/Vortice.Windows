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

        struct RangeUInt64 : public : IEquatable<RangeUInt64>
        {
                                            public RangeUInt64(uint64_t begin, uint64_t end)
        {
                Begin = begin;
                End = end;
            }

                override bool Equals(const std::optional<std::any>& obj) const { return left.Equals(right); } obj is RangeUInt64 value && Equals(value);

                            bool Equals(RangeUInt64 other)
        {
                return Begin{};
            }

                                            public: static bool operator{};

                                            public static bool operator !=(RangeUInt64 left, RangeUInt64 right) => !left.Equals(right);

                override int32_t GetHashCode(void)
        { HashCode.Combine(Begin, End);

                override std::string ToString(void)
        {
                return $"{nameof(RangeUInt64)}({Begin}, {End})";
            }
        }


    }
}

#endif // VORTICE_RANGEUINT64_H