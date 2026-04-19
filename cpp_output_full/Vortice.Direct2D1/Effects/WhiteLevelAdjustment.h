#ifndef VORTICE_WHITELEVELADJUSTMENT_H
#define VORTICE_WHITELEVELADJUSTMENT_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class WhiteLevelAdjustment : public : public ID2D1Effect
            {
                WhiteLevelAdjustment(ID2D1DeviceContext context)
            {
                }

                WhiteLevelAdjustment(ID2D1EffectContext context)
            {
                }

                float m_inputWhiteLebel{};
            void set_InputWhiteLebel(float value)
            { m_inputWhiteLebel = value; }

                float m_outputWhiteLevel{};
            void set_OutputWhiteLevel(float value)
            { m_outputWhiteLevel = value; }

            }


        }
    }
}

#endif // VORTICE_WHITELEVELADJUSTMENT_H