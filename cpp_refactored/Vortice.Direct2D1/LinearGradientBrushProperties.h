// Copyright (c) Contributors.

#ifndef VORTICE_LINEARGRADIENTBRUSHPROPERTIES_H
#define VORTICE_LINEARGRADIENTBRUSHPROPERTIES_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct2D1;

        struct LinearGradientBrushProperties
        {
                                public LinearGradientBrushProperties(const Vector2& startPoint, const Vector2& endPoint)
        {
                StartPoint = startPoint;
                EndPoint = endPoint;
            }
        }


    }
}

#endif // VORTICE_LINEARGRADIENTBRUSHPROPERTIES_H