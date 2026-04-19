// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RESOURCETRANSITIONBARRIER_H
#define VORTICE_DIRECT3D12_RESOURCETRANSITIONBARRIER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RESOURCETRANSITIONBARRIER_H
#define VORTICE_VORTICE_RESOURCETRANSITIONBARRIER_H

#include <cstdint>

namespace Vortice {

struct ResourceTransitionBarrier
{
public:
    constexpr ResourceTransitionBarrier(ID3D12Resource resource, ResourceStates stateBefore, ResourceStates stateAfter, uint32_t D3D12.ResourceBarrierAllSubResources)
    ResourcePointer = resource.NativePointer;
        Subresource = subresource;
        StateBefore = stateBefore;
        StateAfter = stateAfter;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RESOURCETRANSITIONBARRIER_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RESOURCETRANSITIONBARRIER_H
