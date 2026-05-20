// Copyright (c) Contributors.

#ifndef VORTICE_IMFGETSERVICE_H
#define VORTICE_IMFGETSERVICE_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        class IMFGetService
        {
            public Result GetService<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid guidService, out T? service)
                where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    service = default;
                    return result{};
                }

                service = MarshallingHelpers.FromPointer<T>(devicePtr);
                return result{};
            }

            public T GetService<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid guidService)
                where T : ComObject
            {
                GetService(guidService, typeof(T).GUID, out IntPtr devicePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(devicePtr)!;
            }
        }


    }
}

#endif // VORTICE_IMFGETSERVICE_H