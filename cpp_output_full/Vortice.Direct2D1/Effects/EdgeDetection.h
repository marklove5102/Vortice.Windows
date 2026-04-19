#ifndef VORTICE_EDGEDETECTION_H
#define VORTICE_EDGEDETECTION_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            using Vortice.DCommon;

            namespace Vortice.Direct2D1.Effects;

            public sealed class EdgeDetection : public : public ID2D1Effect
            {
                EdgeDetection(ID2D1DeviceContext context)
            {
                }

                EdgeDetection(ID2D1EffectContext context)
            {
                }

                float m_strength{};
            void set_Strength(float value)
            { m_strength = value; }

                float m_blurRadius{};
            void set_BlurRadius(float value)
            { m_blurRadius = value; }

                EdgeDetectionMode m_mode{};
            void set_Mode(EdgeDetectionMode value)
            { m_mode = value; }

                bool m_overlayEdges{};
            void set_OverlayEdges(bool value)
            { m_overlayEdges = value; }

                AlphaMode m_alphaMode{};
            void set_AlphaMode(AlphaMode value)
            { m_alphaMode = value; }

            }


        }
    }
}

#endif // VORTICE_EDGEDETECTION_H