// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECT3D12_DISPATCHGRAPHDESCRIPTION_H
#define VORTICE_VORTICE_DIRECT3D12_DISPATCHGRAPHDESCRIPTION_H

#include <cstdint>

namespace Vortice::Direct3D12 {

struct _Anonymous_e__Union
{
    NodeCpuInput NodeCPUInput;
    uint64_t NodeGPUInput;
    MultiNodeCpuInput MultiNodeCPUInput;
    uint64_t MultiNodeGPUInput;

};


} // namespace Vortice::Direct3D12

#endif // VORTICE_VORTICE_DIRECT3D12_DISPATCHGRAPHDESCRIPTION_H
