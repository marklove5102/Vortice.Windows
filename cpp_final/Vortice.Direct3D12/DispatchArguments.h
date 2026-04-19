// Copyright (c) Contributors.

#ifndef VORTICE_DISPATCHARGUMENTS_H
#define VORTICE_DISPATCHARGUMENTS_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct DispatchArguments
        {
                                    public DispatchArguments(uint32_t threadGroupCountX, uint32_t threadGroupCountY, uint32_t threadGroupCountZ)
        {
                ThreadGroupCountX = threadGroupCountX;
                ThreadGroupCountY = threadGroupCountY;
                ThreadGroupCountZ = threadGroupCountZ;
            }
        }


    }
}

#endif // VORTICE_DISPATCHARGUMENTS_H