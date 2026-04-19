#ifndef VORTICE_POINTDIFFUSE_H
#define VORTICE_POINTDIFFUSE_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class PointDiffuse : public : public ID2D1Effect
            {
                PointDiffuse(ID2D1DeviceContext context)
            {
                }

                PointDiffuse(ID2D1EffectContext context)
            {
                }

                Vector3 m_lightPosition{};
            void set_LightPosition(Vector3 value)
            { m_lightPosition = value; }

                float m_diffuseConstant{};
            void set_DiffuseConstant(float value)
            { m_diffuseConstant = value; }

                float m_surfaceScale{};
            void set_SurfaceScale(float value)
            { m_surfaceScale = value; }

                Vector3 m_color{};
            void set_Color(Vector3 value)
            { m_color = value; }

                Vector2 m_kernelUnitLength{};
            void set_KernelUnitLength(Vector2 value)
            { m_kernelUnitLength = value; }

                PointDiffuseScaleMode m_scaleMode{};
            void set_ScaleMode(PointDiffuseScaleMode value)
            { m_scaleMode = value; }

            }


        }
    }
}

#endif // VORTICE_POINTDIFFUSE_H