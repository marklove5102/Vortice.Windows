#ifndef VORTICE_DISTANTSPECULAR_H
#define VORTICE_DISTANTSPECULAR_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class DistantSpecular : public : public ID2D1Effect
            {
                DistantSpecular(ID2D1DeviceContext context)
            {
                }

                DistantSpecular(ID2D1EffectContext context)
            {
                }

                float m_azimuth{};
            float get_Azimuth() const { private: return m_azimuth{}; }

                float m_elevation{};
            float get_Elevation() const { private: return m_elevation{}; }

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

                DistantSpecularScaleMode m_scaleMode{};
            DistantSpecularScaleMode get_ScaleMode() const { private: return m_scaleMode{}; }

            }


        }
    }
}

#endif // VORTICE_DISTANTSPECULAR_H