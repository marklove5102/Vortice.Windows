// Copyright (c) Contributors.

#ifndef VORTICE_DEPTHSTENCILVALUE_H
#define VORTICE_DEPTHSTENCILVALUE_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicstruct DepthStencilValue
        {
                                public DepthStencilValue(float depth, uint8_t stencil)
                {
                Depth = depth;
                Stencil = stencil;
            }
        }

    }
}

#endif // VORTICE_DEPTHSTENCILVALUE_H