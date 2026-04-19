#ifndef VORTICE_HDRTONEMAP_H
#define VORTICE_HDRTONEMAP_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            private: using Props{};
            public sealed class HdrToneMap : public : public ID2D1Effect
            {
                HdrToneMap(ID2D1DeviceContext context)
            {
                }

                HdrToneMap(ID2D1EffectContext context)
            {
                }

                float m_inputMaxLuminance{};
            float get_InputMaxLuminance() const { private: return m_inputMaxLuminance{}; }

                float m_outputMaxLuminance{};
            float get_OutputMaxLuminance() const { private: return m_outputMaxLuminance{}; }

                HDRToneMapDisplayMode m_displayMode{};
            HDRToneMapDisplayMode get_DisplayMode() const { private: return m_displayMode{}; }

            }


        }
    }
}

#endif // VORTICE_HDRTONEMAP_H