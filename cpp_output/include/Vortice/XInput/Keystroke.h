// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XINPUT_KEYSTROKE_H
#define VORTICE_VORTICE_XINPUT_KEYSTROKE_H

#include <cstdint>

namespace Vortice::XInput {

struct Keystroke
{
    GamepadVirtualKey VirtualKey;
    char Unicode;
    KeyStrokeFlags Flags;
    int32_t UserIndex;
    uint8_t HidCode;

};


} // namespace Vortice::XInput

#endif // VORTICE_VORTICE_XINPUT_KEYSTROKE_H
