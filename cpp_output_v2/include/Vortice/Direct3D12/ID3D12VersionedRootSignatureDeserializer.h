// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12VERSIONEDROOTSIGNATUREDESERIALIZER_H
#define VORTICE_DIRECT3D12_ID3D12VERSIONEDROOTSIGNATUREDESERIALIZER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12VERSIONEDROOTSIGNATUREDESERIALIZER_H
#define VORTICE_VORTICE_ID3D12VERSIONEDROOTSIGNATUREDESERIALIZER_H

#include <cstdint>

namespace Vortice {

class ID3D12VersionedRootSignatureDeserializer
{
public:
    ~ID3D12VersionedRootSignatureDeserializer() = default;

    VersionedRootSignatureDescription GetRootSignatureDescAtVersion() { IntPtr ptr = GetRootSignatureDescAtVersion_(convertToVersion);

        // Marshal the result.
        auto result = new VersionedRootSignatureDescription();
        result.__MarshalFrom(ref Unsafe.AsRef<VersionedRootSignatureDescription.__Native>(ptr.ToPointer()));
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12VERSIONEDROOTSIGNATUREDESERIALIZER_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12VERSIONEDROOTSIGNATUREDESERIALIZER_H
