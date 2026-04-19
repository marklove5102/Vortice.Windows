// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTX_UINT24_H
#define VORTICE_VORTICE_DIRECTX_UINT24_H

#include <cstdint>

namespace Vortice::DirectX {

struct UInt24
{
    // Constructors
    constexpr UInt24(uint32_t value)
        : value(value) {}

};


} // namespace Vortice::DirectX

#endif // VORTICE_VORTICE_DIRECTX_UINT24_H
