#ifndef VORTICE_DIRECTIONALBLUR_H
#define VORTICE_DIRECTIONALBLUR_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class DirectionalBlur : public : public ID2D1Effect
            {
                DirectionalBlur(ID2D1DeviceContext context)
            {
                }

                DirectionalBlur(ID2D1EffectContext context)
            {
                }

                float m_standardDeviation{};
            float get_StandardDeviation() const { private: return m_standardDeviation{}; }

                float m_angle{};
            float get_Angle() const { private: return m_angle{}; }

                DirectionalBlurOptimization m_optimization{};
            DirectionalBlurOptimization get_Optimization() const { private: return m_optimization{}; }

                BorderMode m_borderMode{};
            BorderMode get_BorderMode() const { private: return m_borderMode{}; }

            }


        }
    }
}

#endif // VORTICE_DIRECTIONALBLUR_H