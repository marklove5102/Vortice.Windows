// Copyright (c) Contributors.

#ifndef VORTICE_ATTRIBUTES_H
#define VORTICE_ATTRIBUTES_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectInput {

        ﻿// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
        // 
        // Permission is hereby granted, free of charge, to any person obtaining a copy
        // of this software and associated documentation files (the "Software"), to deal
        // in the Software without restriction, including without limitation the rights
        // to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
        // copies of the Software, and to permit persons to whom the Software is
        // furnished to do so, subject to the following conditions:
        // 
        // The above copyright notice and this permission notice shall be included in
        // all copies or substantial portions of the Software.
        // 
        // THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
        // IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
        // FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
        // AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
        // LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
        // OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
        // THE SOFTWARE.

        namespace Vortice.DirectInput;

        [AttributeUsage(AttributeTargets.Struct | AttributeTargets.Class)]
        class DataFormatAttribute : public : Attribute
        {
            public DataFormatAttribute(DataFormatFlag flags)
        {
                Flags = flags;
            }

                        public DataFormatFlag Flags { get; }
        }

        [AttributeUsage(AttributeTargets.Field)]
        class DataObjectFormatAttribute : public : Attribute
        {
            public DataObjectFormatAttribute(void)
        {
                Flags = ObjectDataFormatFlags.None;
                InstanceNumber = 0;
                Guid = "";
                TypeFlags = DeviceObjectTypeFlags.All;
            }

            public DataObjectFormatAttribute(const std::string& guid, DeviceObjectTypeFlags typeFlags)
        {
                Guid = guid;
                TypeFlags = typeFlags;
                Flags = ObjectDataFormatFlags.None;
                InstanceNumber = 0;
                ArrayCount = 0;
            }

            public DataObjectFormatAttribute(const std::string& guid, DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags)
        {
                Guid = guid;
                TypeFlags = typeFlags;
                Flags = flags;
            }

            public DataObjectFormatAttribute(const std::string& guid, DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags, int32_t instanceNumber)
        {
                Guid = guid;
                TypeFlags = typeFlags;
                Flags = flags;
                InstanceNumber = instanceNumber;
            }

            public DataObjectFormatAttribute(const std::string& guid, int32_t arrayCount, DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags)
        {
                Guid = guid;
                ArrayCount = arrayCount;
                TypeFlags = typeFlags;
                Flags = flags;
            }

            public DataObjectFormatAttribute(const std::string& guid, int32_t arrayCount, DeviceObjectTypeFlags typeFlags)
        {
                Guid = guid;
                ArrayCount = arrayCount;
                TypeFlags = typeFlags;
                Flags = ObjectDataFormatFlags.None;
            }

            public DataObjectFormatAttribute(DeviceObjectTypeFlags typeFlags)
        {
                TypeFlags = typeFlags;
                Flags = ObjectDataFormatFlags.None;
                InstanceNumber = 0;
                ArrayCount = 0;
            }

            public DataObjectFormatAttribute(DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags)
        {
                TypeFlags = typeFlags;
                Flags = flags;
            }

            public DataObjectFormatAttribute(DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags, int32_t instanceNumber)
        {
                TypeFlags = typeFlags;
                Flags = flags;
                InstanceNumber = instanceNumber;
            }

            public DataObjectFormatAttribute(int32_t arrayCount, DeviceObjectTypeFlags typeFlags)
        {
                ArrayCount = arrayCount;
                TypeFlags = typeFlags;
                Flags = ObjectDataFormatFlags.None;
            }

            public DataObjectFormatAttribute(int32_t arrayCount, DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags)
        {
                ArrayCount = arrayCount;
                TypeFlags = typeFlags;
                Flags = flags;
            }

            public DataObjectFormatAttribute(int32_t arrayCount, DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags, int32_t instanceNumber)
        {
                ArrayCount = arrayCount;
                TypeFlags = typeFlags;
                Flags = flags;
                InstanceNumber = instanceNumber;
            }

            public DataObjectFormatAttribute(int32_t arrayCount, DeviceObjectTypeFlags typeFlags, int32_t instanceNumber)
        {
                ArrayCount = arrayCount;
                TypeFlags = typeFlags;
                Flags = ObjectDataFormatFlags.None;
                InstanceNumber = instanceNumber;
            }

                        public: std::optional<std::string> Name{};

                            public: std::optional<std::string> Guid{};

                            public: int32_t ArrayCount{};

                            public: DeviceObjectTypeFlags TypeFlags{};

                            public: ObjectDataFormatFlags Flags{};

                            public: int32_t InstanceNumber{};
        }


    }
}

#endif // VORTICE_ATTRIBUTES_H