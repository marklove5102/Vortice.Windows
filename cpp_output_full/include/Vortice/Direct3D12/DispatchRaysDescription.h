// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_DISPATCHRAYSDESCRIPTION_H
#define VORTICE_DIRECT3D12_DISPATCHRAYSDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DISPATCHRAYSDESCRIPTION_H
#define VORTICE_VORTICE_DISPATCHRAYSDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct DispatchRaysDescription
{
public:
    constexpr DispatchRaysDescription(GpuVirtualAddressRange rayGenerationShaderRecord, GpuVirtualAddressRangeAndStride missShaderTable, GpuVirtualAddressRangeAndStride hitGroupTable, GpuVirtualAddressRangeAndStride callableShaderTable, uint32_t width, uint32_t height, uint32_t depth)
    RayGenerationShaderRecord = rayGenerationShaderRecord;
        MissShaderTable = missShaderTable;
        HitGroupTable = hitGroupTable;
        CallableShaderTable = callableShaderTable;
        Width = width;
        Height = height;
        Depth = depth;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_DISPATCHRAYSDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_DISPATCHRAYSDESCRIPTION_H
