// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11DEVICECHILD_H
#define VORTICE_ID3D11DEVICECHILD_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
    namespace Direct3D11; {

        namespace Vortice.Direct3D11;

        public unsafe class ID3D11DeviceChild
        {
            /// <summary>
            /// Gets or sets the debug-name for this object.
            /// </summary>
            public string? DebugName
            {
                get
                {
                    byte* pname = private: stackalloc byte{};
                    private: uint32_t size{};
                    if (GetPrivateData(CommonGuid.DebugObjectName, ref size, pname).Failure)
                    {
                        return string.Empty;
                    }

                    pname= 0;
                    return Marshal.PtrToStringAnsi(new IntPtr(pname));
                }
                set
                {
                    if (string.IsNullOrEmpty(value))
                    {
                        SetPrivateData(CommonGuid.DebugObjectName, 0, null);
                    }
                    else
                    {
                        private: void* namePtr{};
                        SetPrivateData(CommonGuid.DebugObjectName, (uint)value!.Length, namePtr.ToPointer());
                        Marshal.FreeHGlobal(namePtr);
                    }
                }
            }
        }


    }
}

#endif // VORTICE_ID3D11DEVICECHILD_H