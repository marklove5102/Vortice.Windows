// Copyright (c) Amer Koleci and contributors.
// Distributed under the MIT license. See the LICENSE file in the project root for more information.

#pragma once

#include <cstdint>
#include <string>
#include <format>
#include <stdexcept>

namespace Vortice {

/**
 * @brief A FourCC descriptor.
 */
class FourCC {
private:
    uint32_t _value;

public:
    /**
     * @brief Empty FourCC.
     */
    static constexpr FourCC Empty() { return FourCC(0u); }

    /**
     * @brief Initializes a new instance of the FourCC class.
     * @param fourCC The fourCC value as a string.
     */
    explicit FourCC(const std::string& fourCC) {
        if (fourCC.length() != 4) {
            throw std::invalid_argument("Invalid length for FourCC(\"" + fourCC + "\"). Must be 4 characters long");
        }
        _value = (static_cast<uint32_t>(static_cast<unsigned char>(fourCC[3])) << 24) |
                 (static_cast<uint32_t>(static_cast<unsigned char>(fourCC[2])) << 16) |
                 (static_cast<uint32_t>(static_cast<unsigned char>(fourCC[1])) << 8) |
                 (static_cast<uint32_t>(static_cast<unsigned char>(fourCC[0])));
    }

    /**
     * @brief Initializes a new instance of the FourCC class.
     * @param byte1 The byte1.
     * @param byte2 The byte2.
     * @param byte3 The byte3.
     * @param byte4 The byte4.
     */
    constexpr FourCC(char byte1, char byte2, char byte3, char byte4) {
        _value = (static_cast<uint32_t>(static_cast<unsigned char>(byte4)) << 24) |
                 (static_cast<uint32_t>(static_cast<unsigned char>(byte3)) << 16) |
                 (static_cast<uint32_t>(static_cast<unsigned char>(byte2)) << 8) |
                 (static_cast<uint32_t>(static_cast<unsigned char>(byte1)));
    }

    /**
     * @brief Initializes a new instance of the FourCC class.
     * @param fourCC The fourCC value as an uint.
     */
    constexpr explicit FourCC(uint32_t fourCC) : _value(fourCC) {}

    /**
     * @brief Initializes a new instance of the FourCC class.
     * @param fourCC The fourCC value as an int.
     */
    constexpr explicit FourCC(int32_t fourCC) : _value(static_cast<uint32_t>(fourCC)) {}

    /**
     * @brief Conversion to uint32_t.
     */
    [[nodiscard]] constexpr operator uint32_t() const { return _value; }

    /**
     * @brief Conversion to int32_t.
     */
    [[nodiscard]] constexpr operator int32_t() const { return static_cast<int32_t>(_value); }

    /**
     * @brief Conversion to string.
     */
    [[nodiscard]] std::string ToString() const {
        return std::string{
            static_cast<char>(_value & 0xFF),
            static_cast<char>((_value >> 8) & 0xFF),
            static_cast<char>((_value >> 16) & 0xFF),
            static_cast<char>((_value >> 24) & 0xFF)
        };
    }

    /**
     * @brief Custom string representation of the FourCC descriptor.
     * @param format The format descriptor ("G", "I", or number format).
     * @return The requested string representation.
     */
    [[nodiscard]] std::string ToString(const std::string& format = "G") const {
        if (format.empty() || format == "G" || format == "g") {
            return ToString();
        } else if (format == "I" || format == "i") {
            char buffer[9];
            snprintf(buffer, sizeof(buffer), "%08X", _value);
            return std::string(buffer);
        } else {
            // For other formats, use standard formatting
            if (format == "X" || format == "x") {
                char buffer[9];
                snprintf(buffer, sizeof(buffer), "%X", _value);
                return std::string(buffer);
            }
            return std::to_string(_value);
        }
    }

    /**
     * @brief Equality comparison.
     */
    [[nodiscard]] constexpr bool Equals(const FourCC& other) const {
        return _value == other._value;
    }

    /**
     * @brief Hash code.
     */
    [[nodiscard]] size_t GetHashCode() const {
        return static_cast<size_t>(_value);
    }

    /**
     * @brief Equality operator.
     */
    [[nodiscard]] friend constexpr bool operator==(const FourCC& left, const FourCC& right) {
        return left.Equals(right);
    }

    /**
     * @brief Inequality operator.
     */
    [[nodiscard]] friend constexpr bool operator!=(const FourCC& left, const FourCC& right) {
        return !left.Equals(right);
    }
};

} // namespace Vortice
