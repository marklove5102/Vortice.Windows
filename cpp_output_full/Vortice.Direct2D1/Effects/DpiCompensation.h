#ifndef VORTICE_DPICOMPENSATION_H
#define VORTICE_DPICOMPENSATION_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class DpiCompensation : public : public ID2D1Effect
            {
                DpiCompensation(ID2D1DeviceContext context)
            {
                }

                DpiCompensation(ID2D1EffectContext context)
            {
                }

                DpiCompensationInterpolationMode m_interpolationMode{};
            void set_InterpolationMode(DpiCompensationInterpolationMode value)
            { m_interpolationMode = value; }

                BorderMode m_borderMode{};
            void set_BorderMode(BorderMode value)
            { m_borderMode = value; }

                float m_inputDpi{};
            void set_InputDpi(float value)
            { m_inputDpi = value; }

            }


        }
    }
}

#endif // VORTICE_DPICOMPENSATION_H