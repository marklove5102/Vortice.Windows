#ifndef VORTICE_DISTANTDIFFUSE_H
#define VORTICE_DISTANTDIFFUSE_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class DistantDiffuse : public : public ID2D1Effect
            {
                DistantDiffuse(ID2D1DeviceContext context)
            {
                }

                DistantDiffuse(ID2D1EffectContext context)
            {
                }

                float m_azimuth{};
            float get_Azimuth() const { private: return m_azimuth{}; }

                float m_elevation{};
            float get_Elevation() const { private: return m_elevation{}; }

                float m_diffuseConstant{};
            float get_DiffuseConstant() const { private: return m_diffuseConstant{}; }

                float m_surfaceScale{};
            float get_SurfaceScale() const { private: return m_surfaceScale{}; }

                Vector3 m_color{};
            Vector3 get_Color() const { private: return m_color{}; }

                Vector2 m_kernelUnitLength{};
            Vector2 get_KernelUnitLength() const { private: return m_kernelUnitLength{}; }

                DistantDiffuseScaleMode m_scaleMode{};
            DistantDiffuseScaleMode get_ScaleMode() const { private: return m_scaleMode{}; }

            }


        }
    }
}

#endif // VORTICE_DISTANTDIFFUSE_H