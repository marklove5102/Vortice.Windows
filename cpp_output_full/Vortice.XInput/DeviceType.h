// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DEVICETYPE_H
#define VORTICE_DEVICETYPE_H

#include <cstdint>

namespace Vortice {
    namespace XInput; {

        namespace Vortice.XInput;

        /// <summary>
        /// Describes Device types available in <see cref="Capabilities"/>.
        /// </summary>
        enum class DeviceType : uint8_t
        {
            /// <summary>
            /// The device is a game controller. 
            /// </summary>
            Gamepad = 0x01
        };


    }
}

#endif // VORTICE_DEVICETYPE_H