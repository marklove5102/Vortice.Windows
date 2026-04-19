// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ID2D1GEOMETRYGROUP_H
#define VORTICE_DIRECT2D1_ID2D1GEOMETRYGROUP_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID2D1GEOMETRYGROUP_H
#define VORTICE_VORTICE_ID2D1GEOMETRYGROUP_H

#include <cstdint>

namespace Vortice {

class ID2D1GeometryGroup
{
public:
    ~ID2D1GeometryGroup() = default;

    void GetSourceGeometry() { GetSourceGeometries(geometries, (uint)geometries.Length); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID2D1GEOMETRYGROUP_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ID2D1GEOMETRYGROUP_H
