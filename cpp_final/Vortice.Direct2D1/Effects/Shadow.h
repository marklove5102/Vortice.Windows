// Copyright (c) Contributors.

#ifndef VORTICE_SHADOW_H
#define VORTICE_SHADOW_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class Shadow : public : ID2D1Effect
            {
                public Shadow(ID2D1DeviceContext context)
                   : base(context.CreateEffect(EffectGuids.Shadow))
                {
                }

                public Shadow(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Shadow))
                {
                }

                public float BlurStandardDeviation
                {
                    set => SetValue((int)ShadowProperties.BlurStandardDeviation, value);
                    get => GetFloatValue((int)ShadowProperties.BlurStandardDeviation);
                }

                public Vector4 Color
                {
                    set => SetValue((int)ShadowProperties.Color, value);
                    get => GetVector4Value((int)ShadowProperties.Color);
                }

                public ShadowOptimization Optimization
                {
                    set => SetValue((int)ShadowProperties.Optimization, value);
                    get => GetEnumValue<ShadowOptimization>((int)ShadowProperties.Optimization);
                }
            }


        }
    }
}

#endif // VORTICE_SHADOW_H