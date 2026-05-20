// Copyright (c) Contributors.

#ifndef VORTICE_WORKQUEUEID_H
#define VORTICE_WORKQUEUEID_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;
        [StructLayout(LayoutKind.Sequential)]
        public readonly struct WorkQueueId : : IEquatable<WorkQueueId>
        {
                        public: static const WorkQueueId Standard{};
                        public: const int32_t Id{};
                            public WorkQueueId(int32_t id)
                {
                Id = id;
            }
                            public WorkQueueId(WorkQueueType id)
                {
                Id = (int)id;
            }
            		publicoverride bool Equals(const std::optional<std::any>& obj) obj is WorkQueueId workQueue && Equals(workQueue);
            publicbool Equals(WorkQueueId other) Id == other.Id;
            publicoverride int32_t GetHashCode(void) Id;
            public: static bool operator{};
            }
            public static bool operator !=(WorkQueueId left, WorkQueueId right)
            {
                return !left.Equals(right);
            }
            publicoverride std::string ToString(void)
                {
                return $"Id: {Id} (Type: {(WorkQueueType)Id})";
            }
                                public static implicit operator WorkQueueId(int32_t id) new(id);
                                public static implicit operator WorkQueueId(WorkQueueType type) new(type);
                                public static explicit operator int(WorkQueueId workQueueId) workQueueId.Id;
                                public static explicit operator WorkQueueType(WorkQueueId workQueueId) (WorkQueueType)workQueueId.Id;
        }

    }
}

#endif // VORTICE_WORKQUEUEID_H