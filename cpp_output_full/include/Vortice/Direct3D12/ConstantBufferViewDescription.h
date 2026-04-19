// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_CONSTANTBUFFERVIEWDESCRIPTION_H
#define VORTICE_DIRECT3D12_CONSTANTBUFFERVIEWDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CONSTANTBUFFERVIEWDESCRIPTION_H
#define VORTICE_VORTICE_CONSTANTBUFFERVIEWDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ConstantBufferViewDescription
{
public:
    constexpr ConstantBufferViewDescription(uint64_t bufferLocation, uint32_t sizeInBytes)
    BufferLocation = bufferLocation;
        SizeInBytes = sizeInBytes;
    constexpr ConstantBufferViewDescription(ID3D12Resource resource, uint32_t 0)
    BufferLocation = resource.GPUVirtualAddress;
        SizeInBytes = sizeInBytes == 0 ? (uint)resource.Description.Width : sizeInBytes;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_CONSTANTBUFFERVIEWDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_CONSTANTBUFFERVIEWDESCRIPTION_H
