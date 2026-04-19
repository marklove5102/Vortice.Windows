#ifndef VORTICE_TINT_H
#define VORTICE_TINT_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Tint : public : public ID2D1Effect
            {
                Tint(ID2D1DeviceContext context)
            {
                }

                Tint(ID2D1EffectContext context)
            {
                }

                Vector4 m_color{};
            Vector4 get_Color() const { private: return m_color{}; }

                bool m_clampOutput{};
            bool get_ClampOutput() const { private: return m_clampOutput{}; }

            }


        }
    }
}

#endif // VORTICE_TINT_H