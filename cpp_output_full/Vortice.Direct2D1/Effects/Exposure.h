#ifndef VORTICE_EXPOSURE_H
#define VORTICE_EXPOSURE_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Exposure : public : public ID2D1Effect
            {
                Exposure(ID2D1DeviceContext context)
            {
                }

                Exposure(ID2D1EffectContext context)
            {
                }

                float m_value{};
            void set_Value(float value)
            { m_value = value; }

            }


        }
    }
}

#endif // VORTICE_EXPOSURE_H