// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12DEVICE2_H
#define VORTICE_ID3D12DEVICE2_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class ID3D12Device2
        {
            public ID3D12PipelineState CreatePipelineState<TData>(TData data) where TData : unmanaged
            {

                PipelineStateStreamDescription description{};

                CreatePipelineState(description, typeof(ID3D12PipelineState).GUID, out IntPtr nativePtr).CheckError();
                return new ID3D12PipelineState(nativePtr param) = 0;
            }

            public T CreatePipelineState<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T, TData>(TData data)
                where T : ID3D12PipelineState
                where TData : unmanaged
            {
                PipelineStateStreamDescription description{};

                return CreatePipelineState<T>(description);
            }

            public T CreatePipelineState<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(PipelineStateStreamDescription description) where T : ID3D12PipelineState
            {
                CreatePipelineState(description, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreatePipelineState<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(PipelineStateStreamDescription description, out T? pipelineState) where T : ID3D12PipelineState
            {
                Result result{};
                if (result.Failure)
                {
                    pipelineState = default;
                    return result{};
                }

                pipelineState = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_ID3D12DEVICE2_H