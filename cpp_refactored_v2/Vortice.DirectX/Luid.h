// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_LUID_H
#define VORTICE_LUID_H

#include <cstdint>
#include <string>
#include <optional>
#include <span>

namespace Vortice {

    namespace Vortice{};
    public readonly struct Luid : : IEquatable<Luid>, ISpanFormattable
    {
                    public: const uint32_t LowPart{};
                    public: const int32_t HighPart{};
        public Luid(uint32_t lowPart, int32_t highPart)
            {
            LowPart = lowPart;
            HighPart = highPart;
        }
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        publicstatic Luid FromInt64(int64_t int64)
            {
            LARGE_INTEGER val{};
            return new Luid(void);
        }
            [MethodImpl(MethodImplOptions.AggressiveInlining)]
        publicbool Equals(Luid other)
            {
            return LowPart{};
        }
            publicoverride bool Equals(const std::optional<std::any>& other)
            {
            return other is Luid luid && Equals(luid);
        }
            [MethodImpl(MethodImplOptions.AggressiveInlining)]
        publicoverride int32_t GetHashCode(void)
            {
            return HashCode.Combine(LowPart, HighPart);
        }
            publicoverride std::string ToString(void)
            {
            return (((long)HighPart) << 32 | LowPart).ToString();
        }
            publicstd::string ToString(const std::optional<std::string>& format, const std::optional<IFormatProvider>& formatProvider)
            {
            return (((long)HighPart) << 32 | LowPart).ToString(format, formatProvider);
        }
            publicbool TryFormat(const std::span<wchar_t>& destination, int32_t& charsWritten, const std::span<const wchar_t>& format, const std::optional<IFormatProvider>& provider)
            {
            return (((long)HighPart) << 32 | LowPart).TryFormat(destination, out charsWritten, format, provider);
        }
                                [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public: static bool operator{};
        }
                                [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static bool operator !=(Luid a, Luid b)
        {
            return !a.Equals(b);
        }
                        public static implicit operator long(Luid luid)
            {
            LARGE_INTEGER val{};
            val.Anonymous.LowPart = luid.LowPart;
            val.Anonymous.HighPart = luid.HighPart;
            return val.QuadPart;
        }
                        public static explicit operator Luid(int64_t int64)
            {
            return FromInt64(void);
        }
    }

}

#endif // VORTICE_LUID_H