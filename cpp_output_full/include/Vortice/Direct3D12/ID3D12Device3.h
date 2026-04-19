// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12DEVICE3_H
#define VORTICE_DIRECT3D12_ID3D12DEVICE3_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12DEVICE3_H
#define VORTICE_VORTICE_ID3D12DEVICE3_H

#include <cstdint>

namespace Vortice {

class ID3D12Device3
{
public:
    ~ID3D12Device3() = default;

    HRESULT EnqueueMakeResident() { return EnqueueMakeResident(flags, (uint)(objects?.(Length ? Length : 0)), objects, fenceToSignal, fenceValueToSignal); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12DEVICE3_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12DEVICE3_H
