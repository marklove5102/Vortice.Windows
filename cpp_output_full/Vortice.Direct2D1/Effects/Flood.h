#ifndef VORTICE_FLOOD_H
#define VORTICE_FLOOD_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Flood : public : public ID2D1Effect
            {
                Flood(ID2D1DeviceContext context)
            {
                }

                Flood(ID2D1EffectContext context)
            {
                }

                Vector4 m_color{};
            void set_Color(Vector4 value)
            { m_color = value; }

            }


        }
    }
}

#endif // VORTICE_FLOOD_H