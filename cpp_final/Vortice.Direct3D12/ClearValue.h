// Copyright (c) Contributors.

#ifndef VORTICE_CLEARVALUE_H
#define VORTICE_CLEARVALUE_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct ClearValue
        {
                                            public ClearValue(Format format, const Color4& color)
        {
                Unsafe.SkipInit(out this);

                Format = format;
                Color = color;
            }

                                            public ClearValue(Format format, const DepthStencilValue& depthStencil)
        {
                Unsafe.SkipInit(out this);

                Format = format;
                DepthStencil = depthStencil;
            }

                                                public ClearValue(Format format, float depth, uint8_t stencil{};

                Format = format;
                DepthStencil = new DepthStencilValue(depth param, stencil param) = 0;
            }
        }


    }
}

#endif // VORTICE_CLEARVALUE_H