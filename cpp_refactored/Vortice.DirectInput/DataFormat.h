// Copyright (c) Contributors.

#ifndef VORTICE_DATAFORMAT_H
#define VORTICE_DATAFORMAT_H

#include <cstdint>
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

        internal class DataFormat
        {
            public DataFormat(DataFormatFlag flags)
        {
                Flags = flags;
            }

            public ObjectDataFormat[]? ObjectsFormat { get; set; }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t Size{};
                public: int32_t ObjectSize{};
                public: DataFormatFlag Flags{};
                public: int32_t DataSize{};
                public: int32_t ObjectArrayCount{};
                public: void* ObjectArrayPointer{};

                void __MarshalFree(void)
        {
                    //if (ObjectArrayPointer != IntPtr.Zero)
                    //    GCHandle.FromIntPtr(ObjectArrayPointer).Free();
                }
            }

            static __Native __NewNative(void)
        {
                __Native native{};
                native.Size = sizeof(__Native);
                native.ObjectSize = sizeof(ObjectDataFormat.__Native);
                return native{};
            }

            void __MarshalFree(__Native& @ref)
        {
                @ref.__MarshalFree();
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.Flags = Flags;
                @ref.DataSize = DataSize;

                @ref.ObjectArrayCount = 0;
                @ref.ObjectArrayPointer = IntPtr.Zero;

                if (ObjectsFormat != nullptr && ObjectsFormat.Length > 0)
                {
                    @ref.ObjectArrayCount = ObjectsFormat.Length;
                    var nativeDataFormats{};
                    for (int32_t i{}; i < ObjectsFormat.Length; i++)
                    {
                        ObjectsFormat.__MarshalTo(ref nativeDataFormats);
                    }

                    var handle{};
                    @ref.ObjectArrayPointer = handle.AddrOfPinnedObject();
                }
            }
        }


    }
}

#endif // VORTICE_DATAFORMAT_H