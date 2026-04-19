// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_BUILDRAYTRACINGACCELERATIONSTRUCTUREDESCRIPTION_H
#define VORTICE_DIRECT3D12_BUILDRAYTRACINGACCELERATIONSTRUCTUREDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BUILDRAYTRACINGACCELERATIONSTRUCTUREDESCRIPTION_H
#define VORTICE_VORTICE_BUILDRAYTRACINGACCELERATIONSTRUCTUREDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct BuildRaytracingAccelerationStructureDescription
{
public:
    constexpr BuildRaytracingAccelerationStructureDescription(uint64_t destinationAccelerationStructureData, BuildRaytracingAccelerationStructureInputs inputs, uint64_t sourceAccelerationStructureData, uint64_t scratchAccelerationStructureData)
    DestinationAccelerationStructureData = destinationAccelerationStructureData;
        Inputs = inputs;
        SourceAccelerationStructureData = sourceAccelerationStructureData;
        ScratchAccelerationStructureData = scratchAccelerationStructureData;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BUILDRAYTRACINGACCELERATIONSTRUCTUREDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_BUILDRAYTRACINGACCELERATIONSTRUCTUREDESCRIPTION_H
