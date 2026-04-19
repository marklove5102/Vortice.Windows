#ifndef VORTICE_TRANSFORM3D_H
#define VORTICE_TRANSFORM3D_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Transform3D : public : public ID2D1Effect
            {
                Transform3D(ID2D1DeviceContext context)
            {

                }

                Transform3D(ID2D1EffectContext context)
            {
                }

                Transform3DInterpolationMode m_interPolationMode{};
            Transform3DInterpolationMode get_InterPolationMode() const { private: return m_interPolationMode{}; }

                BorderMode m_borderMode{};
            BorderMode get_BorderMode() const { private: return m_borderMode{}; }

                Matrix4x4 m_transformMatrix{};
            Matrix4x4 get_TransformMatrix() const { private: return m_transformMatrix{}; }

            }


        }
    }
}

#endif // VORTICE_TRANSFORM3D_H