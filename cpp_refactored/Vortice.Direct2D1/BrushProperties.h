// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BRUSHPROPERTIES_H
#define VORTICE_BRUSHPROPERTIES_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {


        namespace Vortice.Direct2D1;

        struct BrushProperties
        {
                            public BrushProperties(float opacity)
        {

                Opacity = opacity;
                Transform = Matrix3x2.Identity;
            }

                                public BrushProperties(float opacity, Matrix3x2 transform)
        {
                Opacity = opacity;
                Transform = transform;
            }
        }


    }
}

#endif // VORTICE_BRUSHPROPERTIES_H