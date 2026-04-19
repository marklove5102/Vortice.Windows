#ifndef VORTICE_SEPIA_H
#define VORTICE_SEPIA_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            using Vortice.DCommon;

            namespace Vortice.Direct2D1.Effects;

            public class Sepia : public : public ID2D1Effect
            {
                Sepia(ID2D1DeviceContext context)
            {
                }

                Sepia(ID2D1EffectContext context)
            {
                }

                float m_intensity{};
            float get_Intensity() const { private: return m_intensity{}; }

                AlphaMode m_alphaMode{};
            AlphaMode get_AlphaMode() const { private: return m_alphaMode{}; }

            }


        }
    }
}

#endif // VORTICE_SEPIA_H