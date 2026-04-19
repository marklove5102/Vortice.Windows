// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_D3D12_H
#define VORTICE_DIRECT3D12_D3D12_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_D3D12_H
#define VORTICE_VORTICE_D3D12_H

#include <cstdint>

namespace Vortice {

class D3D12
{
public:
    ~D3D12() = default;

    static const std::vector<FeatureLevel> FeatureLevels{new[]
    {
        FeatureLevel.Level_12_1,
        FeatureLevel.Level_12_0,
        FeatureLevel.Level_11_1,
        FeatureLevel.Level_11_0
    }};
    static const GUID ExperimentalShaderModels{new("76f5573e-f13a-40f5-b297-81ce9e18933f")};
    static const GUID TiledResourceTier4{new("c9c4725f-a81a-4f56-8c5b-c51039d694fb")};
    static const GUID MetaCommand{new("C734C97E-8077-48C8-9FDC-D9D1DD31DD77")};
    static const GUID ComputeOnlyDevices{new("50f7ab08-4b6d-4e14-89a5-5d16cd272594")};

    static HRESULT D3D12EnableExperimentalFeatures() { fixed (Guid* pIIDs = features)
            return (Result)D3D12EnableExperimentalFeatures_(numFeatures, pIIDs, nullptr, nullptr); }

    static HRESULT D3D12EnableExperimentalFeatures() { fixed (Guid* pIIDs = features)
            return (Result)D3D12EnableExperimentalFeatures_((uint)features.Length, pIIDs, nullptr, nullptr); }


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_D3D12_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_D3D12_H
