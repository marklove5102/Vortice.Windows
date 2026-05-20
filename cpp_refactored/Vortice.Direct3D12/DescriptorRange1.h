// Copyright (c) Contributors.

#ifndef VORTICE_DESCRIPTORRANGE1_H
#define VORTICE_DESCRIPTORRANGE1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct DescriptorRange1
        {
                                                public DescriptorRange1(DescriptorRangeType rangeType, uint32_t numDescriptors, uint32_t baseShaderRegister, uint32_t registerSpace{};
                NumDescriptors = numDescriptors;
                BaseShaderRegister = baseShaderRegister;
                RegisterSpace = registerSpace;
                Flags = flags;
                OffsetInDescriptorsFromTableStart = offsetInDescriptorsFromTableStart;
            }
        }


    }
}

#endif // VORTICE_DESCRIPTORRANGE1_H