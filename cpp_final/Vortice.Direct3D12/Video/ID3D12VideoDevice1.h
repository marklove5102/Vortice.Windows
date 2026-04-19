// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12VIDEODEVICE1_H
#define VORTICE_ID3D12VIDEODEVICE1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Video;

            class ID3D12VideoDevice1
            {
                ID3D12VideoMotionEstimator CreateVideoMotionEstimator(VideoMotionEstimatorDescription description, ID3D12ProtectedResourceSession protectedResourceSession)
            {
                    CreateVideoMotionEstimator(ref description, protectedResourceSession, typeof(ID3D12VideoMotionEstimator).GUID, out IntPtr nativePtr).CheckError();
                    return new ID3D12VideoMotionEstimator(nativePtr param) = 0;
                }

                public T CreateVideoMotionEstimator<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(VideoMotionEstimatorDescription description, ID3D12ProtectedResourceSession protectedResourceSession) where T : ID3D12VideoMotionEstimator
                {
                    CreateVideoMotionEstimator(ref description, protectedResourceSession, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                    return MarshallingHelpers.FromPointer<T>(nativePtr)!;
                }

                public Result CreateVideoMotionEstimator<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(VideoMotionEstimatorDescription description, ID3D12ProtectedResourceSession protectedResourceSession, out T? videoMotionEstimator) where T : ID3D12VideoMotionEstimator
                {
                    Result result{};
                    if (result.Failure)
                    {
                        videoMotionEstimator = default;
                        return result{};
                    }

                    videoMotionEstimator = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                ID3D12VideoMotionVectorHeap CreateVideoMotionVectorHeap(VideoMotionVectorHeapDescription description, ID3D12ProtectedResourceSession protectedResourceSession)
            {
                    CreateVideoMotionVectorHeap(ref description, protectedResourceSession, typeof(ID3D12VideoMotionVectorHeap).GUID, out IntPtr nativePtr).CheckError();
                    return new ID3D12VideoMotionVectorHeap(nativePtr param) = 0;
                }

                public T CreateVideoMotionVectorHeap<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(VideoMotionVectorHeapDescription description, ID3D12ProtectedResourceSession protectedResourceSession) where T : ID3D12VideoMotionVectorHeap
                {
                    CreateVideoMotionVectorHeap(ref description, protectedResourceSession, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                    return MarshallingHelpers.FromPointer<T>(nativePtr)!;
                }

                public Result CreateVideoMotionVectorHeap<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(VideoMotionVectorHeapDescription description, ID3D12ProtectedResourceSession protectedResourceSession, out T? videoMotionEstimator) where T : ID3D12VideoMotionVectorHeap
                {
                    Result result{};
                    if (result.Failure)
                    {
                        videoMotionEstimator = default;
                        return result{};
                    }

                    videoMotionEstimator = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }
            }


        }
    }
}

#endif // VORTICE_ID3D12VIDEODEVICE1_H