// Copyright (c) Contributors.

#ifndef VORTICE_DISPATCHRAYSDESCRIPTION_H
#define VORTICE_DISPATCHRAYSDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct DispatchRaysDescription
        {
                                                                                                                                public DispatchRaysDescription(GpuVirtualAddressRange rayGenerationShaderRecord, GpuVirtualAddressRangeAndStride missShaderTable, GpuVirtualAddressRangeAndStride hitGroupTable, GpuVirtualAddressRangeAndStride callableShaderTable, uint32_t width, uint32_t height, uint32_t depth)
        {
                RayGenerationShaderRecord = rayGenerationShaderRecord;
                MissShaderTable = missShaderTable;
                HitGroupTable = hitGroupTable;
                CallableShaderTable = callableShaderTable;
                Width = width;
                Height = height;
                Depth = depth;
            }
        }


    }
}

#endif // VORTICE_DISPATCHRAYSDESCRIPTION_H