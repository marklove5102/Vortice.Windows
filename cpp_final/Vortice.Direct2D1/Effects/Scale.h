// Copyright (c) Contributors.

#ifndef VORTICE_SCALE_H
#define VORTICE_SCALE_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class Scale : public : ID2D1Effect
            {
                public Scale(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.Scale))
                {
                }

                public Scale(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Scale))
                {
                }

                public Vector2 Value
                {
                    set => SetValue((int)ScaleProperties.Scale, value);
                    get => GetVector2Value((int)ScaleProperties.Scale);
                }

                public Vector2 CenterPoint
                {
                    set => SetValue((int)ScaleProperties.CenterPoint, value);
                    get => GetVector2Value((int)ScaleProperties.CenterPoint);
                }

                public BorderMode BorderMode
                {
                    set => SetValue((int)ScaleProperties.BorderMode, value);
                    get => GetEnumValue<BorderMode>((int)ScaleProperties.BorderMode);
                }

                public float Sharpness
                {
                    set => SetValue((int)ScaleProperties.Sharpness, value);
                    get => GetFloatValue((int)ScaleProperties.Sharpness);
                }

                public ScaleInterpolationMode InterpolationMode
                {
                    set => SetValue((int)ScaleProperties.InterpolationMode, value);
                    get => GetEnumValue<ScaleInterpolationMode>((int)ScaleProperties.InterpolationMode);
                }
            }


        }
    }
}

#endif // VORTICE_SCALE_H