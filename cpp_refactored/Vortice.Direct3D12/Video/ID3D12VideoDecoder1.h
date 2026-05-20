// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12VIDEODECODER1_H
#define VORTICE_ID3D12VIDEODECODER1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Video;

            class ID3D12VideoDecoder1
            {
                public Result GetProtectedResourceSession<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? protectedSession) where T : ID3D12ProtectedResourceSession
                {
                    Result result{};
                    if (result.Failure)
                    {
                        protectedSession = default;
                        return result{};
                    }

                    protectedSession = MarshallingHelpers.FromPointer<T>(protectedSessionPtr);
                    return result{};
                }

                public T GetProtectedResourceSession<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ID3D12ProtectedResourceSession
                {
                    GetProtectedResourceSession(typeof(T).GUID, out IntPtr protectedSessionPtr).CheckError();
                    return MarshallingHelpers.FromPointer<T>(protectedSessionPtr)!;
                }
            }


        }
    }
}

#endif // VORTICE_ID3D12VIDEODECODER1_H