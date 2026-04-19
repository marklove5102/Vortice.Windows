// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_DATABOX_H
#define VORTICE_DIRECTX_DATABOX_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DATABOX_H
#define VORTICE_VORTICE_DATABOX_H

#include <cstdint>

namespace Vortice {

struct DataBox
{
public:
    constexpr DataBox(void* dataPointer, int32_t 0, int32_t 0)
    DataPointer = dataPointer;
        RowPitch = rowPitch;
        SlicePitch = slicePitch;
    const void* DataPointer;
    const int32_t RowPitch;
    const int32_t SlicePitch;
    bool IsEmpty{> DataPointer == IntPtr.Zero && RowPitch == 0 && SlicePitch == 0};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DATABOX_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_DATABOX_H
