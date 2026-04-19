// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12VERSIONEDROOTSIGNATUREDESERIALIZER_H
#define VORTICE_ID3D12VERSIONEDROOTSIGNATUREDESERIALIZER_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class ID3D12VersionedRootSignatureDeserializer
        {
            VersionedRootSignatureDescription GetRootSignatureDescAtVersion(RootSignatureVersion convertToVersion)
        {
                void* ptr{};

                // Marshal the result.
                var result{};
                result.__MarshalFrom(ref Unsafe.AsRef<VersionedRootSignatureDescription.__Native>(ptr.ToPointer()));
                return result{};
            }
        }


    }
}

#endif // VORTICE_ID3D12VERSIONEDROOTSIGNATUREDESERIALIZER_H