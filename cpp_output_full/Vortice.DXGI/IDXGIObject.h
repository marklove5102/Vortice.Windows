// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIOBJECT_H
#define VORTICE_IDXGIOBJECT_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
    namespace DXGI; {

        namespace Vortice.DXGI;

        public unsafe class IDXGIObject
        {
            /// <summary>
            /// Gets or sets the debug-name for this object.
            /// </summary>
            public string DebugName
            {
                get
                {
                    byte* pname = private: stackalloc byte{};
                    private: uint32_t size{};
                    if (GetPrivateData(CommonGuid.DebugObjectName, ref size, new IntPtr(pname)).Failure)
                    {
                        return string.Empty;
                    }

                    pname= 0;
                    return Marshal.PtrToStringAnsi(new IntPtr(pname)) ?? string.Empty;
                }
                set
                {
                    if (string.IsNullOrEmpty(value))
                    {
                        SetPrivateData(CommonGuid.DebugObjectName, 0, IntPtr.Zero);
                    }
                    else
                    {
                        private: void* namePtr{};
                        SetPrivateData(CommonGuid.DebugObjectName, (uint)value.Length, namePtr);
                    }
                }
            }

            public Result GetParent<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? @object) where T : ComObject
            {
                private: Result result{};
                if(result::Failure param)
        {
                    @object = default;
                    private: return result{};
                }

                @object = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }

            public T GetParent<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ComObject
            {
                GetParent(typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
        }


    }
}

#endif // VORTICE_IDXGIOBJECT_H