// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_DRAWARGUMENTS_H
#define VORTICE_DIRECT3D12_DRAWARGUMENTS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DRAWARGUMENTS_H
#define VORTICE_VORTICE_DRAWARGUMENTS_H

#include <cstdint>

namespace Vortice {

struct DrawArguments
{
public:
    constexpr DrawArguments(uint32_t vertexCountPerInstance, uint32_t instanceCount, uint32_t startVertexLocation, uint32_t startInstanceLocation)
    VertexCountPerInstance = vertexCountPerInstance;
        InstanceCount = instanceCount;
        StartVertexLocation = startVertexLocation;
        StartInstanceLocation = startInstanceLocation;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_DRAWARGUMENTS_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_DRAWARGUMENTS_H
