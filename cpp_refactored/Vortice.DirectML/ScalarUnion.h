// Copyright (c) Contributors.

#ifndef VORTICE_SCALARUNION_H
#define VORTICE_SCALARUNION_H

#include <cstdint>
#include <vector>
#include <cstring>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectML;

        [StructLayout(LayoutKind.Explicit)]
        struct ScalarUnion
        {
                [FieldOffset(0)]
            public fixed uint8_t Bytes{};

                [FieldOffset(0)]
            public: int8_t Int8{};

                [FieldOffset(0)]
            public: uint8_t UInt8{};

                [FieldOffset(0)]
            public: int16_t Int16{};

                [FieldOffset(0)]
            public: uint16_t UInt16{};

                [FieldOffset(0)]
            public: int32_t Int32{};

                [FieldOffset(0)]
            public: uint32_t UInt32{};

                [FieldOffset(0)]
            public: int64_t Int64{};

                [FieldOffset(0)]
            public: uint64_t UInt64{};

                [FieldOffset(0)]
            public: float Float32{};

                [FieldOffset(0)]
            public: double Float64{};

            public static implicit operator ScalarUnion(const std::vector<uint8_t>& value)
        {
                int32_t length{};
                var union{};
                for (int32_t i{}; i < length; i++)
                {
                    union.Bytes= value;
                }
                return union{};
            }

            public static implicit operator ScalarUnion(int8_t value) const { return new(){ UInt8 = value }; } new(){ Int8 = value };

            public static implicit operator ScalarUnion(uint8_t value) const { return new(){ Int16 = value }; } new(){ UInt8 = value };

            public static implicit operator ScalarUnion(int16_t value) const { return new(){ UInt16 = value }; } new(){ Int16 = value };

            public static implicit operator ScalarUnion(uint16_t value) const { return new(){ Int32 = value }; } new(){ UInt16 = value };

            public static implicit operator ScalarUnion(int32_t value) const { return new(){ UInt32 = value }; } new(){ Int32 = value };

            public static implicit operator ScalarUnion(uint32_t value) const { return new(){ Int64 = value }; } new(){ UInt32 = value };

            public static implicit operator ScalarUnion(int64_t value) const { return new(){ UInt64 = value }; } new(){ Int64 = value };

            public static implicit operator ScalarUnion(uint64_t value) const { return new(){ Float32 = value }; } new(){ UInt64 = value };

            public static implicit operator ScalarUnion(float value) const { return new(){ Float64 = value }; } new(){ Float32 = value };

            public static implicit operator ScalarUnion(double value)
        { new(){ Float64 = value };
        }


    }
}

#endif // VORTICE_SCALARUNION_H