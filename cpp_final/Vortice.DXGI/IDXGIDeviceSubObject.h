// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIDEVICESUBOBJECT_H
#define VORTICE_IDXGIDEVICESUBOBJECT_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGIDeviceSubObject
        {
            public T GetDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>()
                where T : ComObject
            {
                GetDevice(typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result GetDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? device)
                where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    device = default;
                    return result{};
                }

                device = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_IDXGIDEVICESUBOBJECT_H