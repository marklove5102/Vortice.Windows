// Copyright (c) Contributors.

#ifndef VORTICE_SHAREDRESOURCEFLAGS_H
#define VORTICE_SHAREDRESOURCEFLAGS_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D11;

        enum class SharedResourceFlags : uint32_t
        {
            None = 0,
            Write = 1,
            Read = 0x80000000,
            GenericWrite = 0x40000000,
            GenericRead = 0x80000000,
            GenericExecute = 0x20000000,
            GenericAll = 0x10000000
        };

    }
}

#endif // VORTICE_SHAREDRESOURCEFLAGS_H