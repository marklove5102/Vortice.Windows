// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_MIPREGION_H
#define VORTICE_DIRECT3D12_MIPREGION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MIPREGION_H
#define VORTICE_VORTICE_MIPREGION_H

#include <cstdint>

namespace Vortice {

struct MipRegion
{
public:
    constexpr MipRegion(uint32_t width, uint32_t height, uint32_t depth)
    Width = width;
        Height = height;
        Depth = depth;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_MIPREGION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_MIPREGION_H
