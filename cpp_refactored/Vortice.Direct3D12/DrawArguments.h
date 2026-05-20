// Copyright (c) Contributors.

#ifndef VORTICE_DRAWARGUMENTS_H
#define VORTICE_DRAWARGUMENTS_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct DrawArguments
        {
                                        public DrawArguments(uint32_t vertexCountPerInstance, uint32_t instanceCount, uint32_t startVertexLocation, uint32_t startInstanceLocation)
        {
                VertexCountPerInstance = vertexCountPerInstance;
                InstanceCount = instanceCount;
                StartVertexLocation = startVertexLocation;
                StartInstanceLocation = startInstanceLocation;
            }
        }


    }
}

#endif // VORTICE_DRAWARGUMENTS_H