// Copyright (c) Contributors.

#ifndef VORTICE_ROUNDEDRECTANGLE_H
#define VORTICE_ROUNDEDRECTANGLE_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct2D1;

        struct RoundedRectangle
        {
                                    public RoundedRectangle(RectangleF rect, float radiusX, float radiusY)
        {
                Rect = rect;
                RadiusX = radiusX;
                RadiusY = radiusY;
            }
        }


    }
}

#endif // VORTICE_ROUNDEDRECTANGLE_H