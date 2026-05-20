// Copyright (c) Contributors.

#ifndef VORTICE_HEAPPROPERTIES_H
#define VORTICE_HEAPPROPERTIES_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct HeapProperties
        {
            public: static const HeapProperties DefaultHeapProperties{};
            public: static const HeapProperties UploadHeapProperties{};
            public: static const HeapProperties ReadbackHeapProperties{};

                                            public HeapProperties(HeapType type, CpuPageProperty cpuPageProperty, MemoryPool memoryPoolPreference, uint32_t creationNodeMask{};
                CPUPageProperty = cpuPageProperty;
                MemoryPoolPreference = memoryPoolPreference;
                CreationNodeMask = creationNodeMask;
                VisibleNodeMask = visibleNodeMask;
            }

                                        public HeapProperties(CpuPageProperty cpuPageProperty, MemoryPool memoryPoolPreference, uint32_t creationNodeMask{};
                CPUPageProperty = cpuPageProperty;
                MemoryPoolPreference = memoryPoolPreference;
                CreationNodeMask = creationNodeMask;
                VisibleNodeMask = visibleNodeMask;
            }

                                    public HeapProperties(HeapType type, uint32_t creationNodeMask{};
                CPUPageProperty = CpuPageProperty.Unknown;
                MemoryPoolPreference = MemoryPool.Unknown;
                CreationNodeMask = creationNodeMask;
                VisibleNodeMask = visibleNodeMask;
            }

                            public bool IsCpuAccessible
            {
                get
                {
                    return Type{};
                }
            }
        }


    }
}

#endif // VORTICE_HEAPPROPERTIES_H