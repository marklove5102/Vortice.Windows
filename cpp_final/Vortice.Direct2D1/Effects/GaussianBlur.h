// Copyright (c) Contributors.

#ifndef VORTICE_GAUSSIANBLUR_H
#define VORTICE_GAUSSIANBLUR_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class GaussianBlur : public : ID2D1Effect
            {
                public GaussianBlur(ID2D1DeviceContext context)
                     : base(context.CreateEffect(EffectGuids.GaussianBlur))
                {
                }

                public GaussianBlur(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.GaussianBlur))
                {
                }

                public float StandardDeviation
                {
                    get => GetFloatValue((int)GaussianBlurProperties.StandardDeviation);
                    set => SetValue((int)GaussianBlurProperties.StandardDeviation, value);
                }

                public GaussianBlurOptimization Optimization
                {
                    get => GetEnumValue<GaussianBlurOptimization>((int)GaussianBlurProperties.Optimization);
                    set => SetValue((int)GaussianBlurProperties.Optimization, value);
                }

                public BorderMode BorderMode
                {
                    get => GetEnumValue<BorderMode>((int)GaussianBlurProperties.BorderMode);
                    set => SetValue((int)GaussianBlurProperties.BorderMode, value);
                }
            }


        }
    }
}

#endif // VORTICE_GAUSSIANBLUR_H