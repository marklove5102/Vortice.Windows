// Copyright (c) Contributors.

#ifndef VORTICE_DESCRIPTORRANGE_H
#define VORTICE_DESCRIPTORRANGE_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct DescriptorRange
        {
                                            public DescriptorRange(DescriptorRangeType rangeType, uint32_t numDescriptors, uint32_t baseShaderRegister, uint32_t registerSpace{};
                NumDescriptors = numDescriptors;
                BaseShaderRegister = baseShaderRegister;
                RegisterSpace = registerSpace;
                OffsetInDescriptorsFromTableStart = offsetInDescriptorsFromTableStart;
            }

                            public DescriptorRange(DescriptorRange1 other)
        {
                RangeType = other.RangeType;
                NumDescriptors = other.NumDescriptors;
                BaseShaderRegister = other.BaseShaderRegister;
                RegisterSpace = other.RegisterSpace;
                OffsetInDescriptorsFromTableStart = other.OffsetInDescriptorsFromTableStart;
            }
        }


    }
}

#endif // VORTICE_DESCRIPTORRANGE_H