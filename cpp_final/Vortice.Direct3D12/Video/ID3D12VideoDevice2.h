// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12VIDEODEVICE2_H
#define VORTICE_ID3D12VIDEODEVICE2_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Video;

            class ID3D12VideoDevice2
            {
                ID3D12VideoDecoder1 CreateVideoDecoder1(VideoDecoderDescription description, ID3D12ProtectedResourceSession protectedResourceSession)
            {
                    CreateVideoDecoder1(ref description, protectedResourceSession, typeof(ID3D12VideoDecoder1).GUID, out IntPtr nativePtr).CheckError();
                    return new ID3D12VideoDecoder1(nativePtr param) = 0;
                }

                public T CreateVideoDecoder1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(VideoDecoderDescription description, ID3D12ProtectedResourceSession protectedResourceSession) where T : ID3D12VideoDecoder1
                {
                    CreateVideoDecoder1(ref description, protectedResourceSession, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                    return MarshallingHelpers.FromPointer<T>(nativePtr)!;
                }

                public Result CreateVideoDecoder1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(VideoDecoderDescription description, ID3D12ProtectedResourceSession protectedResourceSession, out T? videoDecoder) where T : ID3D12VideoDecoder1
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
                ID3D12VideoDecoderHeap1 CreateVideoDecoderHeap1(VideoDecoderHeapDescription description, ID3D12ProtectedResourceSession protectedResourceSession)
            {
                    CreateVideoDecoderHeap1(ref description, protectedResourceSession, typeof(ID3D12VideoDecoderHeap1).GUID, out IntPtr nativePtr).CheckError();
                    return new ID3D12VideoDecoderHeap1(nativePtr param) = 0;
                }

                public T CreateVideoDecoderHeap1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(VideoDecoderHeapDescription description, ID3D12ProtectedResourceSession protectedResourceSession) where T : ID3D12VideoDecoderHeap1
                {
                    CreateVideoDecoderHeap1(ref description, protectedResourceSession, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                    return MarshallingHelpers.FromPointer<T>(nativePtr)!;
                }

                public Result CreateVideoDecoderHeap1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(VideoDecoderHeapDescription description, ID3D12ProtectedResourceSession protectedResourceSession, out T? videoDecoder) where T : ID3D12VideoDecoderHeap1
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
                ID3D12VideoExtensionCommand CreateVideoExtensionCommand(VideoExtensionCommandDescription description, void* creationParameters, uintptr_t creationParametersDataSizeInBytes, ID3D12ProtectedResourceSession protectedResourceSession)
            {
                    CreateVideoExtensionCommand(ref description, creationParameters, creationParametersDataSizeInBytes, protectedResourceSession, typeof(ID3D12VideoExtensionCommand).GUID, out IntPtr nativePtr).CheckError();
                    return new ID3D12VideoExtensionCommand(nativePtr param) = 0;
                }

                public T CreateVideoExtensionCommand<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(VideoExtensionCommandDescription description, IntPtr creationParameters, nuint creationParametersDataSizeInBytes, ID3D12ProtectedResourceSession protectedResourceSession) where T : ID3D12VideoExtensionCommand
                {
                    CreateVideoExtensionCommand(ref description, creationParameters, creationParametersDataSizeInBytes, protectedResourceSession, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                    return MarshallingHelpers.FromPointer<T>(nativePtr)!;
                }

                public Result CreateVideoExtensionCommand<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                    VideoExtensionCommandDescription description,
                    nint creationParameters,
                    nuint creationParametersDataSizeInBytes,
                    ID3D12ProtectedResourceSession protectedResourceSession,
                    out T? videoExtensionCommand) where T : ID3D12VideoExtensionCommand
                {
                    Result result{};
                    if (result.Failure)
                    {
                        videoExtensionCommand = default;
                        return result{};
                    }

                    videoExtensionCommand = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }
                ID3D12VideoProcessor CreateVideoProcessor1(uint32_t nodeMask, VideoProcessOutputStreamDescription outputStreamDescription, uint32_t inputStreamDescriptionsCount, const std::vector<VideoProcessInputStreamDescription>& inputStreamDescriptions, ID3D12ProtectedResourceSession protectedResourceSession)
            {
                    CreateVideoProcessor1(
                        nodeMask,
                        ref outputStreamDescription,
                        inputStreamDescriptionsCount,
                        inputStreamDescriptions,
                        protectedResourceSession,
                        typeof(ID3D12VideoProcessor).GUID,
                        out IntPtr nativePtr).CheckError();

                    return new ID3D12VideoProcessor(nativePtr param) = 0;
                }

                ID3D12VideoProcessor CreateVideoProcessor1(uint32_t nodeMask, VideoProcessOutputStreamDescription outputStreamDescription, const std::vector<VideoProcessInputStreamDescription>& inputStreamDescriptions, ID3D12ProtectedResourceSession protectedResourceSession)
            {
                    CreateVideoProcessor1(
                        nodeMask,
                        ref outputStreamDescription,
                        (uint)inputStreamDescriptions.Length,
                        inputStreamDescriptions,
                        protectedResourceSession,
                        typeof(ID3D12VideoProcessor).GUID,
                        out IntPtr nativePtr).CheckError();
                    return new ID3D12VideoProcessor(nativePtr param) = 0;
                }

                public T CreateVideoProcessor1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                    uint nodeMask,
                    VideoProcessOutputStreamDescription outputStreamDescription,
                    VideoProcessInputStreamDescription[] inputStreamDescriptions,
                    ID3D12ProtectedResourceSession protectedResourceSession) where T : ID3D12VideoProcessor
                {
                    CreateVideoProcessor1(
                        nodeMask,
                        ref outputStreamDescription,
                        (uint)inputStreamDescriptions.Length,
                        inputStreamDescriptions,
                        protectedResourceSession,
                        typeof(T).GUID,
                        out IntPtr nativePtr).CheckError();

                    return MarshallingHelpers.FromPointer<T>(nativePtr)!;
                }

                public T CreateVideoProcessor1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                    uint nodeMask,
                    VideoProcessOutputStreamDescription outputStreamDescription,
                    uint inputStreamDescriptionsCount,
                    VideoProcessInputStreamDescription[] inputStreamDescriptions,
                    ID3D12ProtectedResourceSession protectedResourceSession) where T : ID3D12VideoProcessor
                {
                    CreateVideoProcessor1(
                        nodeMask,
                        ref outputStreamDescription,
                        inputStreamDescriptionsCount,
                        inputStreamDescriptions,
                        protectedResourceSession,
                        typeof(T).GUID,
                        out IntPtr nativePtr).CheckError();
                    return MarshallingHelpers.FromPointer<T>(nativePtr)!;
                }

                public Result CreateVideoProcessor1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                    uint nodeMask,
                    VideoProcessOutputStreamDescription outputStreamDescription,
                    VideoProcessInputStreamDescription[] inputStreamDescriptions,
                    ID3D12ProtectedResourceSession protectedResourceSession,
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

                public Result CreateVideoProcessor1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                    uint nodeMask,
                    VideoProcessOutputStreamDescription outputStreamDescription,
                    uint inputStreamDescriptionsCount,
                    VideoProcessInputStreamDescription[] inputStreamDescriptions,
                    ID3D12ProtectedResourceSession protectedResourceSession,
                    out T? videoDecoder) where T : ID3D12VideoProcessor1
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

#endif // VORTICE_ID3D12VIDEODEVICE2_H