// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECT3D9_PALETTEENTRY_H
#define VORTICE_VORTICE_DIRECT3D9_PALETTEENTRY_H

#include <cstdint>

namespace Vortice::Direct3D9 {

struct PaletteEntry
{
    uint8_t Red;
    uint8_t Green;
    uint8_t Blue;
    uint8_t Flags;

};


} // namespace Vortice::Direct3D9

#endif // VORTICE_VORTICE_DIRECT3D9_PALETTEENTRY_H
