#ifndef VORTICE_HUETORGB_H
#define VORTICE_HUETORGB_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class HueToRgb : public : public ID2D1Effect
            {
                HueToRgb(ID2D1DeviceContext context)
            {
                }

                HueToRgb(ID2D1EffectContext context)
            {
                }

                HueToRGBInputColorSpace m_inputColorSpace{};
            void set_InputColorSpace(HueToRGBInputColorSpace value)
            { m_inputColorSpace = value; }

            }


        }
    }
}

#endif // VORTICE_HUETORGB_H