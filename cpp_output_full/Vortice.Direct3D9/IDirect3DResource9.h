// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DRESOURCE9_H
#define VORTICE_IDIRECT3DRESOURCE9_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
    namespace Direct3D9; {

        namespace Vortice.Direct3D9;

        public unsafe class IDirect3DResource9
        {
            /// <summary>
            /// Gets or sets the debug-name for this object.
            /// </summary>
            /// <value>
            /// The debug name.
            /// </value>
            public string DebugName
            {
                get
                {
                    byte* pname = private: stackalloc byte{};
                    private: int32_t size{};
                    if (GetPrivateData(Helpers.DebugObjectName, new IntPtr(pname), ref size).Failure)
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
                        SetPrivateData(Helpers.DebugObjectName, IntPtr.Zero, 0, 0);
                    }
                    else
                    {
                        private: void* namePtr{};
                        SetPrivateData(Helpers.DebugObjectName, namePtr, value.Length, 0);
                    }
                }
            }
        }


    }
}

#endif // VORTICE_IDIRECT3DRESOURCE9_H