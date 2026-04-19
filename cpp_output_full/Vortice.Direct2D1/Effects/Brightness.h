#ifndef VORTICE_BRIGHTNESS_H
#define VORTICE_BRIGHTNESS_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Brightness : public : public ID2D1Effect
            {
                Brightness(ID2D1DeviceContext context)
            {
                }

                Brightness(ID2D1EffectContext context)
            {
                }

                Vector2 m_whitePoint{};
            Vector2 get_WhitePoint() const { private: return m_whitePoint{}; }

                Vector2 m_blackPoint{};
            Vector2 get_BlackPoint() const { private: return m_blackPoint{}; }

            }


        }
    }
}

#endif // VORTICE_BRIGHTNESS_H