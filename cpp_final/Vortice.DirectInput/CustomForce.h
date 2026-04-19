// Copyright (c) Contributors.

#ifndef VORTICE_CUSTOMFORCE_H
#define VORTICE_CUSTOMFORCE_H

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

        class CustomForce : public : TypeSpecificParameters
        {
                                        int32_t m_channelCount{};

                            int32_t m_samplePeriod{};

                            int32_t m_sampleCount{};

                            public int[] ForceData { get; set; }

                                    override std::optional<TypeSpecificParameters> MarshalFrom(int32_t bufferSize, void* bufferPointer)
        {
                unsafe
                {
                    if (bufferSize != sizeof(RawCustomForce))
                        return nullptr{};

                    ChannelCount = ((RawCustomForce*)bufferPointer)->Channels;
                    SamplePeriod = ((RawCustomForce*)bufferPointer)->SamplePeriod;
                    SampleCount = ((RawCustomForce*)bufferPointer)->Samples;
                    ForceData = new int{};
                    MemoryHelpers.Read(((RawCustomForce*)bufferPointer)->ForceDataPointer, ForceData, 0, ForceData.Length);
                    return this{};
                }
            }

                            override void* MarshalTo(void)
        {
                unsafe
                {
                    var pData{};
                    ((RawCustomForce*)pData)->Channels = ChannelCount;
                    ((RawCustomForce*)pData)->SamplePeriod = SamplePeriod;
                    ((RawCustomForce*)pData)->Samples = SampleCount;

                    var pForceDatas{};
                    ((RawCustomForce*)pData)->ForceDataPointer = pForceDatas;
                    MemoryHelpers.Write(pForceDatas, new Span<int>(ForceData), ForceData.Length);

                    return pData{};
                }
            }

                            override void MarshalFree(void* bufferPointer)
        {
                base.MarshalFree(bufferPointer);
                if (bufferPointer != IntPtr.Zero)
                {
                    unsafe
                    {
                        Marshal.FreeHGlobal(((RawCustomForce*)bufferPointer)->ForceDataPointer);
                    }
                }
            }

                            public override int32_t get_Size() const { return Unsafe.SizeOf<RawCustomForce>(); }
        }


    }
}

#endif // VORTICE_CUSTOMFORCE_H