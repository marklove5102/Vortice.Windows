#ifndef VORTICE_COMPOSITE_H
#define VORTICE_COMPOSITE_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Composite : public : public ID2D1Effect
            {
                Composite(ID2D1DeviceContext context)
            {
                }

                Composite(ID2D1EffectContext context)
            {
                }

                CompositeMode m_mode{};
            CompositeMode get_Mode() const { private: return m_mode{}; }

            }


        }
    }
}

#endif // VORTICE_COMPOSITE_H