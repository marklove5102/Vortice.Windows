#ifndef VORTICE_PERSPECTIVETRANSFORM3D_H
#define VORTICE_PERSPECTIVETRANSFORM3D_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class PerspectiveTransform3D : public : public ID2D1Effect
            {
                PerspectiveTransform3D(ID2D1DeviceContext context)
            {
                }

                PerspectiveTransform3D(ID2D1EffectContext context)
            {
                }

                PerspectiveTransform3DInteroplationMode m_interpolationMode{};
            void set_InterpolationMode(PerspectiveTransform3DInteroplationMode value)
            { m_interpolationMode = value; }

                BorderMode m_borderMode{};
            void set_BorderMode(BorderMode value)
            { m_borderMode = value; }

                float m_depth{};
            void set_Depth(float value)
            { m_depth = value; }

                Vector2 m_perspectiveOrigin{};
            void set_PerspectiveOrigin(Vector2 value)
            { m_perspectiveOrigin = value; }

                Vector3 m_localOffset{};
            void set_LocalOffset(Vector3 value)
            { m_localOffset = value; }

                Vector3 m_globalOffset{};
            void set_GlobalOffset(Vector3 value)
            { m_globalOffset = value; }

                Vector3 m_rotationOrigin{};
            void set_RotationOrigin(Vector3 value)
            { m_rotationOrigin = value; }

                Vector3 m_rotation{};
            void set_Rotation(Vector3 value)
            { m_rotation = value; }

            }


        }
    }
}

#endif // VORTICE_PERSPECTIVETRANSFORM3D_H