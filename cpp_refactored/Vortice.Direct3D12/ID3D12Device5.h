// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12DEVICE5_H
#define VORTICE_ID3D12DEVICE5_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class ID3D12Device5
        {
                                public T CreateMetaCommand<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid commandId) where T : ID3D12MetaCommand
            {
                CreateMetaCommand(commandId, 0, IntPtr.Zero, 0, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                    public Result CreateMetaCommand<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid commandId, out T? metaCommand) where T : ID3D12MetaCommand
            {
                Result result{};
                if (result.Failure)
                {
                    metaCommand = default;
                    return result{};
                }

                metaCommand = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

                                        public T CreateMetaCommand<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid commandId, uint nodeMask) where T : ID3D12MetaCommand
            {
                CreateMetaCommand(commandId, nodeMask, IntPtr.Zero, 0, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                            public Result CreateMetaCommand<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid commandId, uint nodeMask, out T? metaCommand) where T : ID3D12MetaCommand
            {
                Result result{};
                if (result.Failure)
                {
                    metaCommand = default;
                    return result{};
                }

                metaCommand = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

                                    public T CreateMetaCommand<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid commandId, Blob blob) where T : ID3D12MetaCommand
            {
                CreateMetaCommand(commandId, 0, blob.BufferPointer, blob.BufferSize, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                        public Result CreateMetaCommand<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid commandId, Blob blob, out T? metaCommand) where T : ID3D12MetaCommand
            {
                Result result{};
                if (result.Failure)
                {
                    metaCommand = default;
                    return result{};
                }

                metaCommand = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

                                            public T CreateMetaCommand<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid commandId, uint nodeMask, Blob blob) where T : ID3D12MetaCommand
            {
                CreateMetaCommand(commandId, nodeMask, blob.BufferPointer, blob.BufferSize, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                                public Result CreateMetaCommand<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid commandId, uint nodeMask, Blob blob, out T? metaCommand) where T : ID3D12MetaCommand
            {
                Result result{};
                if (result.Failure)
                {
                    metaCommand = default;
                    return result{};
                }

                metaCommand = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
                                public T CreateStateObject<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(StateObjectDescription description) where T : ID3D12StateObject
            {
                CreateStateObject(description, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                    public Result CreateStateObject<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(StateObjectDescription description, out T? stateObject) where T : ID3D12StateObject
            {
                Result result{};
                if (result.Failure)
                {
                    stateObject = default;
                    return result{};
                }

                stateObject = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

                                ID3D12StateObject CreateStateObject(StateObjectDescription description)
        {
                CreateStateObject(description, typeof(ID3D12StateObject).GUID, out IntPtr nativePtr).CheckError();
                return new(nativePtr param) = 0;
            }

                                    Result CreateStateObject(StateObjectDescription description, std::optional<ID3D12StateObject>& stateObject)
        {
                Result result{};
                if (result.Failure)
                {
                    stateObject = default;
                    return result{};
                }

                stateObject = new(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_ID3D12DEVICE5_H