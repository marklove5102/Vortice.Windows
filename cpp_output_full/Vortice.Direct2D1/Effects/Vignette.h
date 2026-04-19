#ifndef VORTICE_VIGNETTE_H
#define VORTICE_VIGNETTE_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Vignette : public : public ID2D1Effect
            {
                Vignette(ID2D1DeviceContext context)
            {
                }

                Vignette(ID2D1EffectContext context)
            {
                }

                Vector4 m_color{};
            void set_Color(Vector4 value)
            { m_color = value; }

                float m_transitionSize{};
            void set_TransitionSize(float value)
            { m_transitionSize = value; }

                float m_strength{};
            void set_Strength(float value)
            { m_strength = value; }

            }


        }
    }
}

#endif // VORTICE_VIGNETTE_H