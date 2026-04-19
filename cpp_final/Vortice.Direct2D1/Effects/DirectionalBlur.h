// Copyright (c) Contributors.

#ifndef VORTICE_DIRECTIONALBLUR_H
#define VORTICE_DIRECTIONALBLUR_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class DirectionalBlur : public : ID2D1Effect
            {
                public DirectionalBlur(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.DirectionalBlur))
                {
                }

                public DirectionalBlur(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.DirectionalBlur))
                {
                }

                public float StandardDeviation
                {
                    set => SetValue((int)DirectionalBlurProperties.StandardDeviation, value);
                    get => GetFloatValue((int)DirectionalBlurProperties.StandardDeviation);

                }
                public float Angle
                {
                    set => SetValue((int)DirectionalBlurProperties.Angle, value);
                    get => GetFloatValue((int)DirectionalBlurProperties.Angle);
                }

                public DirectionalBlurOptimization Optimization
                {
                    set => SetValue((int)DirectionalBlurProperties.Optimization, value);
                    get => GetEnumValue<DirectionalBlurOptimization>((int)DirectionalBlurProperties.Optimization);
                }

                public BorderMode BorderMode
                {
                    set => SetValue((int)DirectionalBlurProperties.BorderMode, value);
                    get => GetEnumValue<BorderMode>((int)DirectionalBlurProperties.BorderMode);
                }
            }


        }
    }
}

#endif // VORTICE_DIRECTIONALBLUR_H