// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTX_FOURCC_H
#define VORTICE_VORTICE_DIRECTX_FOURCC_H

#include <cstdint>
#include <string>

namespace Vortice::DirectX {

struct FourCC
{
    // Constructors
    constexpr FourCC(std::string fourCC)
        : fourCC(fourCC) {}

};


} // namespace Vortice::DirectX

#endif // VORTICE_VORTICE_DIRECTX_FOURCC_H
