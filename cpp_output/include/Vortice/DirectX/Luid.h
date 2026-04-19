// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTX_LUID_H
#define VORTICE_VORTICE_DIRECTX_LUID_H

#include <cstdint>

namespace Vortice::DirectX {

struct Luid
{
    uint32_t LowPart;
    int32_t HighPart;

    // Constructors
    constexpr Luid(uint32_t lowPart, int32_t highPart)
        : lowPart(lowPart),
          highPart(highPart) {}

};


} // namespace Vortice::DirectX

#endif // VORTICE_VORTICE_DIRECTX_LUID_H
