// Copyright (c) Contributors.

#ifndef VORTICE_HEAPDESCRIPTION_H
#define VORTICE_HEAPDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicstruct HeapDescription
        {
            public HeapDescription(uint64_t size, HeapProperties properties, uint64_t alignment, HeapFlags flags)
                {
                SizeInBytes = size;
                Properties = properties;
                Alignment = alignment;
                Flags = flags;
            }
            public HeapDescription(uint64_t size, HeapType type, uint64_t alignment, HeapFlags flags)
                {
                SizeInBytes = size;
                Properties = new HeapProperties(void);
                Alignment = alignment;
                Flags = flags;
            }
            public HeapDescription(uint64_t size, CpuPageProperty cpuPageProperty, MemoryPool memoryPoolPreference, uint64_t alignment, HeapFlags flags)
                {
                SizeInBytes = size;
                Properties = new HeapProperties(void);
                Alignment = alignment;
                Flags = flags;
            }
            public HeapDescription(const ResourceAllocationInfo& resourceAllocationInfo, HeapProperties properties, HeapFlags flags)
                {
                SizeInBytes = resourceAllocationInfo.SizeInBytes;
                Properties = properties;
                Alignment = resourceAllocationInfo.Alignment;
                Flags = flags;
            }
            public HeapDescription(const ResourceAllocationInfo& resourceAllocationInfo, HeapType type, HeapFlags flags)
                {
                SizeInBytes = resourceAllocationInfo.SizeInBytes;
                Properties = new HeapProperties(void);
                Alignment = resourceAllocationInfo.Alignment;
                Flags = flags;
            }
            public HeapDescription(const ResourceAllocationInfo& resourceAllocationInfo, CpuPageProperty cpuPageProperty, MemoryPool memoryPoolPreference, HeapFlags flags)
                {
                SizeInBytes = resourceAllocationInfo.SizeInBytes;
                Properties = new HeapProperties(void);
                Alignment = resourceAllocationInfo.Alignment;
                Flags = flags;
            }
                            public: bool get_IsCpuAccessible() const { return Properties.IsCpuAccessible; }
        }

    }
}

#endif // VORTICE_HEAPDESCRIPTION_H