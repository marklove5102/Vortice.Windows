#ifndef VORTICE_CONTRAST_H
#define VORTICE_CONTRAST_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Contrast : public : public ID2D1Effect
            {
                Contrast(ID2D1DeviceContext context)
            {
                }

                Contrast(ID2D1EffectContext context)
            {
                }

                float m_value{};
            float get_Value() const { private: return m_value{}; }

                bool m_clampInput{};
            bool get_ClampInput() const { private: return m_clampInput{}; }

            }


        }
    }
}

#endif // VORTICE_CONTRAST_H