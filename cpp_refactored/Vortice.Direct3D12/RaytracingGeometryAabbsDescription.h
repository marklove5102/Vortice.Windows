// Copyright (c) Contributors.

#ifndef VORTICE_RAYTRACINGGEOMETRYAABBSDESCRIPTION_H
#define VORTICE_RAYTRACINGGEOMETRYAABBSDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct RaytracingGeometryAabbsDescription
        {
                                public RaytracingGeometryAabbsDescription(uint64_t aabbCount, GpuVirtualAddressAndStride aabbs)
        {
                AABBCount = aabbCount;
                AABBs = aabbs;
            }
        }


    }
}

#endif // VORTICE_RAYTRACINGGEOMETRYAABBSDESCRIPTION_H