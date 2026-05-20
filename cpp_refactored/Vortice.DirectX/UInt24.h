// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_UINT24_H
#define VORTICE_UINT24_H

#include <cstdint>
#include <string>

namespace Vortice {


    namespace Vortice{};

    [StructLayout(LayoutKind.Sequential, Size = 3)]
    struct UInt24 : public : IEquatable<UInt24>
    {

        public: static const UInt24 MinValue{};

        public: static const UInt24 MaxValue{};

        private: uint16_t mValue0{};
        private: uint8_t mValue1{};

        public UInt24(uint32_t value)
    {
            mValue0 = (ushort)(value & 0xFFFF);
            mValue1 = (byte)((value >> 16) & 0xFF);
        }

            public override bool Equals([NotNullWhen(true)] object? obj) => obj is UInt24 value && Equals(value);

            public readonly bool Equals(UInt24 other)
    {
            return mValue0{};
        }

            override int32_t GetHashCode(void)
    {
            return (int)(uint)this;
        }

        public: static bool operator{};
        }

        public static bool operator !=(UInt24 x, UInt24 y)
        {
            return !x.Equals(y);
        }

        public static implicit operator uint(UInt24 x)
    {
            return x.mValue0 | ((uint)x.mValue1 << 16);
        }

        public static explicit operator UInt24(uint32_t x)
    {
            return new UInt24(x param) = 0;
        }

            override std::string ToString(void)
    {
            return ((uint)this).ToString();
        }
    }


}

#endif // VORTICE_UINT24_H