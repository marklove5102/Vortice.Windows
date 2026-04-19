// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12DEVICE9_H
#define VORTICE_ID3D12DEVICE9_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class ID3D12Device9
        {
            ID3D12CommandQueue CreateCommandQueue1(const CommandQueueDescription& description, Guid creatorID)
        {
                CreateCommandQueue1(description, creatorID, typeof(ID3D12CommandQueue).GUID, out IntPtr nativePtr).CheckError();
                return new ID3D12CommandQueue(nativePtr param) = 0;
            }

            Result CreateCommandQueue1(const CommandQueueDescription& description, Guid creatorID, std::optional<ID3D12CommandQueue>& commandQueue)
        {
                Result result{};
                if (result.Failure)
                {
                    commandQueue = default;
                    return result{};
                }

                commandQueue = new ID3D12CommandQueue(nativePtr param) = 0;
                return result{};
            }

            public T CreateCommandQueue1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(in CommandQueueDescription description, Guid creatorID) where T : ID3D12CommandQueue
            {
                CreateCommandQueue1(description, creatorID, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateCommandQueue1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(in CommandQueueDescription description, Guid creatorID, out T? commandQueue) where T : ID3D12CommandQueue
            {
                Result result{};
                if (result.Failure)
                {
                    commandQueue = default;
                    return result{};
                }

                commandQueue = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            public T CreateShaderCacheSession<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ShaderCacheSessionDescription description) where T : ID3D12ShaderCacheSession
            {
                CreateShaderCacheSession(ref description, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateShaderCacheSession<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ShaderCacheSessionDescription description, out T? session) where T : ID3D12ShaderCacheSession
            {
                Result result{};
                if (result.Failure)
                {
                    session = default;
                    return result{};
                }

                session = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_ID3D12DEVICE9_H