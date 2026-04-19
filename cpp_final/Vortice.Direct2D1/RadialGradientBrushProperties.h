// Copyright (c) Contributors.

#ifndef VORTICE_RADIALGRADIENTBRUSHPROPERTIES_H
#define VORTICE_RADIALGRADIENTBRUSHPROPERTIES_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct2D1;

        struct RadialGradientBrushProperties
        {
                                        public RadialGradientBrushProperties(const Vector2& center, const Vector2& gradientOriginOffset, float radiusX, float radiusY)
        {
                Center = center;
                GradientOriginOffset = gradientOriginOffset;
                RadiusX = radiusX;
                RadiusY = radiusY;
            }
        }


    }
}

#endif // VORTICE_RADIALGRADIENTBRUSHPROPERTIES_H