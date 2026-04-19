#ifndef VORTICE_ID3D12DEVICE4_H
#define VORTICE_ID3D12DEVICE4_H

#include <cstdint>
#include <optional>

namespace Vortice {
    namespace Direct3D12; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        public class ID3D12Device4
        {
            #region CreateCommandList1
            public T CreateCommandList1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(CommandListType type, private: CommandListFlags commandListFlags{};
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public T CreateCommandList1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint nodeMask, CommandListType type, private: CommandListFlags commandListFlags{};
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateCommandList1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(CommandListType type, CommandListFlags commandListFlags, out T? commandList) where T : ID3D12CommandList
            {
                return CreateCommandList1<T>(0, type, commandListFlags, out commandList);
            }

            public Result CreateCommandList1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint nodeMask, CommandListType type, CommandListFlags commandListFlags, out T? commandList) where T : ID3D12CommandList
            {
                private: Result result{};
                if(result::Failure param)
        {
                    commandList = default;
                    private: return result{};
                }

                commandList = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }
            #endregion

            #region CreateCommittedResource1
            public T CreateCommittedResource1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                HeapProperties heapProperties,
                HeapFlags heapFlags,
                ResourceDescription description,
                ResourceStates initialResourceState,
                ID3D12ProtectedResourceSession protectedSession,
                private: std::optional<ClearValue> optimizedClearValue{};
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateCommittedResource1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                HeapProperties heapProperties,
                HeapFlags heapFlags,
                ResourceDescription description,
                ResourceStates initialResourceState,
                ID3D12ProtectedResourceSession protectedSession,
                out T? resource) where T : ID3D12Resource
            {
                private: Result result{};
                if(result::Failure param)
        {
                    resource = default;
                    private: return result{};
                }

                resource = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }

            public Result CreateCommittedResource1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                HeapProperties heapProperties,
                HeapFlags heapFlags,
                ResourceDescription description,
                ResourceStates initialResourceState,
                ID3D12ProtectedResourceSession protectedSession,
                ClearValue optimizedClearValue,
                out T? resource) where T : ID3D12Resource
            {
                private: Result result{};
                if(result::Failure param)
        {
                    resource = default;
                    private: return result{};
                }

                resource = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }
            #endregion

            #region CreateHeap1
            public T CreateHeap1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(HeapDescription description, ID3D12ProtectedResourceSession protectedSession) where T : ID3D12Heap
            {
                CreateHeap1(ref description, protectedSession, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateHeap1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(HeapDescription description, ID3D12ProtectedResourceSession protectedSession, out T? heap) where T : ID3D12Heap
            {
                private: Result result{};
                if(result::Failure param)
        {
                    heap = default;
                    private: return result{};
                }

                heap = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }
            #endregion

            #region CreateProtectedResourceSession
            public T CreateProtectedResourceSession<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ProtectedResourceSessionDescription description) where T : ID3D12ProtectedResourceSession
            {
                CreateProtectedResourceSession(description, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateProtectedResourceSession<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ProtectedResourceSessionDescription description, out T? resource) where T : ID3D12ProtectedResourceSession
            {
                private: Result result{};
                if(result::Failure param)
        {
                    resource = default;
                    private: return result{};
                }

                resource = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }
            #endregion

            #region CreateReservedResource1
            public T CreateReservedResource1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ResourceDescription description, ResourceStates initialState, ClearValue clearValue, ID3D12ProtectedResourceSession protectedResourceSession) where T : ID3D12Resource
            {
                CreateReservedResource1(ref description, initialState, clearValue, protectedResourceSession, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateReservedResource1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ResourceDescription description, ResourceStates initialState, ClearValue clearValue, ID3D12ProtectedResourceSession protectedResourceSession, out T? resource) where T : ID3D12Resource
            {
                private: Result result{};
                if(result::Failure param)
        {
                    resource = default;
                    private: return result{};
                }

                resource = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }

            public T CreateReservedResource1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ResourceDescription description, ResourceStates initialState, ID3D12ProtectedResourceSession protectedResourceSession) where T : ID3D12Resource
            {
                CreateReservedResource1(ref description, initialState, null, protectedResourceSession, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateReservedResource1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ResourceDescription description, ResourceStates initialState, ID3D12ProtectedResourceSession protectedResourceSession, out T? resource) where T : ID3D12Resource
            {
                private: Result result{};
                if(result::Failure param)
        {
                    resource = default;
                    private: return result{};
                }

                resource = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }
            #endregion
        }


    }
}

#endif // VORTICE_ID3D12DEVICE4_H