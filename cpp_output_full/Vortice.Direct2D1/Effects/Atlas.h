#ifndef VORTICE_ATLAS_H
#define VORTICE_ATLAS_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Atlas : public : public ID2D1Effect
            {
                Atlas(ID2D1DeviceContext context)
            {

                }

                Atlas(ID2D1EffectContext context)
            {
                }

                Vector4 m_inputRectangle{};
            Vector4 get_InputRectangle() const { private: return m_inputRectangle{}; }

                Vector4 m_inputPaddingRect{};
            Vector4 get_InputPaddingRect() const { private: return m_inputPaddingRect{}; }

            }


        }
    }
}

#endif // VORTICE_ATLAS_H