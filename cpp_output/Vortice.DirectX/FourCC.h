// Copyright (c) Amer Koleci and contributors.
// Distributed under the MIT license. See the LICENSE file in the project root for more information.

#pragma once

#include <cstdint>
#include <string>
#include <stdexcept>
#include <format>

namespace Vortice {

    /// <summary>
    /// A FourCC descriptor.
    /// </summary>
    class FourCC {
    private:
        uint32_t _value;

    public:
        /// <summary>
        /// Empty FourCC.
        /// </summary>
        static constexpr FourCC Empty() {
            return FourCC(static_cast<uint32_t>(0));
        }

        /// <summary>
        /// Initializes a new instance of the FourCC struct.
        /// </summary>
        /// <param name="fourCC">The fourCC value as a string.</param>
        explicit FourCC(const std::string& fourCC) {
            if (fourCC.length() != 4) {
                throw std::invalid_argument("Invalid length for FourCC. Must be 4 characters long");
            }

            _value = (static_cast<uint32_t>(static_cast<unsigned char>(fourCC[3])) << 24) |
                     (static_cast<uint32_t>(static_cast<unsigned char>(fourCC[2])) << 16) |
                     (static_cast<uint32_t>(static_cast<unsigned char>(fourCC[1])) << 8) |
                     (static_cast<uint32_t>(static_cast<unsigned char>(fourCC[0])));
        }

        /// <summary>
        /// Initializes a new instance of the FourCC struct.
        /// </summary>
        /// <param name="byte1">The byte1.</param>
        /// <param name="byte2">The byte2.</param>
        /// <param name="byte3">The byte3.</param>
        /// <param name="byte4">The byte4.</param>
        constexpr FourCC(char byte1, char byte2, char byte3, char byte4)
            : _value((static_cast<uint32_t>(static_cast<unsigned char>(byte4)) << 24) |
                     (static_cast<uint32_t>(static_cast<unsigned char>(byte3)) << 16) |
                     (static_cast<uint32_t>(static_cast<unsigned char>(byte2)) << 8) |
                     (static_cast<uint32_t>(static_cast<unsigned char>(byte1)))) {}

        /// <summary>
        /// Initializes a new instance of the FourCC struct.
        /// </summary>
        /// <param name="fourCC">The fourCC value as an uint.</param>
        constexpr explicit FourCC(uint32_t fourCC)
            : _value(fourCC) {}

        /// <summary>
        /// Initializes a new instance of the FourCC struct.
        /// </summary>
        /// <param name="fourCC">The fourCC value as an int.</param>
        constexpr explicit FourCC(int32_t fourCC)
            : _value(static_cast<uint32_t>(fourCC)) {}

        /// <summary>
        /// Gets the underlying uint32_t value.
        /// </summary>
        constexpr uint32_t GetValue() const {
            return _value;
        }

        /// <summary>
        /// Performs an implicit conversion from FourCC to int32_t.
        /// </summary>
        explicit operator int32_t() const {
            return static_cast<int32_t>(_value);
        }

        /// <summary>
        /// Performs an implicit conversion from FourCC to uint32_t.
        /// </summary>
        explicit operator uint32_t() const {
            return _value;
        }

        /// <summary>
        /// Performs an implicit conversion from FourCC to string.
        /// </summary>
        operator std::string() const {
            return ToString();
        }

        std::string ToString() const {
            return std::string({
                static_cast<char>(_value & 0xFF),
                static_cast<char>((_value >> 8) & 0xFF),
                static_cast<char>((_value >> 16) & 0xFF),
                static_cast<char>((_value >> 24) & 0xFF),
            });
        }

        bool Equals(const FourCC& other) const {
            return _value == other._value;
        }

        constexpr bool operator==(const FourCC& other) const {
            return Equals(other);
        }

        constexpr bool operator!=(const FourCC& other) const {
            return !Equals(other);
        }

        size_t GetHashCode() const {
            return static_cast<size_t>(_value);
        }

        /// <summary>
        /// Provides a custom string representation of the FourCC descriptor.
        /// </summary>
        /// <remarks>
        /// The general format "G" is equivalent to the parameterless ToString().
        /// The special format "I" returns a string representation which can be used 
        /// to construct a Media Foundation format GUID. It is equivalent to "X08".
        /// </remarks>
        /// <param name="format">The format descriptor, which can be "G" (empty
        /// or nullptr is equivalent to "G"), "I" or any valid standard
        /// number format.</param>
        std::string ToString(const char* format) const {
            if (format == nullptr || format[0] == '\0') {
                format = "G";
            }

            std::string fmt(format);
            // Convert to uppercase
            for (auto& c : fmt) {
                c = static_cast<char>(toupper(static_cast<unsigned char>(c)));
            }

            if (fmt == "G") {
                return ToString();
            } else if (fmt == "I") {
                return std::format("{:08X}", _value);
            } else {
                // For other formats, use standard formatting
                return std::format("{:" + fmt + "}", _value);
            }
        }
    };

} // namespace Vortice
