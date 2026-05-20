// Copyright (c) Contributors.

#ifndef VORTICE_HEAPPROPERTIES_H
#define VORTICE_HEAPPROPERTIES_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicstruct HeapProperties
        {
            public: static const HeapProperties DefaultHeapProperties{};
            public: static const HeapProperties UploadHeapProperties{};
            public: static const HeapProperties ReadbackHeapProperties{};
                                            public HeapProperties(HeapType type, CpuPageProperty cpuPageProperty, MemoryPool memoryPoolPreference, uint32_t creationNodeMask, uint32_t visibleNodeMask)
                {
                Type = type;
                CPUPageProperty = cpuPageProperty;
                MemoryPoolPreference = memoryPoolPreference;
                CreationNodeMask = creationNodeMask;
                VisibleNodeMask = visibleNodeMask;
            }
                                        public HeapProperties(CpuPageProperty cpuPageProperty, MemoryPool memoryPoolPreference, uint32_t creationNodeMask, uint32_t visibleNodeMask)
                {
                Type = HeapType.Custom;
                CPUPageProperty = cpuPageProperty;
                MemoryPoolPreference = memoryPoolPreference;
                CreationNodeMask = creationNodeMask;
                VisibleNodeMask = visibleNodeMask;
            }
                                    public HeapProperties(HeapType type, uint32_t creationNodeMask, uint32_t visibleNodeMask)
                {
                Type = type;
                CPUPageProperty = CpuPageProperty.Unknown;
                MemoryPoolPreference = MemoryPool.Unknown;
                CreationNodeMask = creationNodeMask;
                VisibleNodeMask = visibleNodeMask;
            }
                            public: bool m_isCpuAccessible{};
                public: bool get_IsCpuAccessible() const { return return Type{};; }
        }

    }
}

#endif // VORTICE_HEAPPROPERTIES_H