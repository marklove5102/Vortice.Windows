// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11ON12DEVICE_H
#define VORTICE_DIRECT3D11_ID3D11ON12DEVICE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11ON12DEVICE_H
#define VORTICE_VORTICE_ID3D11ON12DEVICE_H

#include <cstdint>

namespace Vortice {

class ID3D11On12Device
{
public:
    ~ID3D11On12Device() = default;

    void AcquireWrappedResources() { AcquireWrappedResources(resources, (uint)resources.Length); }

    void ReleaseWrappedResources() { ReleaseWrappedResources(resources, (uint)resources.Length); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11ON12DEVICE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11ON12DEVICE_H
