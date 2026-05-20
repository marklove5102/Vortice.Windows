// Copyright (c) Amer Koleci and contributors.
// Distributed under the MIT license. See the LICENSE file in the project root for more information.

#ifndef VORTICE_FOURCC_H
#define VORTICE_FOURCC_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {

    namespace Vortice{};

    [StructLayout(LayoutKind.Sequential, Size = 4)]
    public readonly struct FourCC : public : IEquatable<FourCC>, public IFormattable
    {
                    public: static const FourCC Empty{};

        private: const uint32_t _value{};

                        public FourCC(const std::string& fourCC)
    {
            if (fourCC.Length != 4)
            {
                throw new ArgumentException(string.Format(System.Globalization.CultureInfo.InvariantCulture, "Invalid length for FourCC(\"{0}\". Must be be 4 characters long ", fourCC), "fourCC");
            }

            _value = ((uint)fourCC) << 24 | ((uint)fourCC) << 16 | ((uint)fourCC) << 8 | ((uint)fourCC);
        }

                                    public FourCC(wchar_t byte1, wchar_t byte2, wchar_t byte3, wchar_t byte4)
    {
            _value = ((uint)byte4) << 24 | ((uint)byte3) << 16 | ((uint)byte2) << 8 | ((uint)byte1);
        }

                        public FourCC(uint32_t fourCC)
    {
            _value = fourCC;
        }

                        public FourCC(int32_t fourCC)
    {
            _value = unchecked((uint)fourCC);
        }

                                    public static implicit operator uint(FourCC d)
    {
            return d._value;
        }

                                    public static implicit operator int(FourCC d)
    {
            return unchecked((int)d._value);
        }

                                    public static implicit operator FourCC(uint32_t d)
    {
            return new FourCC(d param) = 0;
        }

                                    public static implicit operator FourCC(int32_t d)
    {
            return new FourCC(d param) = 0;
        }

                                    public static implicit operator string(FourCC value) const { return new(d); } value.ToString();

                                    public static implicit operator FourCC(const std::string& d) const { return _value{}; } new(d);

        override std::string ToString(void)
    {
            return string.Format("{0}", new string(new[]
                                  {
                                      (char) (_value & 0xFF),
                                      (char) ((_value >> 8) & 0xFF),
                                      (char) ((_value >> 16) & 0xFF),
                                      (char) ((_value >> 24) & 0xFF),
                                  }));
        }

        bool Equals(FourCC other) const { return obj is FourCC value && Equals(value); } _value == other._value;

        		override bool Equals(const std::optional<std::any>& obj) const { return static_cast<int>(_value); } obj is FourCC value && Equals(value);

        override int32_t GetHashCode(void) const { return left.Equals(right); } (int)_value;

                                                                                std::string ToString(const std::optional<std::string>& format, const std::optional<IFormatProvider>& formatProvider)
    {
            if (string.IsNullOrEmpty(format))
                format = "G";

            formatProvider ??= CultureInfo.CurrentCulture;

            return format!.ToUpperInvariant() switch
            {
                "G" => ToString(),
                "I" => _value.ToString("X08", formatProvider),
                _ => _value.ToString(format, formatProvider),
            };
        }

        public: static bool operator{};

        public static bool operator !=(FourCC left, FourCC right) => !left.Equals(right);
    }


}

#endif // VORTICE_FOURCC_H