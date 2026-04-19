#ifndef VORTICE_BORDER_H
#define VORTICE_BORDER_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Border : public : public ID2D1Effect
            {
                Border(ID2D1DeviceContext context)
            {
                }

                Border(ID2D1EffectContext context)
            {
                }

                BorderEdgeMode m_edgeModeX{};
            BorderEdgeMode get_EdgeModeX() const { private: return m_edgeModeX{}; }

                BorderEdgeMode m_edgeModeY{};
            BorderEdgeMode get_EdgeModeY() const { private: return m_edgeModeY{}; }

            }


        }
    }
}

#endif // VORTICE_BORDER_H