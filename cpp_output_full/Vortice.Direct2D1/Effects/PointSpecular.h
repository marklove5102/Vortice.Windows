#ifndef VORTICE_POINTSPECULAR_H
#define VORTICE_POINTSPECULAR_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class PointSpecular : public : public ID2D1Effect
            {
                PointSpecular(ID2D1DeviceContext context)
            {
                }

                PointSpecular(ID2D1EffectContext context)
            {
                }

                Vector3 m_lightPosition{};
            void set_LightPosition(Vector3 value)
            { m_lightPosition = value; }

                float m_specularExponent{};
            void set_SpecularExponent(float value)
            { m_specularExponent = value; }

                float m_specularConstant{};
            void set_SpecularConstant(float value)
            { m_specularConstant = value; }

                float m_surfaceScale{};
            void set_SurfaceScale(float value)
            { m_surfaceScale = value; }

                Vector3 m_color{};
            void set_Color(Vector3 value)
            { m_color = value; }

                Vector2 m_kernelUnitLength{};
            void set_KernelUnitLength(Vector2 value)
            { m_kernelUnitLength = value; }

                PointSpecularScaleMode m_scaleMode{};
            void set_ScaleMode(PointSpecularScaleMode value)
            { m_scaleMode = value; }

            }


        }
    }
}

#endif // VORTICE_POINTSPECULAR_H