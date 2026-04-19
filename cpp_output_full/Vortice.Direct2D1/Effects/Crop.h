#ifndef VORTICE_CROP_H
#define VORTICE_CROP_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Crop : public : public ID2D1Effect
            {
                Crop(ID2D1DeviceContext context)
            {
                }

                Crop(ID2D1EffectContext context)
            {
                }

                Vector4 m_rectangle{};
            Vector4 get_Rectangle() const { private: return m_rectangle{}; }

                BorderMode m_borderMode{};
            BorderMode get_BorderMode() const { private: return m_borderMode{}; }

            }


        }
    }
}

#endif // VORTICE_CROP_H