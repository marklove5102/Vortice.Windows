// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XINPUT_KEYSTROKEFLAGS_H
#define VORTICE_VORTICE_XINPUT_KEYSTROKEFLAGS_H

#include <cstdint>

namespace Vortice::XInput {

enum class KeyStrokeFlags : uint16_t
{
    None = 0,
    KeyDown = 0x0001,
    KeyUp = 0x0002,
    Repeat = 0x0004
};


} // namespace Vortice::XInput

#endif // VORTICE_VORTICE_XINPUT_KEYSTROKEFLAGS_H
