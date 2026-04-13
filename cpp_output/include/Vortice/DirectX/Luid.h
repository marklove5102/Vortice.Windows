// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#pragma once

#include <cstdint>
#include <string>
#include <format>
#include <span>

namespace Vortice {

// Forward declaration
struct LARGE_INTEGER;

/**
 * @brief A locally unique identifier for a graphics device.
 */
struct Luid {
    /**
     * @brief The low bits of the luid.
     */
    uint32_t LowPart;

    /**
     * @brief The high bits of the luid.
     */
    int32_t HighPart;

    /**
     * @brief Default constructor.
     */
    constexpr Luid() : LowPart(0), HighPart(0) {}

    /**
     * @brief Constructor with parameters.
     * @param lowPart The low part.
     * @param highPart The high part.
     */
    constexpr Luid(uint32_t lowPart, int32_t highPart)
        : LowPart(lowPart), HighPart(highPart) {}

    /**
     * @brief Creates a Luid from a 64-bit integer.
     * @param int64 The 64-bit integer value.
     * @return The Luid instance.
     */
    [[nodiscard]] static Luid FromInt64(int64_t int64) {
        // Simulate LARGE_INTEGER behavior
        union {
            int64_t quad;
            struct {
                uint32_t low;
                int32_t high;
            } parts;
        } converter;
        converter.quad = int64;
        return Luid(converter.parts.low, converter.parts.high);
    }

    /**
     * @brief Equality comparison.
     * @param other The other Luid to compare.
     * @return true if equal.
     */
    [[nodiscard]] constexpr bool Equals(const Luid& other) const {
        return LowPart == other.LowPart && HighPart == other.HighPart;
    }

    /**
     * @brief Hash code.
     * @return Hash value.
     */
    [[nodiscard]] size_t GetHashCode() const {
        return std::hash<uint32_t>{}(LowPart) ^ (std::hash<int32_t>{}(HighPart) << 1);
    }

    /**
     * @brief String representation.
     * @return String representation of the combined 64-bit value.
     */
    [[nodiscard]] std::string ToString() const {
        int64_t combined = (static_cast<int64_t>(HighPart) << 32) | LowPart;
        return std::to_string(combined);
    }

    /**
     * @brief String representation with format.
     * @param format Format string.
     * @param formatProvider Format provider (ignored in C++).
     * @return Formatted string.
     */
    [[nodiscard]] std::string ToString(const std::string& format = "") const {
        int64_t combined = (static_cast<int64_t>(HighPart) << 32) | LowPart;
        if (format.empty() || format == "G" || format == "g") {
            return std::to_string(combined);
        } else if (format == "X" || format == "x") {
            char buffer[17];
            snprintf(buffer, sizeof(buffer), "%llX", static_cast<unsigned long long>(combined));
            return std::string(buffer);
        }
        return std::to_string(combined);
    }

    /**
     * @brief Try to format into a span.
     * @param destination Destination span.
     * @param charsWritten Number of characters written.
     * @param format Format string.
     * @param provider Format provider.
     * @return true if successful.
     */
    bool TryFormat(std::span<char> destination, size_t& charsWritten, 
                   const std::string& format = "", void* provider = nullptr) {
        std::string result = ToString(format);
        if (result.size() >= destination.size()) {
            charsWritten = 0;
            return false;
        }
        std::copy(result.begin(), result.end(), destination.begin());
        charsWritten = result.size();
        return true;
    }

    /**
     * @brief Equality operator.
     */
    [[nodiscard]] friend constexpr bool operator==(const Luid& a, const Luid& b) {
        return a.Equals(b);
    }

    /**
     * @brief Inequality operator.
     */
    [[nodiscard]] friend constexpr bool operator!=(const Luid& a, const Luid& b) {
        return !a.Equals(b);
    }

    /**
     * @brief Conversion to int64_t.
     */
    [[nodiscard]] explicit operator int64_t() const {
        return (static_cast<int64_t>(HighPart) << 32) | LowPart;
    }

    /**
     * @brief Conversion from int64_t.
     */
    [[nodiscard]] static Luid FromInt64Value(int64_t value) {
        return FromInt64(value);
    }
};

} // namespace Vortice
