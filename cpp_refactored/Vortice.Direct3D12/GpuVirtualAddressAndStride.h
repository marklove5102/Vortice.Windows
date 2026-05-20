// Copyright (c) Contributors.

#ifndef VORTICE_GPUVIRTUALADDRESSANDSTRIDE_H
#define VORTICE_GPUVIRTUALADDRESSANDSTRIDE_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct GpuVirtualAddressAndStride
        {
                                public GpuVirtualAddressAndStride(uint64_t startAddress, uint64_t strideInBytes)
        {
                StartAddress = startAddress;
                StrideInBytes = strideInBytes;
            }
        }


    }
}

#endif // VORTICE_GPUVIRTUALADDRESSANDSTRIDE_H