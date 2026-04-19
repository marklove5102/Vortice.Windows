// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTX_RIFFPARSER_H
#define VORTICE_VORTICE_DIRECTX_RIFFPARSER_H

#include <cstdint>

namespace Vortice::DirectX {

struct RiffParser
{
    // Constructors
    constexpr RiffParser(Stream input)
        : input(input) {}

};


} // namespace Vortice::DirectX

#endif // VORTICE_VORTICE_DIRECTX_RIFFPARSER_H
