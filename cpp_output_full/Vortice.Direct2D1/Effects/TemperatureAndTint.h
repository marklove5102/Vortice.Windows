#ifndef VORTICE_TEMPERATUREANDTINT_H
#define VORTICE_TEMPERATUREANDTINT_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class TemperatureAndTint : public : public ID2D1Effect
            {
                TemperatureAndTint(ID2D1DeviceContext context)
            {
                }

                TemperatureAndTint(ID2D1EffectContext context)
            {
                }

                float m_temperature{};
            void set_Temperature(float value)
            { m_temperature = value; }

                float m_tint{};
            void set_Tint(float value)
            { m_tint = value; }

            }


        }
    }
}

#endif // VORTICE_TEMPERATUREANDTINT_H