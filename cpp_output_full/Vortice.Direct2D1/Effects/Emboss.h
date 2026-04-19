#ifndef VORTICE_EMBOSS_H
#define VORTICE_EMBOSS_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Emboss : public : public ID2D1Effect
            {
                Emboss(ID2D1DeviceContext context)
            {
                }

                Emboss(ID2D1EffectContext context)
            {
                }

                float m_height{};
            void set_Height(float value)
            { m_height = value; }

                float m_direction{};
            void set_Direction(float value)
            { m_direction = value; }

            }


        }
    }
}

#endif // VORTICE_EMBOSS_H