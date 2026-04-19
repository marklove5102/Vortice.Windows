// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12FENCE_H
#define VORTICE_DIRECT3D12_ID3D12FENCE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12FENCE_H
#define VORTICE_VORTICE_ID3D12FENCE_H

#include <cstdint>

namespace Vortice {

class ID3D12Fence
{
public:
    ~ID3D12Fence() = default;

    HRESULT SetEventOnCompletion() { return SetEventOnCompletion(value, IntPtr.Zero); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12FENCE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12FENCE_H
