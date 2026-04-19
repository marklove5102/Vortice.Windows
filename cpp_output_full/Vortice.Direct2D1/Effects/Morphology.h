#ifndef VORTICE_MORPHOLOGY_H
#define VORTICE_MORPHOLOGY_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Morphology : public : public ID2D1Effect
            {
                Morphology(ID2D1DeviceContext context)
            {
                }

                Morphology(ID2D1EffectContext context)
            {
                }

                MorphologyMode m_mode{};
            void set_Mode(MorphologyMode value)
            { m_mode = value; }

                int32_t m_width{};
            void set_Width(int32_t value)
            { m_width = value; }

                int32_t m_height{};
            void set_Height(int32_t value)
            { m_height = value; }

            }


        }
    }
}

#endif // VORTICE_MORPHOLOGY_H