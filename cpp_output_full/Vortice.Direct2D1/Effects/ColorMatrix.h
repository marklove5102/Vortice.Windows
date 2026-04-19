#ifndef VORTICE_COLORMATRIX_H
#define VORTICE_COLORMATRIX_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public class ColorMatrix : public : public ID2D1Effect
            {
                ColorMatrix(ID2D1DeviceContext context)
            {
                }

                ColorMatrix(ID2D1EffectContext context)
            {
                }

                Matrix5x4 m_matrix{};
            Matrix5x4 get_Matrix() const { private: return m_matrix{}; }

                ColorMatrixAlphaMode m_alphaMode{};
            ColorMatrixAlphaMode get_AlphaMode() const { private: return m_alphaMode{}; }

            }


        }
    }
}

#endif // VORTICE_COLORMATRIX_H