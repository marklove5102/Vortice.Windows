// Copyright (c) Contributors.

#ifndef VORTICE_VIEWINSTANCELOCATION_H
#define VORTICE_VIEWINSTANCELOCATION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct ViewInstanceLocation
        {
                                public ViewInstanceLocation(uint32_t viewportArrayIndex, uint32_t renderTargetArrayIndex)
        {
                ViewportArrayIndex = viewportArrayIndex;
                RenderTargetArrayIndex = renderTargetArrayIndex;
            }
        }


    }
}

#endif // VORTICE_VIEWINSTANCELOCATION_H