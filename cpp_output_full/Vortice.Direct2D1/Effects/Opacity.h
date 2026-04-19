#ifndef VORTICE_OPACITY_H
#define VORTICE_OPACITY_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Opacity : public : public ID2D1Effect
            {
                Opacity(ID2D1DeviceContext context)
            {
                }

                Opacity(ID2D1EffectContext context)
            {
                }

                float m_value{};
            void set_Value(float value)
            { m_value = value; }

            }


        }
    }
}

#endif // VORTICE_OPACITY_H