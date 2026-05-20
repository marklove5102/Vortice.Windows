// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12PROTECTEDSESSION_H
#define VORTICE_ID3D12PROTECTEDSESSION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class ID3D12ProtectedSession
        {
                                            public Result GetStatusFence<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? fence) where T : ID3D12Fence
            {
                Result result{};
                if (result.Failure)
                {
                    fence = default;
                    return result{};
                }

                fence = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            public T GetStatusFence<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ID3D12Fence
            {
                GetStatusFence(typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
        }


    }
}

#endif // VORTICE_ID3D12PROTECTEDSESSION_H