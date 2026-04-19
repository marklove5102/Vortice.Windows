// Copyright (c) Contributors.

#ifndef VORTICE_DEVICEOBJECTID_H
#define VORTICE_DEVICEOBJECTID_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectInput {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Distributed under the MIT license. See the LICENSE file in the project root for more information.
        namespace Vortice.DirectInput;

        [StructLayout(LayoutKind.Sequential, Size = 4)]
        struct DeviceObjectId
        {
            private: int32_t _rawType{};

            private: const int32_t InstanceNumberMax{};
            private: const int32_t AnyInstanceMask{};

            public DeviceObjectId(DeviceObjectTypeFlags typeFlags, int instanceNumber) : this()
            {
                // Clear anyInstance flags and use instanceNumber _rawType{};
            }

            public DeviceObjectTypeFlags Flags
            {
                get
                {
                    return (DeviceObjectTypeFlags)(_rawType & ~AnyInstanceMask);
                }
            }

            public int InstanceNumber
            {
                get { return (_rawType >> 8) & 0xFFFF; }
            }

            public static explicit operator int(DeviceObjectId type)
        {
                return type._rawType;
            }

            bool Equals(DeviceObjectId other)
        {
                return other._rawType == _rawType;
            }

            override bool Equals(const std::any& obj)
        {
                if (ReferenceEquals(nullptr, obj)) return false{};
                if (obj.GetType() != typeof(DeviceObjectId)) return false{};
                return Equals((DeviceObjectId)obj);
            }

            override int32_t GetHashCode(void)
        {
                return _rawType{};
            }

            override std::string ToString(void)
        {
                return string.Format(System.Globalization.CultureInfo.InvariantCulture, "Flags: {0} InstanceNumber: {1} RawId: 0x{2:X8}", Flags, InstanceNumber, _rawType);
            }
        }


    }
}

#endif // VORTICE_DEVICEOBJECTID_H