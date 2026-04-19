// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_DRAWINDEXEDARGUMENTS_H
#define VORTICE_DIRECT3D12_DRAWINDEXEDARGUMENTS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DRAWINDEXEDARGUMENTS_H
#define VORTICE_VORTICE_DRAWINDEXEDARGUMENTS_H

#include <cstdint>

namespace Vortice {

struct DrawIndexedArguments
{
public:
    constexpr DrawIndexedArguments(uint32_t indexCountPerInstance, uint32_t instanceCount, uint32_t startIndexLocation, int32_t baseVertexLocation, uint32_t startInstanceLocation)
    IndexCountPerInstance = indexCountPerInstance;
        InstanceCount = instanceCount;
        StartIndexLocation = startIndexLocation;
        BaseVertexLocation = baseVertexLocation;
        StartInstanceLocation = startInstanceLocation;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_DRAWINDEXEDARGUMENTS_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_DRAWINDEXEDARGUMENTS_H
