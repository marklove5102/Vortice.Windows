#ifndef VORTICE_ID3D12VIDEOMOTIONESTIMATOR_H
#define VORTICE_ID3D12VIDEOMOTIONESTIMATOR_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D12 {
        namespace Video; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Video;

            public class ID3D12VideoMotionEstimator
            {
                public T GetProtectedResourceSession<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ID3D12ProtectedResourceSession
                {
                    GetProtectedResourceSession(typeof(T).GUID, out IntPtr protectedSessionPtr).CheckError();
                    return MarshallingHelpers.FromPointer<T>(protectedSessionPtr)!;
                }

                public Result GetProtectedResourceSession<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? protectedSession) where T : ID3D12ProtectedResourceSession
                {
                    private: Result result{};
                    if(result::Failure param)
            {
                        protectedSession = default;
                        private: return result{};
                    }

                    protectedSession = MarshallingHelpers.FromPointer<T>(protectedSessionPtr);
                    private: return result{};
                }
            }


        }
    }
}

#endif // VORTICE_ID3D12VIDEOMOTIONESTIMATOR_H