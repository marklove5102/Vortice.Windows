// Copyright (c) Contributors.

#ifndef VORTICE_HIGHLIGHTSANDSHADOWS_H
#define VORTICE_HIGHLIGHTSANDSHADOWS_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class HighlightsAndShadows : public : ID2D1Effect
            {
                public HighlightsAndShadows(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.HighlightsShadows))
                {
                }

                public HighlightsAndShadows(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.HighlightsShadows))
                {
                }

                public float Highlights
                {
                    get => GetFloatValue((int)HighlightsAndShadowsProperties.Highlights);
                    set => SetValue((int)HighlightsAndShadowsProperties.Highlights, value);
                }

                public float Shadows
                {
                    get => GetFloatValue((int)HighlightsAndShadowsProperties.Shadows);
                    set => SetValue((int)HighlightsAndShadowsProperties.Shadows, value);
                }

                public float Clarity
                {
                    get => GetFloatValue((int)HighlightsAndShadowsProperties.Clarity);
                    set => SetValue((int)HighlightsAndShadowsProperties.Clarity, value);
                }

                public HighlightsAndShadowsInputGamma InputGamma
                {
                    get => GetEnumValue<HighlightsAndShadowsInputGamma>((int)HighlightsAndShadowsProperties.InputGamma);
                    set => SetValue((int)HighlightsAndShadowsProperties.InputGamma, value);
                }

                public float MaskBlurRadius
                {
                    get => GetFloatValue((int)HighlightsAndShadowsProperties.MaskBlurRadius);
                    set => SetValue((int)HighlightsAndShadowsProperties.MaskBlurRadius, value);
                }
            }


        }
    }
}

#endif // VORTICE_HIGHLIGHTSANDSHADOWS_H