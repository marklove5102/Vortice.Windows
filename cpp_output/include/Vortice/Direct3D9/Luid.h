// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECT3D9_LUID_H
#define VORTICE_VORTICE_DIRECT3D9_LUID_H

#include <cstdint>

namespace Vortice::Direct3D9 {

struct Luid
{
    uint32_t LowPart;
    int32_t HighPart;

    // Constructors
    constexpr Luid(uint32_t lowPart, int32_t highPart)
        : lowPart(lowPart),
          highPart(highPart) {}

};


} // namespace Vortice::Direct3D9

#endif // VORTICE_VORTICE_DIRECT3D9_LUID_H
