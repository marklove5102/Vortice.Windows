#ifndef VORTICE_SPOTDIFFUSE_H
#define VORTICE_SPOTDIFFUSE_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class SpotDiffuse : public : public ID2D1Effect
            {
                SpotDiffuse(ID2D1DeviceContext context)
            {
                }

                SpotDiffuse(ID2D1EffectContext context)
            {
                }

                Vector3 m_lightPosition{};
            Vector3 get_LightPosition() const { private: return m_lightPosition{}; }

                Vector3 m_pointsAt{};
            Vector3 get_PointsAt() const { private: return m_pointsAt{}; }

                float m_focus{};
            float get_Focus() const { private: return m_focus{}; }

                float m_limitingConeAngle{};
            float get_LimitingConeAngle() const { private: return m_limitingConeAngle{}; }

                float m_diffuseConstant{};
            float get_DiffuseConstant() const { private: return m_diffuseConstant{}; }

                float m_surfaceScale{};
            float get_SurfaceScale() const { private: return m_surfaceScale{}; }

                Vector3 m_color{};
            Vector3 get_Color() const { private: return m_color{}; }

                Vector2 m_kernelUnitLength{};
            Vector2 get_KernelUnitLength() const { private: return m_kernelUnitLength{}; }

                SpotDiffuseScaleMode m_scaleMode{};
            SpotDiffuseScaleMode get_ScaleMode() const { private: return m_scaleMode{}; }

            }


        }
    }
}

#endif // VORTICE_SPOTDIFFUSE_H