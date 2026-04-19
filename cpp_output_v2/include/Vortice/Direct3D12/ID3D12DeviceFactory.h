// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12DEVICEFACTORY_H
#define VORTICE_DIRECT3D12_ID3D12DEVICEFACTORY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12DEVICEFACTORY_H
#define VORTICE_VORTICE_ID3D12DEVICEFACTORY_H

#include <cstdint>

namespace Vortice {

class ID3D12DeviceFactory
{
public:
    ~ID3D12DeviceFactory() = default;

    HRESULT EnableExperimentalFeatures() { fixed (Guid* pIIDs = features)
            return EnableExperimentalFeatures(numFeatures, pIIDs, nullptr, nullptr); }

    HRESULT EnableExperimentalFeatures() { fixed (Guid* pIIDs = features)
            return (Result)EnableExperimentalFeatures((uint)features.Length, pIIDs, nullptr, nullptr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12DEVICEFACTORY_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12DEVICEFACTORY_H
