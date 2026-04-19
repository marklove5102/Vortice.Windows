// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_BUILDRAYTRACINGACCELERATIONSTRUCTUREINPUTS_H
#define VORTICE_DIRECT3D12_BUILDRAYTRACINGACCELERATIONSTRUCTUREINPUTS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BUILDRAYTRACINGACCELERATIONSTRUCTUREINPUTS_H
#define VORTICE_VORTICE_BUILDRAYTRACINGACCELERATIONSTRUCTUREINPUTS_H

#include <cstdint>

namespace Vortice {

class BuildRaytracingAccelerationStructureInputs
{
public:
    ~BuildRaytracingAccelerationStructureInputs() = default;

    RaytracingAccelerationStructureType Type;
    RaytracingAccelerationStructureBuildFlags Flags;
    uint32_t NumDescs;
    ElementsLayout DescsLayout;
    Union Union;
    uint64_t InstanceDescs;

    RaytracingAccelerationStructureType Type{};
    RaytracingAccelerationStructureBuildFlags Flags{};
    uint32_t DescriptorsCount{};
    ElementsLayout Layout{};
    uint64_t InstanceDescriptions{};


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BUILDRAYTRACINGACCELERATIONSTRUCTUREINPUTS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    RaytracingAccelerationStructureType Type;
    RaytracingAccelerationStructureBuildFlags Flags;
    uint32_t NumDescs;
    ElementsLayout DescsLayout;
    Union Union;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UNION_H
#define VORTICE_VORTICE_UNION_H

#include <cstdint>

namespace Vortice {

struct Union
{
public:
    uint64_t InstanceDescs;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_UNION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_BUILDRAYTRACINGACCELERATIONSTRUCTUREINPUTS_H
