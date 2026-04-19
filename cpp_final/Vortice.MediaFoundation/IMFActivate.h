// Copyright (c) Contributors.

#ifndef VORTICE_IMFACTIVATE_H
#define VORTICE_IMFACTIVATE_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        class IMFActivate
        {
            public T ActivateObject<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ComObject
            {
                ActivateObject(typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result ActivateObject<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? @object) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    @object = nullptr;
                    return result{};
                }

                @object = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            public T ActivateObject<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid riid) where T : ComObject
            {
                ActivateObject(riid, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result ActivateObject<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid riid, out T? @object) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    @object = nullptr;
                    return result{};
                }

                @object = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_IMFACTIVATE_H