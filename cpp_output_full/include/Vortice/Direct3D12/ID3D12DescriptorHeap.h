// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12DESCRIPTORHEAP_H
#define VORTICE_DIRECT3D12_ID3D12DESCRIPTORHEAP_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>
#include <windows.h>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12DESCRIPTORHEAP_H
#define VORTICE_VORTICE_ID3D12DESCRIPTORHEAP_H

#include <cstdint>

namespace Vortice {

class ID3D12DescriptorHeap
{
public:
    ~ID3D12DescriptorHeap() = default;


private:
    uint32_t GetCPUDescriptorHandleForHeapStart__vtbl_index{9};
    uint32_t GetGPUDescriptorHandleForHeapStart__vtbl_index{10};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12DESCRIPTORHEAP_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12DESCRIPTORHEAP_H
