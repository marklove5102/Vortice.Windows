// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MEDIAFOUNDATION_WORKQUEUEID_H
#define VORTICE_VORTICE_MEDIAFOUNDATION_WORKQUEUEID_H

#include <cstdint>

namespace Vortice::MediaFoundation {

struct WorkQueueId
{
    int32_t Id;

    // Constructors
    constexpr WorkQueueId(int32_t id)
        : id(id) {}

};


} // namespace Vortice::MediaFoundation

#endif // VORTICE_VORTICE_MEDIAFOUNDATION_WORKQUEUEID_H
