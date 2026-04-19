// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_GAMEPADVIRTUALKEY_H
#define VORTICE_GAMEPADVIRTUALKEY_H

#include <cstdint>

namespace Vortice {
namespace XInput {


        namespace Vortice.XInput;

        enum class GamepadVirtualKey : int16_t
        {
            None = 0,
            A = 0x5800,
            B = 0x5801,
            X = 0x5802,
            Y = 0x5803,
            RightShoulder = 0x5804,
            LeftShoulder = 0x5805,
            LeftTrigger = 0x5806,
            RightTrigger = 0x5807,
            DirectionalPadUp = 0x5810,
            DirectionalPadDown = 0x5811,
            DirectionalPadLeft = 0x5812,
            DirectionalPadRight = 0x5813,
            Start = 0x5814,
            Back = 0x5815,
            LeftThumbPress = 0x5816,
            RightThumbPress = 0x5817,
            LeftThumbUp = 0x5820,
            LeftThumbDown = 0x5821,
            LeftThumbRight = 0x5822,
            LeftThumbLeft = 0x5823,
            LeftThumbUpLeft = 0x5824,
            LeftThumbUpRight = 0x5825,
            LeftThumbDownRight = 0x5826,
            LeftThumbDownLeft = 0x5827,
            RightThumbUp = 0x5830,
            RightThumbDown = 0x5831,
            RightThumbRight = 0x5832,
            RightThumbLeft = 0x5833,
            RightThumbUpLeft = 0x5834,
            RightThumbUpRight = 0x5835,
            RightThumbDownRight = 0x5836,
            RightThumbDownLeft = 0x5837
        };


    }
}

#endif // VORTICE_GAMEPADVIRTUALKEY_H