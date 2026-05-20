// Copyright (c) Contributors.

#ifndef VORTICE_DESCRIPTORHEAPDESCRIPTION_H
#define VORTICE_DESCRIPTORHEAPDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicstruct DescriptorHeapDescription
        {
                                        public DescriptorHeapDescription(DescriptorHeapType type, uint32_t descriptorCount, DescriptorHeapFlags flags, uint32_t nodeMask)
                {
                Type = type;
                DescriptorCount = descriptorCount;
                Flags = flags;
                NodeMask = nodeMask;
            }
        }

    }
}

#endif // VORTICE_DESCRIPTORHEAPDESCRIPTION_H