// Copyright (c) Contributors.

#ifndef VORTICE_GPUVIRTUALADDRESSRANGEANDSTRIDE_H
#define VORTICE_GPUVIRTUALADDRESSRANGEANDSTRIDE_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct GpuVirtualAddressRangeAndStride
        {
                                    public GpuVirtualAddressRangeAndStride(uint64_t startAddress, uint64_t sizeInBytes, uint64_t strideInBytes)
        {
                StartAddress = startAddress;
                SizeInBytes = sizeInBytes;
                StrideInBytes = strideInBytes;
            }
        }


    }
}

#endif // VORTICE_GPUVIRTUALADDRESSRANGEANDSTRIDE_H