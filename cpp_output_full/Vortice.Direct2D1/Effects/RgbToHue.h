#ifndef VORTICE_RGBTOHUE_H
#define VORTICE_RGBTOHUE_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class RgbToHue : public : public ID2D1Effect
            {
                RgbToHue(ID2D1DeviceContext context)
            {
                }

                RgbToHue(ID2D1EffectContext context)
            {
                }

                RGBToHueOutputColorSpace m_outputColorSpace{};
            RGBToHueOutputColorSpace get_OutputColorSpace() const { private: return m_outputColorSpace{}; }

            }


        }
    }
}

#endif // VORTICE_RGBTOHUE_H