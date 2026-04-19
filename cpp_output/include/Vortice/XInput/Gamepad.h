// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XINPUT_GAMEPAD_H
#define VORTICE_VORTICE_XINPUT_GAMEPAD_H

#include <cstdint>

namespace Vortice::XInput {

struct Gamepad
{
    GamepadButtons Buttons;
    uint8_t LeftTrigger;
    uint8_t RightTrigger;
    int16_t LeftThumbX;
    int16_t LeftThumbY;
    int16_t RightThumbX;
    int16_t RightThumbY;

};


} // namespace Vortice::XInput

#endif // VORTICE_VORTICE_XINPUT_GAMEPAD_H
