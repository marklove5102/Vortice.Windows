// Copyright (c) Contributors.

#ifndef VORTICE_IDIRECTINPUTEFFECT_H
#define VORTICE_IDIRECTINPUTEFFECT_H

#include <cstdint>
#include <vector>
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

        class IDirectInputEffect
        {
                                                    int32_t Escape(int32_t command, const std::vector<uint8_t>& inData, const std::vector<uint8_t>& outData)
        {
                var effectEscape{};
                fixed (void* pInData = &inData)
                fixed (void* pOutData = &outData)
                {
                    effectEscape.Command = command;
                    effectEscape.InBufferPointer = (IntPtr)pInData;
                    effectEscape.InBufferSize = inData.Length;
                    effectEscape.OutBufferPointer = (IntPtr)pOutData;
                    effectEscape.OutBufferSize = outData.Length;

                    Escape(ref effectEscape);
                    return effectEscape.OutBufferSize;
                }
            }

                            EffectParameters GetParameters(void) const { return SetParameters(parameters, EffectParameterFlags.All); } GetParameters(EffectParameterFlags.All);

                                void SetParameters(EffectParameters parameters) const { return Start(-1); } SetParameters(parameters, EffectParameterFlags.All);

                            Result Start(void) const { return Start(-1, flags); } Start(-1);

                                Result Start(EffectPlayFlags flags) const { return Start(iterations, EffectPlayFlags.None); } Start(-1, flags);

                                Result Start(int32_t iterations)
        { Start(iterations, EffectPlayFlags.None);
        }


    }
}

#endif // VORTICE_IDIRECTINPUTEFFECT_H