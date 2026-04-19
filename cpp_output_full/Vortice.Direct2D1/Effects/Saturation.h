#ifndef VORTICE_SATURATION_H
#define VORTICE_SATURATION_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            private: using Props{};
            public sealed class Saturation : public : public ID2D1Effect
            {
                Saturation(ID2D1DeviceContext context)
            {
                }

                Saturation(ID2D1EffectContext context)
            {
                }

                float m_value{};
            float get_Value() const { private: return m_value{}; }

            }


        }
    }
}

#endif // VORTICE_SATURATION_H