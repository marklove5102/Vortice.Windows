#ifndef VORTICE_CROSSFADE_H
#define VORTICE_CROSSFADE_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class CrossFade : public : public ID2D1Effect
            {
                CrossFade(ID2D1DeviceContext context)
            {
                }

                CrossFade(ID2D1EffectContext context)
            {
                }

                float m_weight{};
            float get_Weight() const { private: return m_weight{}; }

            }


        }
    }
}

#endif // VORTICE_CROSSFADE_H