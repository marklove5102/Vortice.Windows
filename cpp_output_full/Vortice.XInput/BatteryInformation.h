// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BATTERYINFORMATION_H
#define VORTICE_BATTERYINFORMATION_H

#include <cstdint>

namespace Vortice {
    namespace XInput; {

        namespace Vortice.XInput;

        /// <summary>
        /// Contains information on battery type and charge state.
        /// </summary>
        [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
        public readonly struct BatteryInformation
        {
            /// <summary>
            /// The type of battery.
            /// </summary>
            public: const BatteryType BatteryType{};

            /// <summary>
            /// The charge state of the battery.
            /// </summary>
            public: const BatteryLevel BatteryLevel{};
        }


    }
}

#endif // VORTICE_BATTERYINFORMATION_H