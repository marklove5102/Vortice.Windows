// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#pragma once

#include <cstdint>
#include <compare>

namespace Vortice {

/**
 * @brief 24 bit unsigned integer.
 */
class UInt24 {
private:
    uint16_t mValue0;
    uint8_t mValue1;

public:
    /**
     * @brief Minimum value.
     */
    static constexpr UInt24 MinValue() { return UInt24(0u); }

    /**
     * @brief Maximum value.
     */
    static constexpr UInt24 MaxValue() { return UInt24(0xFFFFFFu); }

    /**
     * @brief Default constructor.
     */
    constexpr UInt24() : mValue0(0), mValue1(0) {}

    /**
     * @brief Constructor from uint32_t.
     * @param value The value to initialize from.
     */
    constexpr explicit UInt24(uint32_t value) 
        : mValue0(static_cast<uint16_t>(value & 0xFFFF)),
          mValue1(static_cast<uint8_t>((value >> 16) & 0xFF)) {}

    /**
     * @brief Equality comparison.
     * @param other The other UInt24 to compare.
     * @return true if equal.
     */
    [[nodiscard]] constexpr bool Equals(const UInt24& other) const {
        return mValue0 == other.mValue0 && mValue1 == other.mValue1;
    }

    /**
     * @brief Hash code.
     * @return Hash value.
     */
    [[nodiscard]] size_t GetHashCode() const {
        return static_cast<size_t>(static_cast<uint32_t>(*this));
    }

    /**
     * @brief Conversion to uint32_t.
     */
    [[nodiscard]] constexpr operator uint32_t() const {
        return static_cast<uint32_t>(mValue0) | (static_cast<uint32_t>(mValue1) << 16);
    }

    /**
     * @brief Explicit conversion from uint32_t.
     * @param x The value to convert.
     * @return UInt24 instance.
     */
    [[nodiscard]] static constexpr UInt24 FromUint32(uint32_t x) {
        return UInt24(x);
    }

    /**
     * @brief Equality operator.
     */
    [[nodiscard]] friend constexpr bool operator==(const UInt24& x, const UInt24& y) {
        return x.Equals(y);
    }

    /**
     * @brief Inequality operator.
     */
    [[nodiscard]] friend constexpr bool operator!=(const UInt24& x, const UInt24& y) {
        return !x.Equals(y);
    }

    /**
     * @brief String representation.
     * @return String representation of the value.
     */
    [[nodiscard]] std::string ToString() const {
        return std::to_string(static_cast<uint32_t>(*this));
    }
};

} // namespace Vortice
