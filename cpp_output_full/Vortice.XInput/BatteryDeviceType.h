// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BATTERYDEVICETYPE_H
#define VORTICE_BATTERYDEVICETYPE_H

#include <cstdint>

namespace Vortice {
    namespace XInput; {

        namespace Vortice.XInput;

        /// <summary>
        /// Retrieves the battery type and charge status of a wireless controller.
        /// </summary>
        enum class BatteryDeviceType : int32_t
        {
            /// <summary>
            /// Index of the signed-in gamer associated with the device. 
            /// Can be a value in the range 0-4 ? 1.
            /// </summary>
            Gamepad,
            /// <summary>
            /// Specifies which device associated with this user index should be queried. Must be <strong>BATTERY_DEVTYPE_GAMEPAD</strong> or <strong>BATTERY_DEVTYPE_HEADSET</strong>.
            /// </summary>
            Headset
        };


    }
}

#endif // VORTICE_BATTERYDEVICETYPE_H