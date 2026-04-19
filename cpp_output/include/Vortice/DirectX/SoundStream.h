// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTX_SOUNDSTREAM_H
#define VORTICE_VORTICE_DIRECTX_SOUNDSTREAM_H

#include <cstdint>

namespace Vortice::DirectX {

struct SoundStream
{
    // Constructors
    constexpr SoundStream(Stream stream)
        : stream(stream) {}

};


} // namespace Vortice::DirectX

#endif // VORTICE_VORTICE_DIRECTX_SOUNDSTREAM_H
