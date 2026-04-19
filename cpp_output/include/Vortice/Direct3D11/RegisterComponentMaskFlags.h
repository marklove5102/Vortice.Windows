// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECT3D11_REGISTERCOMPONENTMASKFLAGS_H
#define VORTICE_VORTICE_DIRECT3D11_REGISTERCOMPONENTMASKFLAGS_H

#include <cstdint>

namespace Vortice::Direct3D11 {

enum class RegisterComponentMaskFlags : uint8_t
{
    None = 0,
    ComponentX = 1,
    ComponentY = 2,
    ComponentZ = 4,
    ComponentW = 8,
    All = ComponentX | ComponentY | ComponentZ | ComponentW
};


} // namespace Vortice::Direct3D11

#endif // VORTICE_VORTICE_DIRECT3D11_REGISTERCOMPONENTMASKFLAGS_H
