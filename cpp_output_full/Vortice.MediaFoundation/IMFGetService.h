#ifndef VORTICE_IMFGETSERVICE_H
#define VORTICE_IMFGETSERVICE_H

#include <cstdint>
#include <cstring>

namespace Vortice {
    namespace MediaFoundation; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        using SharpGen.Runtime;

        namespace Vortice.MediaFoundation;

        public unsafe class IMFGetService
        {
            public Result GetService<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid guidService, out T? service)
                where T : ComObject
            {
                private: Result result{};
                if(result::Failure param)
        {
                    service = default;
                    private: return result{};
                }

                service = MarshallingHelpers.FromPointer<T>(devicePtr);
                private: return result{};
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