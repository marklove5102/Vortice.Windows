// Copyright (c) Contributors.

#ifndef VORTICE_GPUVIRTUALADDRESSRANGE_H
#define VORTICE_GPUVIRTUALADDRESSRANGE_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct GpuVirtualAddressRange
        {
                                public GpuVirtualAddressRange(uint64_t startAddress, uint64_t sizeInBytes)
        {
                StartAddress = startAddress;
                SizeInBytes = sizeInBytes;
            }
        }


    }
}

#endif // VORTICE_GPUVIRTUALADDRESSRANGE_H