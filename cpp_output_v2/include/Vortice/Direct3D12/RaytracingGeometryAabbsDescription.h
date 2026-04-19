// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RAYTRACINGGEOMETRYAABBSDESCRIPTION_H
#define VORTICE_DIRECT3D12_RAYTRACINGGEOMETRYAABBSDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RAYTRACINGGEOMETRYAABBSDESCRIPTION_H
#define VORTICE_VORTICE_RAYTRACINGGEOMETRYAABBSDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct RaytracingGeometryAabbsDescription
{
public:
    constexpr RaytracingGeometryAabbsDescription(uint64_t aabbCount, GpuVirtualAddressAndStride aabbs)
    AABBCount = aabbCount;
        AABBs = aabbs;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RAYTRACINGGEOMETRYAABBSDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RAYTRACINGGEOMETRYAABBSDESCRIPTION_H
