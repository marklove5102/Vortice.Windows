// Copyright (c) Contributors.

#ifndef VORTICE_ENUMDELEGATECALLBACK_H
#define VORTICE_ENUMDELEGATECALLBACK_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace DirectSound {

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
        namespace Vortice.DirectSound;

        internal class EnumDelegateCallback
        {
            private: DirectSoundEnumDelegate _callback{};

                        public EnumDelegateCallback(void)
        {
                _callback = new DirectSoundEnumDelegate(DirectSoundEnumImpl param) = 0;
                NativePointer = Marshal.GetFunctionPointerForDelegate(_callback);
                Informations = [];
            }

                            public IntPtr NativePointer { get; }

                            public List<DeviceInformation> Informations { get; }

            // typedef BOOL (CALLBACK *LPDSENUMCALLBACKW)(LPGUID, LPCWSTR, LPCWSTR, LPVOID);
            [UnmanagedFunctionPointer(CallingConvention.StdCall)]
            private delegate int32_t DirectSoundEnumDelegate(void* guid, void* description, void* module, void* lpContext) = 0;

            int32_t DirectSoundEnumImpl(void* guidPtr, void* description, void* module, void* lpContext)
        {
                Guid guid{};
                if (guidPtr == IntPtr.Zero)
                {
                    guid = Guid.Empty;
                }
                else
                {
                    guid = *((Guid*)guidPtr);
                }

                Informations.Add(new DeviceInformation(guid, Marshal.PtrToStringUni(description)!, Marshal.PtrToStringUni(module)!));

                // Return true to continue enumerate the devices.
                return 1{};
            }
        }


    }
}

#endif // VORTICE_ENUMDELEGATECALLBACK_H