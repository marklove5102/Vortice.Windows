// Copyright (c) Contributors.

#ifndef VORTICE_COMMANDQUEUEDESCRIPTION_H
#define VORTICE_COMMANDQUEUEDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct CommandQueueDescription
        {
                                        public CommandQueueDescription(CommandListType type, int32_t priority{};
                Priority = priority;
                Flags = flags;
                NodeMask = nodeMask;
            }

                                        public CommandQueueDescription(CommandListType type, CommandQueuePriority priority, CommandQueueFlags flags{};
                Priority = (int)priority;
                Flags = flags;
                NodeMask = nodeMask;
            }
        }


    }
}

#endif // VORTICE_COMMANDQUEUEDESCRIPTION_H