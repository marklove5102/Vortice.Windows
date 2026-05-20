// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12VIDEODEVICE_H
#define VORTICE_ID3D12VIDEODEVICE_H

#include <cstdint>
#include <vector>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Video;

            class ID3D12VideoDevice
            {
                public unsafe T CheckFeatureSupport<T>(FeatureVideo feature) where T : unmanaged
                {
                    T featureSupport{};
                    CheckFeatureSupport(feature, &featureSupport, (uint)sizeof(T));
                    return featureSupport{};
                }

                public unsafe bool CheckFeatureSupport<T>(FeatureVideo feature, ref T featureSupport) where T : unmanaged
                {
                    fixed (T* featureSupportPtr = &featureSupport)
                    {
                        return CheckFeatureSupport(feature, featureSupportPtr, (uint)sizeof(T)).Success;
                    }
                }
                ID3D12VideoDecoder CreateVideoDecoder(VideoDecoderDescription description)
            {
                    CreateVideoDecoder(ref description, typeof(ID3D12VideoDecoder).GUID, out IntPtr nativePtr).CheckError();
                    return new ID3D12VideoDecoder(nativePtr param) = 0;
                }

                Result CreateVideoDecoder(VideoDecoderDescription description, std::optional<ID3D12VideoDecoder>& videoDecoder)
            {
                    Result result{};
                    if (result.Failure)
                    {
                        videoDecoder = default;
                        return result{};
                    }

                    videoDecoder = new ID3D12VideoDecoder(nativePtr param) = 0;
                    return result{};
                }

                public T CreateVideoDecoder<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(VideoDecoderDescription description) where T : ID3D12VideoDecoder
                {
                    CreateVideoDecoder(ref description, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                    return MarshallingHelpers.FromPointer<T>(nativePtr)!;
                }

                public Result CreateVideoDecoder<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(VideoDecoderDescription description, out T? videoDecoder) where T : ID3D12VideoDecoder
                {
                    Result result{};
                    if (result.Failure)
                    {
                        videoDecoder = default;
                        return result{};
                    }

                    videoDecoder = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }
                ID3D12VideoDecoderHeap CreateVideoDecoderHeap(VideoDecoderHeapDescription description)
            {
                    CreateVideoDecoderHeap(ref description, typeof(ID3D12VideoDecoderHeap).GUID, out IntPtr nativePtr).CheckError();
                    return new ID3D12VideoDecoderHeap(nativePtr param) = 0;
                }

                Result CreateVideoDecoderHeap(VideoDecoderHeapDescription description, std::optional<ID3D12VideoDecoderHeap>& videoDecoder)
            {
                    Result result{};
                    if (result.Failure)
                    {
                        videoDecoder = default;
                        return result{};
                    }

                    videoDecoder = new ID3D12VideoDecoderHeap(nativePtr param) = 0;
                    return result{};
                }

                public T CreateVideoDecoderHeap<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(VideoDecoderHeapDescription description) where T : ID3D12VideoDecoderHeap
                {
                    CreateVideoDecoderHeap(ref description, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                    return MarshallingHelpers.FromPointer<T>(nativePtr)!;
                }

                public Result CreateVideoDecoderHeap<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(VideoDecoderHeapDescription description, out T? videoDecoder) where T : ID3D12VideoDecoderHeap
                {
                    Result result{};
                    if (result.Failure)
                    {
                        videoDecoder = default;
                        return result{};
                    }

                    videoDecoder = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }
                ID3D12VideoProcessor CreateVideoProcessor(uint32_t nodeMask, VideoProcessOutputStreamDescription outputStreamDescription, uint32_t inputStreamDescriptionsCount, const std::vector<VideoProcessInputStreamDescription>& inputStreamDescriptions)
            {
                    CreateVideoProcessor(nodeMask, ref outputStreamDescription, inputStreamDescriptionsCount, inputStreamDescriptions, typeof(ID3D12VideoProcessor).GUID, out IntPtr nativePtr).CheckError();
                    return new ID3D12VideoProcessor(nativePtr param) = 0;
                }

                ID3D12VideoProcessor CreateVideoProcessor(uint32_t nodeMask, VideoProcessOutputStreamDescription outputStreamDescription, const std::vector<VideoProcessInputStreamDescription>& inputStreamDescriptions)
            {
                    CreateVideoProcessor(nodeMask, ref outputStreamDescription, (uint)inputStreamDescriptions.Length, inputStreamDescriptions, typeof(ID3D12VideoProcessor).GUID, out IntPtr nativePtr).CheckError();
                    return new ID3D12VideoProcessor(nativePtr param) = 0;
                }

                public T CreateVideoProcessor<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                    uint nodeMask,
                    VideoProcessOutputStreamDescription outputStreamDescription,
                    VideoProcessInputStreamDescription[] inputStreamDescriptions) where T : ID3D12VideoProcessor
                {
                    CreateVideoProcessor(nodeMask, ref outputStreamDescription, (uint)inputStreamDescriptions.Length, inputStreamDescriptions, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                    return MarshallingHelpers.FromPointer<T>(nativePtr)!;
                }

                public T CreateVideoProcessor<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                    uint nodeMask,
                    VideoProcessOutputStreamDescription outputStreamDescription,
                    uint inputStreamDescriptionsCount,
                    VideoProcessInputStreamDescription[] inputStreamDescriptions) where T : ID3D12VideoProcessor
                {
                    CreateVideoProcessor(nodeMask, ref outputStreamDescription, inputStreamDescriptionsCount, inputStreamDescriptions, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                    return MarshallingHelpers.FromPointer<T>(nativePtr)!;
                }

                public Result CreateVideoProcessor<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                    uint nodeMask,
                    VideoProcessOutputStreamDescription outputStreamDescription,
                    VideoProcessInputStreamDescription[] inputStreamDescriptions,
                    out T? videoDecoder) where T : ID3D12VideoProcessor
                {
                    Result result{};
                    if (result.Failure)
                    {
                        videoDecoder = default;
                        return result{};
                    }

                    videoDecoder = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                public Result CreateVideoProcessor<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                    uint nodeMask,
                    VideoProcessOutputStreamDescription outputStreamDescription,
                    uint inputStreamDescriptionsCount,
                    VideoProcessInputStreamDescription[] inputStreamDescriptions,
                    out T? videoDecoder) where T : ID3D12VideoProcessor
                {
                    Result result{};
                    if (result.Failure)
                    {
                        videoDecoder = default;
                        return result{};
                    }

                    videoDecoder = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }
            }


        }
    }
}

#endif // VORTICE_ID3D12VIDEODEVICE_H