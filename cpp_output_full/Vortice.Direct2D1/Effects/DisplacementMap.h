#ifndef VORTICE_DISPLACEMENTMAP_H
#define VORTICE_DISPLACEMENTMAP_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class DisplacementMap : public : public ID2D1Effect
            {
                DisplacementMap(ID2D1DeviceContext context)
            {
                }

                DisplacementMap(ID2D1EffectContext context)
            {
                }

                float m_scale{};
            float get_Scale() const { private: return m_scale{}; }

                ChannelSelector m_xChannelSelect{};
            ChannelSelector get_XChannelSelect() const { private: return m_xChannelSelect{}; }

                ChannelSelector m_yChannelSelect{};
            ChannelSelector get_YChannelSelect() const { private: return m_yChannelSelect{}; }

            }


        }
    }
}

#endif // VORTICE_DISPLACEMENTMAP_H