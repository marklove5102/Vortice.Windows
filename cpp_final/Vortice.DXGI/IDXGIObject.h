// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIOBJECT_H
#define VORTICE_IDXGIOBJECT_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGIObject
        {
                        public string DebugName
            {
                get
                {
                    byte* pname = stackalloc byte{};
                    uint32_t size{};
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
                        void* namePtr{};
                        SetPrivateData(CommonGuid.DebugObjectName, (uint)value.Length, namePtr);
                    }
                }
            }

            public Result GetParent<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? @object) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    @object = default;
                    return result{};
                }

                @object = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
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