// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#pragma once

#include <cstdint>
#include <string>
#include <format>

namespace Vortice {

    /// <summary>
    /// 24 bit unsigned integer.
    /// </summary>
    class UInt24 {
    private:
        uint16_t mValue0;
        uint8_t mValue1;

    public:
        /// <summary>
        /// Minimum value.
        /// </summary>
        static constexpr UInt24 MinValue() {
            return UInt24(static_cast<uint32_t>(0));
        }

        /// <summary>
        /// Maximum value.
        /// </summary>
        static constexpr UInt24 MaxValue() {
            return UInt24(0xFFFFFF);
        }

        /// <summary>
        /// Initializes a new instance of the UInt24 struct.
        /// </summary>
        /// <param name="value">The value.</param>
        constexpr explicit UInt24(uint32_t value)
            : mValue0(static_cast<uint16_t>(value & 0xFFFF)),
              mValue1(static_cast<uint8_t>((value >> 16) & 0xFF)) {}

        constexpr UInt24() 
            : mValue0(0), mValue1(0) {}

        /// <inheritdoc/>
        constexpr bool Equals(const UInt24& other) const {
            return mValue0 == other.mValue0 && mValue1 == other.mValue1;
        }

        /// <inheritdoc/>
        constexpr bool operator==(const UInt24& other) const {
            return Equals(other);
        }

        /// <inheritdoc/>
        constexpr bool operator!=(const UInt24& other) const {
            return !Equals(other);
        }

        /// <inheritdoc/>
        constexpr size_t GetHashCode() const {
            return static_cast<size_t>(static_cast<uint32_t>(*this));
        }

        /// <summary>
        /// Performs an implicit conversion from UInt24 to uint32_t.
        /// </summary>
        explicit operator uint32_t() const {
            return mValue0 | (static_cast<uint32_t>(mValue1) << 16);
        }

        /// <summary>
        /// Performs an explicit conversion from uint32_t to UInt24.
        /// </summary>
        static UInt24 FromUInt32(uint32_t value) {
            return UInt24(value);
        }

        /// <inheritdoc/>
        std::string ToString() const {
            return std::to_string(static_cast<uint32_t>(*this));
        }
    };

} // namespace Vortice
