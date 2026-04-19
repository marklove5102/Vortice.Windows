// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_DXCORE_H
#define VORTICE_DIRECTX_DXCORE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DXCORE_H
#define VORTICE_VORTICE_DXCORE_H

#include <cstdint>

namespace Vortice {

class DXCore
{
public:
    ~DXCore() = default;

    static const GUID D3D11_Graphics{new("8c47866b-7583-450d-f0f0-6bada895af4b")};
    static const GUID D3D12_Graphics{new("0c9ece4d-2f6e-4f01-8c96-e89e331b47b1")};
    static const GUID D3D12_CoreCompute{new("248e2800-a793-4724-abaa-23a6de1be090")};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DXCORE_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_DXCORE_H
