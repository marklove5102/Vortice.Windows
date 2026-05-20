// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_CAPABILITYFLAGS_H
#define VORTICE_CAPABILITYFLAGS_H

#include <cstdint>

namespace Vortice {
namespace XInput {


        namespace Vortice.XInput;

        enum class CapabilityFlags : int16_t
        {
            None = 0,
            FfbSupported = 0x1,
            Wireless = 0x2,
            VoiceSupported = 0x4,
            PmdSupported = 0x8,
            NoNavigation = 0x10
        };


    }
}

#endif // VORTICE_CAPABILITYFLAGS_H