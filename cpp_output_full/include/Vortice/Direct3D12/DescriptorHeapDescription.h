// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_DESCRIPTORHEAPDESCRIPTION_H
#define VORTICE_DIRECT3D12_DESCRIPTORHEAPDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DESCRIPTORHEAPDESCRIPTION_H
#define VORTICE_VORTICE_DESCRIPTORHEAPDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct DescriptorHeapDescription
{
public:
    constexpr DescriptorHeapDescription(DescriptorHeapType type, uint32_t descriptorCount, DescriptorHeapFlags DescriptorHeapFlags.None, uint32_t 0)
    Type = type;
        DescriptorCount = descriptorCount;
        Flags = flags;
        NodeMask = nodeMask;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_DESCRIPTORHEAPDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_DESCRIPTORHEAPDESCRIPTION_H
