// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTX_RIFFCHUNK_H
#define VORTICE_VORTICE_DIRECTX_RIFFCHUNK_H

#include <cstdint>

namespace Vortice::DirectX {

struct RiffChunk
{
    // Constructors
    constexpr RiffChunk(Stream stream, FourCC type, uint32_t size, uint32_t dataPosition, bool false, bool false)
        : stream(stream),
          type(type),
          size(size),
          dataPosition(dataPosition),
          false(false),
          false(false) {}

};


} // namespace Vortice::DirectX

#endif // VORTICE_VORTICE_DIRECTX_RIFFCHUNK_H
