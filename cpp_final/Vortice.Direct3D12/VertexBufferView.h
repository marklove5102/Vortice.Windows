// Copyright (c) Contributors.

#ifndef VORTICE_VERTEXBUFFERVIEW_H
#define VORTICE_VERTEXBUFFERVIEW_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct VertexBufferView
        {
                                    public VertexBufferView(uint64_t bufferLocation, uint32_t sizeInBytes, uint32_t strideInBytes)
        {
                BufferLocation = bufferLocation;
                SizeInBytes = sizeInBytes;
                StrideInBytes = strideInBytes;
            }
        }


    }
}

#endif // VORTICE_VERTEXBUFFERVIEW_H