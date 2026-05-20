// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12OBJECT_H
#define VORTICE_ID3D12OBJECT_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class ID3D12Object
        {
                                    public unsafe string Name
            {
                get
                {
                    byte* pname = stackalloc byte{};
                    uint32_t size{};
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