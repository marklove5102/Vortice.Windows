// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_WORKQUEUEID_H
#define VORTICE_MEDIAFOUNDATION_WORKQUEUEID_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WORKQUEUEID_H
#define VORTICE_VORTICE_WORKQUEUEID_H

#include <cstdint>

namespace Vortice {

struct WorkQueueId : public IEquatable<WorkQueueId>
{
public:
    constexpr WorkQueueId(int32_t id)
    Id = id;
    constexpr WorkQueueId(WorkQueueType id)
    Id = (int)id;
    static const WorkQueueId Standard{new(WorkQueueType.Standard)};
    const int32_t Id;
    static bool operator{=(WorkQueueId left, WorkQueueId right)
    {
        return left.Equals(right)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_WORKQUEUEID_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_WORKQUEUEID_H
