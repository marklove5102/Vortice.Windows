// Copyright (c) Contributors.

#ifndef VORTICE_DATAOBJECTFORMAT_H
#define VORTICE_DATAOBJECTFORMAT_H

#include <cstdint>
#include <string>
#include <optional>
#include <cstring>

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
        // Copyright (c) Amer Koleci and contributors.
        // Distributed under the MIT license. See the LICENSE file in the project root for more information.
        namespace Vortice.DirectInput;

        class ObjectDataFormat
        {
            public ObjectDataFormat(void)
        {
            }

            public ObjectDataFormat(Guid guid, int offset, DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags)
                : this(guid, offset, typeFlags, flags, 0)
            {
            }

            public ObjectDataFormat(Guid guid, int32_t offset, DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags, int32_t instanceNumber)
        {
                Guid = guid;
                Offset = offset;
                TypeFlags = typeFlags;
                InstanceNumber = instanceNumber;
                Flags = flags;
            }

                        std::optional<std::string> m_name{};

                            Guid m_guid{};

                            int32_t m_offset{};

                            DeviceObjectTypeFlags m_typeFlags{};

                            int32_t m_instanceNumber{};

                            ObjectDataFormatFlags m_flags{};
            // Internal native struct used for marshalling
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* GuidPointer{};
                public: int32_t Offset{};
                public: int32_t Type{};
                public: ObjectDataFormatFlags Flags{};

                void __MarshalFree(void)
        {
                    //if (GuidPointer != IntPtr.Zero)
                    //{
                    //    var handle{};
                    //    handle.Free();
                    //}
                }
            }

            void __MarshalFree(__Native& @ref)
        {
                @ref.__MarshalFree();
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.Offset = Offset;
                @ref.Type = ((int)TypeFlags) | (((TypeFlags & DeviceObjectTypeFlags.AnyInstance) == DeviceObjectTypeFlags.AnyInstance ? 0 : InstanceNumber) << 8);
                @ref.Flags = Flags;

                if (Guid == Guid.Empty)
                    @ref.GuidPointer = IntPtr.Zero;
                else
                {
                    var handle{};
                    @ref.GuidPointer = handle.AddrOfPinnedObject();
                }
            }
        }


    }
}

#endif // VORTICE_DATAOBJECTFORMAT_H