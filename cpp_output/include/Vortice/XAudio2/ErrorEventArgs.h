// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XAUDIO2_ERROREVENTARGS_H
#define VORTICE_VORTICE_XAUDIO2_ERROREVENTARGS_H

#include <cstdint>
#include <winerror.h>

namespace Vortice::XAudio2 {

struct ErrorEventArgs
{
    // Constructors
    constexpr ErrorEventArgs(HRESULT errorCode)
        : errorCode(errorCode) {}

};


} // namespace Vortice::XAudio2

#endif // VORTICE_VORTICE_XAUDIO2_ERROREVENTARGS_H
