// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_HITGROUPDESCRIPTION_H
#define VORTICE_DIRECT3D12_HITGROUPDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_HITGROUPDESCRIPTION_H
#define VORTICE_VORTICE_HITGROUPDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct HitGroupDescription : public IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
{
public:
    constexpr HitGroupDescription(std::string hitGroupExport, HitGroupType type, std::string "", std::string "", std::string "")
    HitGroupExport = hitGroupExport;
        Type = type;
        AnyHitShaderImport = anyHitShaderImport;
        ClosestHitShaderImport = closestHitShaderImport;
        IntersectionShaderImport = intersectionShaderImport;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_HITGROUPDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_HITGROUPDESCRIPTION_H
