// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RAYTRACINGGEOMETRYDESCRIPTION_H
#define VORTICE_DIRECT3D12_RAYTRACINGGEOMETRYDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RAYTRACINGGEOMETRYDESCRIPTION_H
#define VORTICE_VORTICE_RAYTRACINGGEOMETRYDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct RaytracingGeometryDescription
{
public:
    constexpr RaytracingGeometryDescription(RaytracingGeometryTrianglesDescription triangles, RaytracingGeometryFlags RaytracingGeometryFlags.None)
    Type = RaytracingGeometryType.Triangles;
        Flags = flags;
        Triangles = triangles;
    constexpr RaytracingGeometryDescription(RaytracingGeometryAabbsDescription aabbs, RaytracingGeometryFlags RaytracingGeometryFlags.None)
    Type = RaytracingGeometryType.ProceduralPrimitiveAabbs;
        Flags = flags;
        AABBs = aabbs;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RAYTRACINGGEOMETRYDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RAYTRACINGGEOMETRYDESCRIPTION_H
