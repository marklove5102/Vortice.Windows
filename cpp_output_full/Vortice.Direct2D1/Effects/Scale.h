#ifndef VORTICE_SCALE_H
#define VORTICE_SCALE_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Scale : public : public ID2D1Effect
            {
                Scale(ID2D1DeviceContext context)
            {
                }

                Scale(ID2D1EffectContext context)
            {
                }

                Vector2 m_value{};
            Vector2 get_Value() const { private: return m_value{}; }

                Vector2 m_centerPoint{};
            Vector2 get_CenterPoint() const { private: return m_centerPoint{}; }

                BorderMode m_borderMode{};
            BorderMode get_BorderMode() const { private: return m_borderMode{}; }

                float m_sharpness{};
            float get_Sharpness() const { private: return m_sharpness{}; }

                ScaleInterpolationMode m_interpolationMode{};
            ScaleInterpolationMode get_InterpolationMode() const { private: return m_interpolationMode{}; }

            }


        }
    }
}

#endif // VORTICE_SCALE_H