// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_NODEMASK_H
#define VORTICE_DIRECT3D12_NODEMASK_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_NODEMASK_H
#define VORTICE_VORTICE_NODEMASK_H

#include <cstdint>

namespace Vortice {

struct NodeMask : public IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
{
public:
    constexpr NodeMask(uint32_t mask)
    Mask = mask;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_NODEMASK_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_NODEMASK_H
