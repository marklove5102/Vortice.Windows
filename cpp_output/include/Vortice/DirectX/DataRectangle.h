// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTX_DATARECTANGLE_H
#define VORTICE_VORTICE_DIRECTX_DATARECTANGLE_H

#include <cstdint>

namespace Vortice::DirectX {

struct DataRectangle
{
    // Constructors
    constexpr DataRectangle(void* dataPointer, uint32_t pitch)
        : dataPointer(dataPointer),
          pitch(pitch) {}

};


} // namespace Vortice::DirectX

#endif // VORTICE_VORTICE_DIRECTX_DATARECTANGLE_H
