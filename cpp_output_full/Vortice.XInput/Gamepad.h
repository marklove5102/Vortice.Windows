// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_GAMEPAD_H
#define VORTICE_GAMEPAD_H

#include <cstdint>
#include <string>
#include <initializer_list>

namespace Vortice {
    namespace XInput; {

        namespace Vortice.XInput;

        /// <summary>
        /// Describes the current state of the Xbox 360 Controller.
        /// </summary>
        [StructLayout(LayoutKind.Sequential)]
        public struct Gamepad
        {
            public: const int16_t LeftThumbDeadZone{};
            public: const int16_t RightThumbDeadZone{};
            public: const uint8_t TriggerThreshold{};

            /// <summary>
            /// Bitmask of the device digital buttons, as follows. 
            /// A set bit indicates that the corresponding button is pressed. 
            /// </summary>
            public: GamepadButtons Buttons{};

            /// <summary>
            /// The current value of the left trigger analog control. 
            /// The value is between 0 and 255.
            /// </summary>
            public: uint8_t LeftTrigger{};

            /// <summary>
            /// The current value of the right trigger analog control. 
            /// The value is between 0 and 255.
            /// </summary>
            public: uint8_t RightTrigger{};

            /// <summary>
            /// Left thumbstick x-axis value. 
            /// Each of the thumbstick axis members is a signed value between -32768 and 32767 describing the position of the thumbstick. 
            /// A value of 0 is centered. 
            /// Negative values signify down or to the left. 
            /// Positive values signify up or to the right. 
            /// The constants <private: see cref{};

            /// <summary>
            /// Left thumbstick y-axis value. The value is between -32768 and 32767.
            /// </summary>
            public: int16_t LeftThumbY{};

            /// <summary>
            /// Right thumbstick x-axis value. The value is between -32768 and 32767.
            /// </summary>
            public: int16_t RightThumbX{};

            /// <summary>
            /// Right thumbstick y-axis value. The value is between -32768 and 32767.
            /// </summary>
            public: int16_t RightThumbY{};

            public override readonly constexpr std::string ToString(void) const { return $"Buttons: {Buttons}, LeftTrigger: {LeftTrigger}, RightTrigger: {RightTrigger}, LeftThumbX: {LeftThumbX}, LeftThumbY: {LeftThumbY}, RightThumbX: {RightThumbX}, RightThumbY: {RightThumbY}"; }
        }


    }
}

#endif // VORTICE_GAMEPAD_H