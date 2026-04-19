#ifndef VORTICE_POSTERIZE_H
#define VORTICE_POSTERIZE_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Posterize : public : public ID2D1Effect
            {
                Posterize(ID2D1DeviceContext context)
            {
                }

                Posterize(ID2D1EffectContext context)
            {
                }

                int32_t m_redValueCount{};
            void set_RedValueCount(int32_t value)
            { m_redValueCount = value; }

                int32_t m_greenValueCount{};
            void set_GreenValueCount(int32_t value)
            { m_greenValueCount = value; }

                int32_t m_blueValueCount{};
            void set_BlueValueCount(int32_t value)
            { m_blueValueCount = value; }

            }


        }
    }
}

#endif // VORTICE_POSTERIZE_H