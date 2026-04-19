// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTX_DATABOX_H
#define VORTICE_VORTICE_DIRECTX_DATABOX_H

#include <cstdint>

namespace Vortice::DirectX {

struct DataBox
{
    // Constructors
    constexpr DataBox(void* dataPointer, int32_t 0, int32_t 0)
        : dataPointer(dataPointer),
          0(0),
          0(0) {}

};


} // namespace Vortice::DirectX

#endif // VORTICE_VORTICE_DIRECTX_DATABOX_H
