// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTX_AUDIOENDPOINTROLE_H
#define VORTICE_VORTICE_DIRECTX_AUDIOENDPOINTROLE_H

#include <cstdint>

namespace Vortice::DirectX {

enum class AudioEndpointRole : int32_t
{
    Console,
    Multimedia,
    Communications
};


} // namespace Vortice::DirectX

#endif // VORTICE_VORTICE_DIRECTX_AUDIOENDPOINTROLE_H
