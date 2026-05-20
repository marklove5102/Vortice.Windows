// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DEVICESUBTYPE_H
#define VORTICE_DEVICESUBTYPE_H

#include <cstdint>

namespace Vortice {
namespace XInput {


        namespace Vortice.XInput;

        enum class DeviceSubType : uint8_t
        {
            Unknown = 0,
            Gamepad = 1,
            Wheel = 2,
            ArcadeStick = 3,
            FlightStick = 4,
            DancePad = 5,
            Guitar = 6,
            GuitarAlternate = 7,
            DrumKit = 8,
            GuitarBass = 11,
            ArcadePad = 19
        };


    }
}

#endif // VORTICE_DEVICESUBTYPE_H