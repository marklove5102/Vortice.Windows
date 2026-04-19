// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12RESOURCE_H
#define VORTICE_DIRECT3D12_ID3D12RESOURCE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12RESOURCE_H
#define VORTICE_VORTICE_ID3D12RESOURCE_H

#include <cstdint>

namespace Vortice {

class ID3D12Resource
{
public:
    ~ID3D12Resource() = default;

    HeapProperties get_HeapProperties() const { GetHeapProperties(out HeapProperties properties, out _);
            return properties; }
    HeapFlags get_HeapFlags() const { GetHeapProperties(out _, out HeapFlags heapFlags);
            return heapFlags; }

    static uint32_t CalculateSubResourceIndex() { return mipSlice + arraySlice * mipLevels + planeSlice * mipLevels * arraySize; }

    static void DecomposeSubresource() { mipSlice = subresource % mipLevels;
        arraySlice = (subresource / mipLevels) % arraySize;
        planeSlice = subresource / (mipLevels * arraySize); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12RESOURCE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12RESOURCE_H
