// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_COMMANDQUEUEDESCRIPTION_H
#define VORTICE_DIRECT3D12_COMMANDQUEUEDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_COMMANDQUEUEDESCRIPTION_H
#define VORTICE_VORTICE_COMMANDQUEUEDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct CommandQueueDescription
{
public:
    constexpr CommandQueueDescription(CommandListType type, int32_t 0, CommandQueueFlags CommandQueueFlags.None, uint32_t 0)
    Type = type;
        Priority = priority;
        Flags = flags;
        NodeMask = nodeMask;
    constexpr CommandQueueDescription(CommandListType type, CommandQueuePriority priority, CommandQueueFlags CommandQueueFlags.None, uint32_t 0)
    Type = type;
        Priority = (int)priority;
        Flags = flags;
        NodeMask = nodeMask;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_COMMANDQUEUEDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_COMMANDQUEUEDESCRIPTION_H
