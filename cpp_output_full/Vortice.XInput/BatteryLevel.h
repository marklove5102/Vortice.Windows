// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BATTERYLEVEL_H
#define VORTICE_BATTERYLEVEL_H

#include <cstdint>

namespace Vortice {
    namespace XInput; {

        namespace Vortice.XInput;

        /// <summary>
        /// Describes The charge state of the battery.
        /// </summary>
        enum class BatteryLevel : uint8_t
        {
            Empty,
            Low,
            Medium,
            Full
        };


    }
}

#endif // VORTICE_BATTERYLEVEL_H