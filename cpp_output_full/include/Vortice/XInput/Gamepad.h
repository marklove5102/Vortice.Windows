// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XINPUT_GAMEPAD_H
#define VORTICE_XINPUT_GAMEPAD_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GAMEPAD_H
#define VORTICE_VORTICE_GAMEPAD_H

#include <cstdint>

namespace Vortice {

struct Gamepad
{
public:
    GamepadButtons Buttons;
    uint8_t LeftTrigger;
    uint8_t RightTrigger;
    int16_t LeftThumbX;
    int16_t LeftThumbY;
    int16_t RightThumbX;
    int16_t RightThumbY;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_GAMEPAD_H

} // namespace Vortice

#endif // VORTICE_XINPUT_GAMEPAD_H
