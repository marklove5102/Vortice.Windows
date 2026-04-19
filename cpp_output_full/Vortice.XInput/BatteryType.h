// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BATTERYTYPE_H
#define VORTICE_BATTERYTYPE_H

#include <cstdint>

namespace Vortice {
    namespace XInput; {

        namespace Vortice.XInput;

        /// <summary>
        /// Describes the battery type.
        /// </summary>
        enum class BatteryType : uint8_t
        {
            /// <summary>
            /// The device is not connected. 
            /// </summary>
            Disconnected = 0,
            /// <summary>
            /// The device is a wired device and does not have a battery. 
            /// </summary>
            Wired = 1,
            /// <summary>
            /// The device has an alkaline battery. 
            /// </summary>
            Alkaline = 2,
            /// <summary>
            /// The device has a nickel metal hydride battery. 
            /// </summary>
            Nimh = 3,
            /// <summary>
            /// The device has an unknown battery type. 
            /// </summary>
            Unknown = byte.MaxValue
        };


    }
}

#endif // VORTICE_BATTERYTYPE_H