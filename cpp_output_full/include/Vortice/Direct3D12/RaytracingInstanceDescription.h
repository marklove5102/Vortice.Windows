// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RAYTRACINGINSTANCEDESCRIPTION_H
#define VORTICE_DIRECT3D12_RAYTRACINGINSTANCEDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RAYTRACINGINSTANCEDESCRIPTION_H
#define VORTICE_VORTICE_RAYTRACINGINSTANCEDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct RaytracingInstanceDescription
{
public:
    Matrix3x4 Transform;
    UInt24 InstanceID;
    uint8_t InstanceMask;
    UInt24 InstanceContributionToHitGroupIndex;
    RaytracingInstanceFlags Flags;
    uint64_t AccelerationStructure;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RAYTRACINGINSTANCEDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RAYTRACINGINSTANCEDESCRIPTION_H
