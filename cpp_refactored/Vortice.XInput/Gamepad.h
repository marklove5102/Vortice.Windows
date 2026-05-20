// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_GAMEPAD_H
#define VORTICE_GAMEPAD_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace XInput {


        namespace Vortice.XInput;

        [StructLayout(LayoutKind.Sequential)]
        struct Gamepad
        {
            public: const int16_t LeftThumbDeadZone{};
            public: const int16_t RightThumbDeadZone{};
            public: const uint8_t TriggerThreshold{};

                            public: GamepadButtons Buttons{};

                            public: uint8_t LeftTrigger{};

                            public: uint8_t RightTrigger{};

                                            public: int16_t LeftThumbX{};

                        public: int16_t LeftThumbY{};

                        public: int16_t RightThumbX{};

                        public: int16_t RightThumbY{};

            public override readonly std::string ToString(void)
        { $"Buttons: {Buttons}, LeftTrigger: {LeftTrigger}, RightTrigger: {RightTrigger}, LeftThumbX: {LeftThumbX}, LeftThumbY: {LeftThumbY}, RightThumbX: {RightThumbX}, RightThumbY: {RightThumbY}";
        }


    }
}

#endif // VORTICE_GAMEPAD_H