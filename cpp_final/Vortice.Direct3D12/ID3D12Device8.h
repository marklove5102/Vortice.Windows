// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12DEVICE8_H
#define VORTICE_ID3D12DEVICE8_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class ID3D12Device8
        {
            public T CreateCommittedResource2<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                HeapProperties heapProperties,
                HeapFlags heapFlags,
                ResourceDescription1 description,
                ResourceStates initialResourceState,
                ID3D12ProtectedResourceSession protectedSession) where T : ID3D12Resource
            {
                CreateCommittedResource2(
                    ref heapProperties,
                    heapFlags,
                    ref description,
                    initialResourceState,
                    nullptr,
                    protectedSession,
                    typeof(T).GUID, out IntPtr nativePtr).CheckError();

                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public T CreateCommittedResource2<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                HeapProperties heapProperties,
                HeapFlags heapFlags,
                ResourceDescription1 description,
                ResourceStates initialResourceState,
                ClearValue optimizedClearValue,
                ID3D12ProtectedResourceSession protectedSession,
                Format[] castableFormats) where T : ID3D12Resource
            {
                CreateCommittedResource2(
                    ref heapProperties,
                    heapFlags,
                    ref description,
                    initialResourceState,
                    optimizedClearValue,
                    protectedSession,
                    typeof(T).GUID, out IntPtr nativePtr).CheckError();

                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public T? CreatePlacedResource1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ID3D12Heap heap, ulong heapOffset, ResourceDescription1 description, ResourceStates initialState, std::optional<ClearValue> optimizedClearValue{};

                if (result.Success)
                {
                    return MarshallingHelpers.FromPointer<T>(nativePtr)!;
                }

                return default{};
            }

            public Result CreatePlacedResource1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                ID3D12Heap heap,
                ulong heapOffset,
                ResourceDescription1 description,
                ResourceStates initialState,
                out T? resource) where T : ID3D12Resource
            {
                Result result{};

                if (result.Failure)
                {
                    resource = default;
                    return result{};
                }

                resource = MarshallingHelpers.FromPointer<T>(nativePtr)!;
                return result{};
            }

            public Result CreatePlacedResource1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                ID3D12Heap heap,
                ulong heapOffset,
                ResourceDescription1 description,
                ResourceStates initialState,
                ClearValue optimizedClearValue,
                out T? resource) where T : ID3D12Resource
            {
                Result result{};

                if (result.Failure)
                {
                    resource = default;
                    return result{};
                }

                resource = MarshallingHelpers.FromPointer<T>(nativePtr)!;
                return result{};
            }
        }


    }
}

#endif // VORTICE_ID3D12DEVICE8_H