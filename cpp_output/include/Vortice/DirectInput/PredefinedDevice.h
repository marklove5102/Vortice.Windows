// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTINPUT_PREDEFINEDDEVICE_H
#define VORTICE_VORTICE_DIRECTINPUT_PREDEFINEDDEVICE_H

#include <cstdint>

namespace Vortice::DirectInput {

enum class PredefinedDevice : int32_t
{
    SysMouse,
    SysKeyboard,
    Joystick,
    SysMouseEm,
    SysMouseEm2,
    SysKeyboardEm,
    SysKeyboardEm2
};


} // namespace Vortice::DirectInput

#endif // VORTICE_VORTICE_DIRECTINPUT_PREDEFINEDDEVICE_H
