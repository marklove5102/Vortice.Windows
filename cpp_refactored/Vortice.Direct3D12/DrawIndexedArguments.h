// Copyright (c) Contributors.

#ifndef VORTICE_DRAWINDEXEDARGUMENTS_H
#define VORTICE_DRAWINDEXEDARGUMENTS_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct DrawIndexedArguments
        {
                                            public DrawIndexedArguments(uint32_t indexCountPerInstance, uint32_t instanceCount, uint32_t startIndexLocation, int32_t baseVertexLocation, uint32_t startInstanceLocation)
        {
                IndexCountPerInstance = indexCountPerInstance;
                InstanceCount = instanceCount;
                StartIndexLocation = startIndexLocation;
                BaseVertexLocation = baseVertexLocation;
                StartInstanceLocation = startInstanceLocation;
            }
        }


    }
}

#endif // VORTICE_DRAWINDEXEDARGUMENTS_H