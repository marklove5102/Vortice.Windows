// Copyright (c) Contributors.

#ifndef VORTICE_RENDERTARGETPROPERTIES_H
#define VORTICE_RENDERTARGETPROPERTIES_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct2D1;

        struct RenderTargetProperties
        {
                            public RenderTargetProperties(PixelFormat pixelFormat)
                : this(RenderTargetType.Default, pixelFormat, 96.0f, 96.0f, RenderTargetUsage.None, FeatureLevel.Default)
            {
            }

                                                public RenderTargetProperties(RenderTargetType type, PixelFormat pixelFormat, float dpiX, float dpiY, RenderTargetUsage usage, FeatureLevel minLevel)
        {
                Type = type;
                PixelFormat = pixelFormat;
                DpiX = dpiX;
                DpiY = dpiY;
                Usage = usage;
                MinLevel = minLevel;
            }
        }


    }
}

#endif // VORTICE_RENDERTARGETPROPERTIES_H