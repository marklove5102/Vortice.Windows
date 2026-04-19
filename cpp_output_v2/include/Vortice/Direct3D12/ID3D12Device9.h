// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12DEVICE9_H
#define VORTICE_DIRECT3D12_ID3D12DEVICE9_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12DEVICE9_H
#define VORTICE_VORTICE_ID3D12DEVICE9_H

#include <cstdint>

namespace Vortice {

class ID3D12Device9
{
public:
    ~ID3D12Device9() = default;

    ID3D12CommandQueue CreateCommandQueue1() { CreateCommandQueue1(description, creatorID, typeid(ID3D12CommandQueue).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12CommandQueue(nativePtr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12DEVICE9_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12DEVICE9_H
