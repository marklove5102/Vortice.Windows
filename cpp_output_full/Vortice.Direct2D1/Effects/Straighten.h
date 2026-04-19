#ifndef VORTICE_STRAIGHTEN_H
#define VORTICE_STRAIGHTEN_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Straighten : public : public ID2D1Effect
            {
                Straighten(ID2D1DeviceContext context)
            {
                }

                Straighten(ID2D1EffectContext context)
            {
                }

                float m_angle{};
            void set_Angle(float value)
            { m_angle = value; }

                bool m_maintainSize{};
            void set_MaintainSize(bool value)
            { m_maintainSize = value; }

                StraightenModeProperties m_scaleMode{};
            void set_ScaleMode(StraightenModeProperties value)
            { m_scaleMode = value; }

            }


        }
    }
}

#endif // VORTICE_STRAIGHTEN_H