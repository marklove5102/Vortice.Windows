#ifndef VORTICE_HUEROTATION_H
#define VORTICE_HUEROTATION_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class HueRotation : public : public ID2D1Effect
            {
                HueRotation(ID2D1DeviceContext context)
            {
                }

                HueRotation(ID2D1EffectContext context)
            {
                }

                float m_angle{};
            void set_Angle(float value)
            { m_angle = value; }

            }


        }
    }
}

#endif // VORTICE_HUEROTATION_H