// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XINPUT_STATE_H
#define VORTICE_VORTICE_XINPUT_STATE_H

#include <cstdint>

namespace Vortice::XInput {

struct State
{
    int32_t PacketNumber;
    Gamepad Gamepad;

};


} // namespace Vortice::XInput

#endif // VORTICE_VORTICE_XINPUT_STATE_H
