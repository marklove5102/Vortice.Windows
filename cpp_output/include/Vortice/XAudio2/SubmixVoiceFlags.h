// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XAUDIO2_SUBMIXVOICEFLAGS_H
#define VORTICE_VORTICE_XAUDIO2_SUBMIXVOICEFLAGS_H

#include <cstdint>

namespace Vortice::XAudio2 {

enum class SubmixVoiceFlags : int32_t
{
    None = VoiceFlags.None,
    UseFilter = VoiceFlags.UseFilter
};


} // namespace Vortice::XAudio2

#endif // VORTICE_VORTICE_XAUDIO2_SUBMIXVOICEFLAGS_H
