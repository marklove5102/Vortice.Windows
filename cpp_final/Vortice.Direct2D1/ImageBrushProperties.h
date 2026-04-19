// Copyright (c) Contributors.

#ifndef VORTICE_IMAGEBRUSHPROPERTIES_H
#define VORTICE_IMAGEBRUSHPROPERTIES_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct2D1;

        struct ImageBrushProperties
        {
                                        public ImageBrushProperties(RectangleF sourceRectangle, ExtendMode extendModeX, ExtendMode extendModeY, InterpolationMode interpolationMode)
        {
                SourceRectangle = sourceRectangle;
                ExtendModeX = extendModeX;
                ExtendModeY = extendModeY;
                InterpolationMode = interpolationMode;
            }
        }


    }
}

#endif // VORTICE_IMAGEBRUSHPROPERTIES_H