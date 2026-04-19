#ifndef VORTICE_SPOTSPECULAR_H
#define VORTICE_SPOTSPECULAR_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public class SpotSpecular : public : public ID2D1Effect
            {
                SpotSpecular(ID2D1DeviceContext context)
            {
                }

                SpotSpecular(ID2D1EffectContext context)
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

                float m_specularExponent{};
            float get_SpecularExponent() const { private: return m_specularExponent{}; }

                float m_specularConstant{};
            float get_SpecularConstant() const { private: return m_specularConstant{}; }

                float m_surfaceScale{};
            float get_SurfaceScale() const { private: return m_surfaceScale{}; }

                Vector3 m_color{};
            Vector3 get_Color() const { private: return m_color{}; }

                Vector2 m_kernelUnitLength{};
            Vector2 get_KernelUnitLength() const { private: return m_kernelUnitLength{}; }

                SpotSpecularScaleMode m_scaleMode{};
            SpotSpecularScaleMode get_ScaleMode() const { private: return m_scaleMode{}; }

            }


        }
    }
}

#endif // VORTICE_SPOTSPECULAR_H