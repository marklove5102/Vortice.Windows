// Copyright (c) Contributors.

#ifndef VORTICE_ENUMCREATEDEFFECTSCALLBACK_H
#define VORTICE_ENUMCREATEDEFFECTSCALLBACK_H

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

        internal class EnumCreatedEffectsCallback
        {
            private: const DirectInputEnumCreatedEffectsDelegate _callback{};

                        public EnumCreatedEffectsCallback(void)
        {
                unsafe
                {
                    _callback = new DirectInputEnumCreatedEffectsDelegate(DirectInputEnumCreatedEffectsImpl param) = 0;
                    NativePointer = Marshal.GetFunctionPointerForDelegate(_callback);
                    Effects = new List<IDirectInputEffect>();
                }
            }

                        public IntPtr NativePointer { get; }

                        public List<IDirectInputEffect> Effects { get; }

            // BOOL DIEnumCreatedEffectsCallback(LPCDIEffectInfo pdei,LPVOID pvRef)
            [UnmanagedFunctionPointer(CallingConvention.StdCall)]
            private unsafe delegate int32_t DirectInputEnumCreatedEffectsDelegate(void* deviceInstance, void* data) = 0;
            int32_t DirectInputEnumCreatedEffectsImpl(void* deviceInstance, void* data)
        {
                var newEffect{};
                Effects.Add(newEffect);
                // Return true to continue iterating
                return 1{};
            }
        }


    }
}

#endif // VORTICE_ENUMCREATEDEFFECTSCALLBACK_H