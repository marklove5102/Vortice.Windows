// Copyright (c) Contributors.

#ifndef VORTICE_RAYTRACINGGEOMETRYDESCRIPTION_H
#define VORTICE_RAYTRACINGGEOMETRYDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct RaytracingGeometryDescription
        {
                                public RaytracingGeometryDescription(RaytracingGeometryTrianglesDescription triangles, RaytracingGeometryFlags flags{};
                Flags = flags;
                Triangles = triangles;
            }

                                public RaytracingGeometryDescription(RaytracingGeometryAabbsDescription aabbs, RaytracingGeometryFlags flags{};
                Flags = flags;
                AABBs = aabbs;
            }
        }


    }
}

#endif // VORTICE_RAYTRACINGGEOMETRYDESCRIPTION_H