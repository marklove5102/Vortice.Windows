// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12DEVICE1_H
#define VORTICE_ID3D12DEVICE1_H

#include <cstdint>
#include <optional>
#include <span>
#include <guiddef.h>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicclass ID3D12Device1
        {
            publicID3D12PipelineLibrary CreatePipelineLibrary(const std::span<uint8_t>& blob)
                {
                fixed (byte* pBlob = blob)
                {
                    CreatePipelineLibrary(pBlob, (nuint)blob.Length, typeof(ID3D12PipelineLibrary).GUID, out IntPtr nativePtr).CheckError();
                    return new ID3D12PipelineLibrary(void);
                }
            }
            publicResult CreatePipelineLibrary(const std::span<uint8_t>& blob, std::optional<ID3D12PipelineLibrary>& pipelineLibrary)
                {
                fixed (byte* pBlob = blob)
                {
                    Result result{};
                    if (result.Failure)
                    {
                        pipelineLibrary = default;
                        return result{};
                    }
                    pipelineLibrary = new ID3D12PipelineLibrary(void);
                    return result{};
                }
            }
            publicID3D12PipelineLibrary CreatePipelineLibrary(Blob blob)
                {
                CreatePipelineLibrary(blob.BufferPointer.ToPointer(), blob.BufferSize, typeof(ID3D12PipelineLibrary).GUID, out IntPtr nativePtr).CheckError();
                return new ID3D12PipelineLibrary(void);
            }
            publicResult CreatePipelineLibrary(Blob blob, std::optional<ID3D12PipelineLibrary>& pipelineLibrary)
                {
                Result result{};
                if (result.Failure)
                {
                    pipelineLibrary = default;
                    return result{};
                }
                pipelineLibrary = new ID3D12PipelineLibrary(void);
                return result{};
            }
            public T CreatePipelineLibrary<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Blob blob) where T : ID3D12PipelineLibrary
            {
                CreatePipelineLibrary(blob.BufferPointer.ToPointer(), blob.BufferSize, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
            public Result CreatePipelineLibrary<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Blob blob, out T? pipelineLibrary) where T : ID3D12PipelineLibrary
            {
                Result result{};
                if (result.Failure)
                {
                    pipelineLibrary = default;
                    return result{};
                }
                pipelineLibrary = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }

    }
}

#endif // VORTICE_ID3D12DEVICE1_H