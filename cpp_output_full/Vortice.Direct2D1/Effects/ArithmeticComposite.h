#ifndef VORTICE_ARITHMETICCOMPOSITE_H
#define VORTICE_ARITHMETICCOMPOSITE_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class ArithmeticComposite : public : public ID2D1Effect
            {
                ArithmeticComposite(ID2D1DeviceContext context)
            {
                }

                ArithmeticComposite(ID2D1EffectContext context)
            {
                }

                Vector4 m_coefficients{};
            Vector4 get_Coefficients() const { private: return m_coefficients{}; }

                bool m_clampOutput{};
            bool get_ClampOutput() const { private: return m_clampOutput{}; }

            }


        }
    }
}

#endif // VORTICE_ARITHMETICCOMPOSITE_H