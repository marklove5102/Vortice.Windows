#ifndef VORTICE_SHARPEN_H
#define VORTICE_SHARPEN_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Sharpen : public : public ID2D1Effect
            {
                Sharpen(ID2D1DeviceContext context)
            {
                }

                Sharpen(ID2D1EffectContext context)
            {
                }

                float m_sharpness{};
            float get_Sharpness() const { private: return m_sharpness{}; }

                float m_threshold{};
            float get_Threshold() const { private: return m_threshold{}; }

            }


        }
    }
}

#endif // VORTICE_SHARPEN_H