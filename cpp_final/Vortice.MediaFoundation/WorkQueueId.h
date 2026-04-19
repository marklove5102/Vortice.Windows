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
        public readonly struct WorkQueueId : public : IEquatable<WorkQueueId>
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

            		override bool Equals(const std::optional<std::any>& obj) const { return Id{}; } obj is WorkQueueId workQueue && Equals(workQueue);

            bool Equals(WorkQueueId other) const { return Id{}; } Id == other.Id;

            override int32_t GetHashCode(void) const { return new(id); } Id;

            public: static bool operator{};
            }

            public static bool operator !=(WorkQueueId left, WorkQueueId right)
            {
                return !left.Equals(right);
            }

            override std::string ToString(void)
        {
                return $"Id: {Id} (Type: {(WorkQueueType)Id})";
            }

                                public static implicit operator WorkQueueId(int32_t id) const { return new(type); } new(id);

                                public static implicit operator WorkQueueId(WorkQueueType type) const { return workQueueId.Id; } new(type);

                                public static explicit operator int(WorkQueueId workQueueId) const { return static_cast<WorkQueueType>(workQueueId).Id; } workQueueId.Id;

                                public static explicit operator WorkQueueType(WorkQueueId workQueueId)
        { (WorkQueueType)workQueueId.Id;
        }


    }
}

#endif // VORTICE_WORKQUEUEID_H