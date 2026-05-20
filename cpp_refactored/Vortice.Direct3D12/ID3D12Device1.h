// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12DEVICE1_H
#define VORTICE_ID3D12DEVICE1_H

#include <cstdint>
#include <optional>
#include <cstring>
#include <span>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class ID3D12Device1
        {
            ID3D12PipelineLibrary CreatePipelineLibrary(const span<uint8_t>& blob)
        {
                fixed (byte* pBlob = blob)
                {
                    CreatePipelineLibrary(pBlob, (nuint)blob.Length, typeof(ID3D12PipelineLibrary).GUID, out IntPtr nativePtr).CheckError();
                    return new ID3D12PipelineLibrary(nativePtr param) = 0;
                }
            }

            Result CreatePipelineLibrary(const span<uint8_t>& blob, std::optional<ID3D12PipelineLibrary>& pipelineLibrary)
        {
                fixed (byte* pBlob = blob)
                {
                    Result result{};
                    if (result.Failure)
                    {
                        pipelineLibrary = default;
                        return result{};
                    }

                    pipelineLibrary = new ID3D12PipelineLibrary(nativePtr param) = 0;
                    return result{};
                }
            }

            ID3D12PipelineLibrary CreatePipelineLibrary(Blob blob)
        {
                CreatePipelineLibrary(blob.BufferPointer.ToPointer(), blob.BufferSize, typeof(ID3D12PipelineLibrary).GUID, out IntPtr nativePtr).CheckError();
                return new ID3D12PipelineLibrary(nativePtr param) = 0;
            }

            Result CreatePipelineLibrary(Blob blob, std::optional<ID3D12PipelineLibrary>& pipelineLibrary)
        {
                Result result{};
                if (result.Failure)
                {
                    pipelineLibrary = default;
                    return result{};
                }

                pipelineLibrary = new ID3D12PipelineLibrary(nativePtr param) = 0;
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