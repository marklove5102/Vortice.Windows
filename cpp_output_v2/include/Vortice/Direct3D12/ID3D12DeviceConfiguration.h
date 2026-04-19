// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12DEVICECONFIGURATION_H
#define VORTICE_DIRECT3D12_ID3D12DEVICECONFIGURATION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12DEVICECONFIGURATION_H
#define VORTICE_VORTICE_ID3D12DEVICECONFIGURATION_H

#include <cstdint>

namespace Vortice {

class ID3D12DeviceConfiguration
{
public:
    ~ID3D12DeviceConfiguration() = default;

    ID3D12VersionedRootSignatureDeserializer CreateVersionedRootSignatureDeserializer() { CreateVersionedRootSignatureDeserializer(blob.ToPointer(), size, typeid(ID3D12VersionedRootSignatureDeserializer).GUID, out IntPtr nativePtr).CheckError();
        return new(nativePtr)!; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12DEVICECONFIGURATION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12DEVICECONFIGURATION_H
