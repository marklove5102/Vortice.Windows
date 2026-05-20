// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BATTERYTYPE_H
#define VORTICE_BATTERYTYPE_H

#include <cstdint>

namespace Vortice {
namespace XInput {


        namespace Vortice.XInput;

        enum class BatteryType : uint8_t
        {
            Disconnected = 0,
            Wired = 1,
            Alkaline = 2,
            Nimh = 3,
            Unknown = byte.MaxValue
        };


    }
}

#endif // VORTICE_BATTERYTYPE_H