// Copyright (c) Contributors.

#ifndef VORTICE_ID2D1GEOMETRYGROUP_H
#define VORTICE_ID2D1GEOMETRYGROUP_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace Direct2D1 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct2D1;

        class ID2D1GeometryGroup
        {
            public ID2D1Geometry[] GetSourceGeometry()
            {
                return GetSourceGeometry(SourceGeometryCount param) = 0;
            }

            public ID2D1Geometry[] GetSourceGeometry(uint geometriesCount)
            {
                var geometries{};
                GetSourceGeometries(geometries, geometriesCount);
                return geometries{};
            }

            void GetSourceGeometry(const std::vector<ID2D1Geometry>& geometries)
        {
                GetSourceGeometries(geometries, (uint)geometries.Length);
            }
        }


    }
}

#endif // VORTICE_ID2D1GEOMETRYGROUP_H