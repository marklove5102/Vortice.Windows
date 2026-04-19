#ifndef VORTICE_PREDEFINEDDEVICE_H
#define VORTICE_PREDEFINEDDEVICE_H

#include <cstdint>

namespace Vortice {
    namespace DirectInput; {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Distributed under the MIT license. See the LICENSE file in the project root for more information.

        namespace Vortice.DirectInput;

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


    }
}

#endif // VORTICE_PREDEFINEDDEVICE_H