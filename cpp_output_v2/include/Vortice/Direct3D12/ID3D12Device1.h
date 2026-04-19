// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12DEVICE1_H
#define VORTICE_DIRECT3D12_ID3D12DEVICE1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12DEVICE1_H
#define VORTICE_VORTICE_ID3D12DEVICE1_H

#include <cstdint>

namespace Vortice {

class ID3D12Device1
{
public:
    ~ID3D12Device1() = default;

    ID3D12PipelineLibrary CreatePipelineLibrary() { CreatePipelineLibrary(blob.BufferPointer.ToPointer(), blob.BufferSize, typeid(ID3D12PipelineLibrary).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12PipelineLibrary(nativePtr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12DEVICE1_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12DEVICE1_H
