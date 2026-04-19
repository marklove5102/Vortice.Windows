// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_INDEXBUFFERVIEW_H
#define VORTICE_DIRECT3D12_INDEXBUFFERVIEW_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_INDEXBUFFERVIEW_H
#define VORTICE_VORTICE_INDEXBUFFERVIEW_H

#include <cstdint>

namespace Vortice {

struct IndexBufferView
{
public:
    constexpr IndexBufferView(uint64_t bufferLocation, uint32_t sizeInBytes, Format format)
    BufferLocation = bufferLocation;
        SizeInBytes = sizeInBytes;
        Format = format;
    constexpr IndexBufferView(uint64_t bufferLocation, uint32_t sizeInBytes, bool false)
    {}

};

} // namespace Vortice

#endif // VORTICE_VORTICE_INDEXBUFFERVIEW_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_INDEXBUFFERVIEW_H
