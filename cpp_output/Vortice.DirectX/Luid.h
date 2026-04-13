// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#pragma once

#include <cstdint>
#include <cstring>
#include <functional>
#include <string>
#include <format>

namespace Vortice {

    /// <summary>
    /// A locally unique identifier for a graphics device.
    /// </summary>
    struct Luid {
        /// <summary>
        /// The low bits of the luid.
        /// </summary>
        uint32_t LowPart;

        /// <summary>
        /// The high bits of the luid.
        /// </summary>
        int32_t HighPart;

        constexpr Luid() : LowPart(0), HighPart(0) {}

        constexpr Luid(uint32_t lowPart, int32_t highPart)
            : LowPart(lowPart), HighPart(highPart) {}

        /// <summary>
        /// Creates a Luid from a 64-bit integer.
        /// </summary>
        static constexpr Luid FromInt64(int64_t int64) {
            Luid luid;
            luid.LowPart = static_cast<uint32_t>(int64 & 0xFFFFFFFF);
            luid.HighPart = static_cast<int32_t>(int64 >> 32);
            return luid;
        }

        /// <inheritdoc/>
        constexpr bool Equals(const Luid& other) const {
            return LowPart == other.LowPart && HighPart == other.HighPart;
        }

        /// <inheritdoc/>
        constexpr bool operator==(const Luid& other) const {
            return Equals(other);
        }

        /// <inheritdoc/>
        constexpr bool operator!=(const Luid& other) const {
            return !Equals(other);
        }

        /// <inheritdoc/>
        constexpr size_t GetHashCode() const {
            // Simple hash combination
            return std::hash<uint32_t>{}(LowPart) ^ (std::hash<int32_t>{}(HighPart) << 1);
        }

        /// <inheritdoc/>
        std::string ToString() const {
            int64_t value = (static_cast<int64_t>(HighPart) << 32) | LowPart;
            return std::to_string(value);
        }

        /// <inheritdoc/>
        std::string ToString(const char* format) const {
            // Note: C++ format specifiers work differently than C#
            // This is a simplified implementation
            int64_t value = (static_cast<int64_t>(HighPart) << 32) | LowPart;
            return std::to_string(value);
        }

        /// <summary>
        /// Performs an implicit conversion from Luid to int64_t.
        /// </summary>
        explicit operator int64_t() const {
            return (static_cast<int64_t>(HighPart) << 32) | LowPart;
        }

        /// <summary>
        /// Performs an explicit conversion from int64_t to Luid.
        /// </summary>
        static Luid FromInt64Explicit(int64_t int64) {
            return FromInt64(int64);
        }
    };

} // namespace Vortice
