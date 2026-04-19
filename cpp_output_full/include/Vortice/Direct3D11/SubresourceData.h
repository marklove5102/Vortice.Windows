// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_SUBRESOURCEDATA_H
#define VORTICE_DIRECT3D11_SUBRESOURCEDATA_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SUBRESOURCEDATA_H
#define VORTICE_VORTICE_SUBRESOURCEDATA_H

#include <cstdint>

namespace Vortice {

struct SubresourceData
{
public:
    constexpr SubresourceData(void* dataPointer, uint32_t 0, uint32_t 0)
    DataPointer = dataPointer;
        RowPitch = rowPitch;
        SlicePitch = slicePitch;
    constexpr SubresourceData(void* dataPointer, uint32_t 0, uint32_t 0)
    DataPointer = new IntPtr(dataPointer);
        RowPitch = rowPitch;
        SlicePitch = slicePitch;
    unsafe SubresourceData() { DataPointer = new IntPtr(dataPointer);
        RowPitch = rowPitch;
        SlicePitch = slicePitch; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SUBRESOURCEDATA_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_SUBRESOURCEDATA_H
