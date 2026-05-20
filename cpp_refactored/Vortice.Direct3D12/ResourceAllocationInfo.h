// Copyright (c) Contributors.

#ifndef VORTICE_RESOURCEALLOCATIONINFO_H
#define VORTICE_RESOURCEALLOCATIONINFO_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct ResourceAllocationInfo
        {
                                public ResourceAllocationInfo(uint64_t sizeInBytes, uint64_t alignment)
        {
                SizeInBytes = sizeInBytes;
                Alignment = alignment;
            }
        }


    }
}

#endif // VORTICE_RESOURCEALLOCATIONINFO_H