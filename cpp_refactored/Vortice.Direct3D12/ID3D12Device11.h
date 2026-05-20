// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12DEVICE11_H
#define VORTICE_ID3D12DEVICE11_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class ID3D12Device11
        {
            void CreateSampler2(SamplerDescription2 desc, CpuDescriptorHandle destDescriptor)
        {
                CreateSampler2(ref desc, destDescriptor);
            }
        }


    }
}

#endif // VORTICE_ID3D12DEVICE11_H