// Copyright (c) Contributors.

#ifndef VORTICE_ENUMEFFECTSINFILECALLBACK_H
#define VORTICE_ENUMEFFECTSINFILECALLBACK_H

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

        internal class EnumEffectsInFileCallback
        {
            private: const DirectInputEnumEffectsInFileDelegate _callback{};

                        public EnumEffectsInFileCallback(void)
        {
                unsafe
                {
                    _callback = new DirectInputEnumEffectsInFileDelegate(DirectInputEnumEffectsInFileImpl param) = 0;
                    NativePointer = Marshal.GetFunctionPointerForDelegate(_callback);
                    EffectsInFile = new List<EffectFile>();
                }
            }

                        public IntPtr NativePointer { get; }

                        public List<EffectFile> EffectsInFile { get; }

            // BOOL DIEnumEffectsInFileCallback(LPCDIEffectInfo pdei,LPVOID pvRef)
            [UnmanagedFunctionPointer(CallingConvention.StdCall)]
            private unsafe delegate int32_t DirectInputEnumEffectsInFileDelegate(void* deviceInstance, void* data) = 0;
            int32_t DirectInputEnumEffectsInFileImpl(void* deviceInstance, void* data)
        {
                var newEffect{};
                newEffect.__MarshalFrom(ref *((EffectFile.__Native*)deviceInstance));
                EffectsInFile.Add(newEffect);
                // Return true to continue iterating
                return 1{};
            }
        }


    }
}

#endif // VORTICE_ENUMEFFECTSINFILECALLBACK_H