// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTX_WAVEFORMATEXTENSIBLE_H
#define VORTICE_VORTICE_DIRECTX_WAVEFORMATEXTENSIBLE_H

#include <cstdint>
#include <guiddef.h>

namespace Vortice::DirectX {

struct WaveFormatExtensible
{
    GUID GuidSubFormat;
    int32_t ChannelMask;

};


} // namespace Vortice::DirectX

#endif // VORTICE_VORTICE_DIRECTX_WAVEFORMATEXTENSIBLE_H
