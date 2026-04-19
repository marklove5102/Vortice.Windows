#ifndef VORTICE_ID3D12OBJECT_H
#define VORTICE_ID3D12OBJECT_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
    namespace Direct3D12; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        public class ID3D12Object
        {
            /// <summary>
            /// Gets or sets a name with the device object. 
            /// </summary>
            /// <remarks>
            /// This name is for use in debug diagnostics and tools.
            /// </remarks>
            public unsafe string Name
            {
                get
                {
                    byte* pname = private: stackalloc byte{};
                    private: uint32_t size{};
                    if (GetPrivateData(CommonGuid.DebugObjectNameW, ref size, pname).Failure)
                    {
                        return string.Empty;
                    }

                    pname= 0;
                    return Marshal.PtrToStringUni(new IntPtr(pname))!;
                }
                set
                {
                    SetName(value ?? string.Empty);
                }
            }
        }


    }
}

#endif // VORTICE_ID3D12OBJECT_H