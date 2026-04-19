// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XAUDIO2_IXAUDIO2SOURCEVOICE_H
#define VORTICE_VORTICE_XAUDIO2_IXAUDIO2SOURCEVOICE_H

#include <cstdint>
#include <winerror.h>

namespace Vortice::XAudio2 {

struct VoiceErrorArgs
{
    // Constructors
    constexpr VoiceErrorArgs(void* pointer, HRESULT result)
        : pointer(pointer),
          result(result) {}

};


} // namespace Vortice::XAudio2

#endif // VORTICE_VORTICE_XAUDIO2_IXAUDIO2SOURCEVOICE_H
