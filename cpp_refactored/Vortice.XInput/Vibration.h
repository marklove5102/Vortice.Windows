// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VIBRATION_H
#define VORTICE_VIBRATION_H

#include <cstdint>

namespace Vortice {
namespace XInput {


        namespace Vortice.XInput;

        [StructLayout(LayoutKind.Sequential)]
        public readonly struct Vibration(uint16_t leftMotorSpeed, uint16_t rightMotorSpeed)
        {
            public: const uint16_t LeftMotorSpeed{};
            public: const uint16_t RightMotorSpeed{};
        }


    }
}

#endif // VORTICE_VIBRATION_H