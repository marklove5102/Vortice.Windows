// Copyright (c) Contributors.

#ifndef VORTICE_BUILDRAYTRACINGACCELERATIONSTRUCTUREDESCRIPTION_H
#define VORTICE_BUILDRAYTRACINGACCELERATIONSTRUCTUREDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct BuildRaytracingAccelerationStructureDescription
        {
                                                        public BuildRaytracingAccelerationStructureDescription(uint64_t destinationAccelerationStructureData, BuildRaytracingAccelerationStructureInputs inputs, uint64_t sourceAccelerationStructureData, uint64_t scratchAccelerationStructureData)
        {
                DestinationAccelerationStructureData = destinationAccelerationStructureData;
                Inputs = inputs;
                SourceAccelerationStructureData = sourceAccelerationStructureData;
                ScratchAccelerationStructureData = scratchAccelerationStructureData;
            }
        }


    }
}

#endif // VORTICE_BUILDRAYTRACINGACCELERATIONSTRUCTUREDESCRIPTION_H