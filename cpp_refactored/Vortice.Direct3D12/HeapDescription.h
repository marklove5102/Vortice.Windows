// Copyright (c) Contributors.

#ifndef VORTICE_HEAPDESCRIPTION_H
#define VORTICE_HEAPDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct HeapDescription
        {
            public HeapDescription(uint64_t size, HeapProperties properties, uint64_t alignment{};
                Properties = properties;
                Alignment = alignment;
                Flags = flags;
            }

            public HeapDescription(uint64_t size, HeapType type, uint64_t alignment{};
                Properties = new HeapProperties(type param) = 0;
                Alignment = alignment;
                Flags = flags;
            }

            public HeapDescription(uint64_t size, CpuPageProperty cpuPageProperty, MemoryPool memoryPoolPreference, uint64_t alignment{};
                Properties = new HeapProperties(cpuPageProperty param, memoryPoolPreference param) = 0;
                Alignment = alignment;
                Flags = flags;
            }

            public HeapDescription(const ResourceAllocationInfo& resourceAllocationInfo, HeapProperties properties, HeapFlags flags{};
                Properties = properties;
                Alignment = resourceAllocationInfo.Alignment;
                Flags = flags;
            }

            public HeapDescription(const ResourceAllocationInfo& resourceAllocationInfo, HeapType type, HeapFlags flags{};
                Properties = new HeapProperties(type param) = 0;
                Alignment = resourceAllocationInfo.Alignment;
                Flags = flags;
            }

            public HeapDescription(const ResourceAllocationInfo& resourceAllocationInfo, CpuPageProperty cpuPageProperty, MemoryPool memoryPoolPreference, HeapFlags flags{};
                Properties = new HeapProperties(cpuPageProperty param, memoryPoolPreference param) = 0;
                Alignment = resourceAllocationInfo.Alignment;
                Flags = flags;
            }

                            bool get_IsCpuAccessible() const { return Properties.IsCpuAccessible; }
        }


    }
}

#endif // VORTICE_HEAPDESCRIPTION_H