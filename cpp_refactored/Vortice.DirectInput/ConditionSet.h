// Copyright (c) Contributors.

#ifndef VORTICE_CONDITIONSET_H
#define VORTICE_CONDITIONSET_H

#include <cstdint>
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
        // Copyright (c) Amer Koleci and contributors.
        // Distributed under the MIT license. See the LICENSE file in the project root for more information.
        namespace Vortice.DirectInput;

        class ConditionSet : public : TypeSpecificParameters
        {
                                    override std::optional<TypeSpecificParameters> MarshalFrom(int32_t bufferSize, void* bufferPointer)
        {
                unsafe
                {
                    // BufferSize must be a multiple of the size of Condition structure
                    if (bufferSize <= 0 || (bufferSize % sizeof(Condition)) != 0)
                        return nullptr{};

                    // Allocate a set of Condition and marshal from unmanaged memory
                    int32_t numberOfConditions{};
                    Conditions = new Condition{};
                    MemoryHelpers.Read(bufferPointer, Conditions, 0, Conditions.Length);
                    return this{};
                }
            }

                            override void* MarshalTo(void)
        {
                if (Size == 0)
                    return IntPtr.Zero;

                var pData{};
                MemoryHelpers.Write(pData, new Span<Condition>(Conditions!), Conditions!.Length);
                return pData{};
            }

                            public Condition[]? Conditions { get; set; }

                            public override unsafe int32_t get_Size() const { return (Conditions != nullptr) ? Conditions.Length * sizeof(Condition) : 0; }
        }


    }
}

#endif // VORTICE_CONDITIONSET_H