#ifndef VORTICE_HIGHLIGHTSANDSHADOWS_H
#define VORTICE_HIGHLIGHTSANDSHADOWS_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class HighlightsAndShadows : public : public ID2D1Effect
            {
                HighlightsAndShadows(ID2D1DeviceContext context)
            {
                }

                HighlightsAndShadows(ID2D1EffectContext context)
            {
                }

                float m_highlights{};
            void set_Highlights(float value)
            { m_highlights = value; }

                float m_shadows{};
            void set_Shadows(float value)
            { m_shadows = value; }

                float m_clarity{};
            void set_Clarity(float value)
            { m_clarity = value; }

                HighlightsAndShadowsInputGamma m_inputGamma{};
            void set_InputGamma(HighlightsAndShadowsInputGamma value)
            { m_inputGamma = value; }

                float m_maskBlurRadius{};
            void set_MaskBlurRadius(float value)
            { m_maskBlurRadius = value; }

            }


        }
    }
}

#endif // VORTICE_HIGHLIGHTSANDSHADOWS_H