// Copyright (c) Contributors.

#ifndef VORTICE_RAYTRACINGGEOMETRYTRIANGLESDESCRIPTION_H
#define VORTICE_RAYTRACINGGEOMETRYTRIANGLESDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct RaytracingGeometryTrianglesDescription
        {
                                                                                            public RaytracingGeometryTrianglesDescription(const GpuVirtualAddressAndStride& vertexBuffer, Format vertexFormat, uint32_t vertexCount, uint64_t transform3x4{};
                IndexFormat = indexFormat;
                VertexFormat = vertexFormat;
                IndexCount = indexCount;
                VertexCount = vertexCount;
                IndexBuffer = indexBuffer;
                VertexBuffer = vertexBuffer;
            }
        }


    }
}

#endif // VORTICE_RAYTRACINGGEOMETRYTRIANGLESDESCRIPTION_H