// Copyright (c) Contributors.

#ifndef VORTICE_COLORMATRIX_H
#define VORTICE_COLORMATRIX_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class ColorMatrix : public : ID2D1Effect
            {
                public ColorMatrix(ID2D1DeviceContext context)
                   : base(context.CreateEffect(EffectGuids.ColorMatrix))
                {
                }

                public ColorMatrix(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.ColorMatrix))
                {
                }

                public Matrix5x4 Matrix
                {
                    set => SetValue((int)ColorMatrixProperties.ColorMatrix, value);
                    get => GetMatrix5x4Value((int)ColorMatrixProperties.ColorMatrix);
                }

                public ColorMatrixAlphaMode AlphaMode
                {
                    set => SetValue((int)ColorMatrixProperties.AlphaMode, value);
                    get => GetEnumValue<ColorMatrixAlphaMode>((int)ColorMatrixProperties.AlphaMode);
                }
            }


        }
    }
}

#endif // VORTICE_COLORMATRIX_H