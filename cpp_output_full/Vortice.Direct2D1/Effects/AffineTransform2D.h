#ifndef VORTICE_AFFINETRANSFORM2D_H
#define VORTICE_AFFINETRANSFORM2D_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class AffineTransform2D : public : public ID2D1Effect
            {
                AffineTransform2D(ID2D1DeviceContext context)
            {
                }

                AffineTransform2D(ID2D1EffectContext context)
            {
                }

                AffineTransform2DInterpolationMode m_interPolationMode{};
            void set_InterPolationMode(AffineTransform2DInterpolationMode value)
            { m_interPolationMode = value; }

                BorderMode m_borderMode{};
            void set_BorderMode(BorderMode value)
            { m_borderMode = value; }

                Matrix3x2 m_transformMatrix{};
            Matrix3x2 get_TransformMatrix() const { private: return m_transformMatrix{}; }

                float m_sharpness{};
            float get_Sharpness() const { private: return m_sharpness{}; }

            }


        }
    }
}

#endif // VORTICE_AFFINETRANSFORM2D_H