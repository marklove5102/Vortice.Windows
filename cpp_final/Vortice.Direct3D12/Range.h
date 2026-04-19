// Copyright (c) Contributors.

#ifndef VORTICE_RANGE_H
#define VORTICE_RANGE_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct Range : public : IEquatable<Range>
        {
                                            public Range(uintptr_t begin, uintptr_t end)
        {
                Begin = begin;
                End = end;
            }

                override bool Equals(const std::optional<std::any>& obj) const { return left.Equals(right); } obj is Range value && Equals(value);

                            bool Equals(Range other)
        {
                return Begin.Equals(other.Begin)
                    && End.Equals(other.End);
            }

                                            public: static bool operator{};

                                            public static bool operator !=(Range left, Range right) => !left.Equals(right);

                override int32_t GetHashCode(void)
        { HashCode.Combine(Begin, End);

                override std::string ToString(void)
        {
                return $"{nameof(Range)}({Begin}, {End})";
            }
        }


    }
}

#endif // VORTICE_RANGE_H