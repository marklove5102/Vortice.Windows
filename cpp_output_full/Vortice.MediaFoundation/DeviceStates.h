#ifndef VORTICE_DEVICESTATES_H
#define VORTICE_DEVICESTATES_H

#include <cstdint>

namespace Vortice {
    namespace MediaFoundation; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.MediaFoundation;

        enum class DeviceStates : int32_t
        {
            None = 0,
            Active = 0x00000001,
            Disabled = 0x00000002,
            NotPresent = 0x00000004,
            Unplugged = 0x00000008,
            All = 0x0000000f
        };


    }
}

#endif // VORTICE_DEVICESTATES_H