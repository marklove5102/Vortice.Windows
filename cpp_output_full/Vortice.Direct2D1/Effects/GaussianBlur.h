#ifndef VORTICE_GAUSSIANBLUR_H
#define VORTICE_GAUSSIANBLUR_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class GaussianBlur : public : public ID2D1Effect
            {
                GaussianBlur(ID2D1DeviceContext context)
            {
                }

                GaussianBlur(ID2D1EffectContext context)
            {
                }

                float m_standardDeviation{};
            void set_StandardDeviation(float value)
            { m_standardDeviation = value; }

                GaussianBlurOptimization m_optimization{};
            void set_Optimization(GaussianBlurOptimization value)
            { m_optimization = value; }

                BorderMode m_borderMode{};
            void set_BorderMode(BorderMode value)
            { m_borderMode = value; }

            }


        }
    }
}

#endif // VORTICE_GAUSSIANBLUR_H