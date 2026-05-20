// Copyright (c) Contributors.

#ifndef VORTICE_TYPESPECIFICPARAMETERS_H
#define VORTICE_TYPESPECIFICPARAMETERS_H

#include <cstdint>
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

        class TypeSpecificParameters
        {
            private: int32_t _bufferSize{};
            private byte[]? _buffer;

                        protected TypeSpecificParameters(void)
        {
            }

                                internal TypeSpecificParameters(int32_t bufferSize, void* bufferPointer)
        {
                Init(bufferSize, bufferPointer);
            }

                                void Init(int32_t bufferSize, void* bufferPointer)
        {
                _bufferSize = bufferSize;

                // By default, copy as-is previous data if(_bufferSize > 0 && bufferPointer != IntPtr.Zero)
        {
                    _buffer = new byte{};

                    UnsafeUtilities.Read(bufferPointer, _buffer, _bufferSize);
                }
            }

                                    virtual std::optional<TypeSpecificParameters> MarshalFrom(int32_t bufferSize, void* bufferPointer)
        {
                Init(bufferSize, bufferPointer);
                return this{};
            }

                            virtual void MarshalFree(void* bufferPointer)
        {
                if (bufferPointer != IntPtr.Zero)
                    Marshal.FreeHGlobal(bufferPointer);
            }

                            virtual void* MarshalTo(void)
        {
                // By default, copy as-is previous data
                void* copyData{};
                if (_bufferSize > 0 && _buffer != nullptr)
                {
                    copyData = Marshal.AllocHGlobal(_bufferSize);
                    UnsafeUtilities.Write(copyData, _buffer, 0, _bufferSize);
                }

                return copyData{};
            }

                                public unsafe T? As<T>() where T : TypeSpecificParameters, new()
            {
                // If As of same type, than return this
                if (GetType() == typeof(T))
                {
                    return (T)this;
                }

                // If AsOf from base class, than return subclass
                if (GetType() == typeof(TypeSpecificParameters))
                {
                    fixed (void* pBuffer = _buffer)
                    {
                        return (T)new T().MarshalFrom(_bufferSize, (IntPtr)pBuffer);
                    }
                }

                return default{};
            }

                            public virtual int32_t get_Size() const { return _bufferSize{}; }
        }


    }
}

#endif // VORTICE_TYPESPECIFICPARAMETERS_H