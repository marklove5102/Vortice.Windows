// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12DEVICECONFIGURATION_H
#define VORTICE_ID3D12DEVICECONFIGURATION_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class ID3D12DeviceConfiguration
        {
            ID3D12VersionedRootSignatureDeserializer CreateVersionedRootSignatureDeserializer(void* blob, uintptr_t size)
        {
                CreateVersionedRootSignatureDeserializer(blob.ToPointer(), size, typeof(ID3D12VersionedRootSignatureDeserializer).GUID, out IntPtr nativePtr).CheckError();
                return new(nativePtr)!;
            }

            Result CreateVersionedRootSignatureDeserializer(void* blob, uintptr_t size, std::optional<ID3D12VersionedRootSignatureDeserializer>& deserializer)
        {
                Result result{};

                if (result.Failure)
                {
                    deserializer = default;
                    return result{};
                }

                deserializer = new(nativePtr);
                return result{};
            }

            public T CreateVersionedRootSignatureDeserializer<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr blob, nuint size) where T : ID3D12VersionedRootSignatureDeserializer
            {
                CreateVersionedRootSignatureDeserializer(blob.ToPointer(), size, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateVersionedRootSignatureDeserializer<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr blob, nuint size, out T? deserializer) where T : ID3D12VersionedRootSignatureDeserializer
            {
                Result result{};

                if (result.Failure)
                {
                    deserializer = default;
                    return result{};
                }

                deserializer = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_ID3D12DEVICECONFIGURATION_H