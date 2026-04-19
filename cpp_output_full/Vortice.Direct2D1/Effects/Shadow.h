#ifndef VORTICE_SHADOW_H
#define VORTICE_SHADOW_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Shadow : public : public ID2D1Effect
            {
                Shadow(ID2D1DeviceContext context)
            {
                }

                Shadow(ID2D1EffectContext context)
            {
                }

                float m_blurStandardDeviation{};
            float get_BlurStandardDeviation() const { private: return m_blurStandardDeviation{}; }

                Vector4 m_color{};
            Vector4 get_Color() const { private: return m_color{}; }

                ShadowOptimization m_optimization{};
            ShadowOptimization get_Optimization() const { private: return m_optimization{}; }

            }


        }
    }
}

#endif // VORTICE_SHADOW_H