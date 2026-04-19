// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_VERTEXBUFFERVIEW_H
#define VORTICE_DIRECT3D12_VERTEXBUFFERVIEW_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VERTEXBUFFERVIEW_H
#define VORTICE_VORTICE_VERTEXBUFFERVIEW_H

#include <cstdint>

namespace Vortice {

struct VertexBufferView
{
public:
    constexpr VertexBufferView(uint64_t bufferLocation, uint32_t sizeInBytes, uint32_t strideInBytes)
    BufferLocation = bufferLocation;
        SizeInBytes = sizeInBytes;
        StrideInBytes = strideInBytes;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_VERTEXBUFFERVIEW_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_VERTEXBUFFERVIEW_H
