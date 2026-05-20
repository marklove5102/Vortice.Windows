// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_STATE_H
#define VORTICE_STATE_H

#include <cstdint>

namespace Vortice {
namespace XInput {


        namespace Vortice.XInput;

        [StructLayout(LayoutKind.Sequential)]
        struct State
        {
                            public: int32_t PacketNumber{};

                        public: Gamepad Gamepad{};
        }


    }
}

#endif // VORTICE_STATE_H