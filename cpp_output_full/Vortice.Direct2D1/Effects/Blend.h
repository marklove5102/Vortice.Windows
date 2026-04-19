#ifndef VORTICE_BLEND_H
#define VORTICE_BLEND_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Blend : public : public ID2D1Effect
            {
                Blend(ID2D1DeviceContext context)
            {
                }

                Blend(ID2D1EffectContext context)
            {
                }

                BlendMode m_mode{};
            BlendMode get_Mode() const { private: return m_mode{}; }

            }


        }
    }
}

#endif // VORTICE_BLEND_H