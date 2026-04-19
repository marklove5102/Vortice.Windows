// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_DISPATCHGRAPHDESCRIPTION_H
#define VORTICE_DIRECT3D12_DISPATCHGRAPHDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DISPATCHGRAPHDESCRIPTION_H
#define VORTICE_VORTICE_DISPATCHGRAPHDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct DispatchGraphDescription
{
public:
    DispatchMode Mode;
    _Anonymous_e__Union Anonymous;
    NodeCpuInput NodeCPUInput;
    uint64_t NodeGPUInput;
    MultiNodeCpuInput MultiNodeCPUInput;
    uint64_t MultiNodeGPUInput;


};

} // namespace Vortice

#endif // VORTICE_VORTICE_DISPATCHGRAPHDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE__ANONYMOUS_E__UNION_H
#define VORTICE_VORTICE__ANONYMOUS_E__UNION_H

#include <cstdint>

namespace Vortice {

struct _Anonymous_e__Union
{
public:
    NodeCpuInput NodeCPUInput;
    uint64_t NodeGPUInput;
    MultiNodeCpuInput MultiNodeCPUInput;
    uint64_t MultiNodeGPUInput;

};

} // namespace Vortice

#endif // VORTICE_VORTICE__ANONYMOUS_E__UNION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_DISPATCHGRAPHDESCRIPTION_H
