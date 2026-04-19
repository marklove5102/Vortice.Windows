#ifndef VORTICE_CHROMAKEY_H
#define VORTICE_CHROMAKEY_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class ChromaKey : public : public ID2D1Effect
            {
                ChromaKey(ID2D1DeviceContext context)
            {
                }

                ChromaKey(ID2D1EffectContext context)
            {
                }

                Vector3 m_color{};
            Vector3 get_Color() const { private: return m_color{}; }

                float m_tolerance{};
            float get_Tolerance() const { private: return m_tolerance{}; }

                bool m_invertAlpha{};
            bool get_InvertAlpha() const { private: return m_invertAlpha{}; }

                bool m_feather{};
            bool get_Feather() const { private: return m_feather{}; }

            }


        }
    }
}

#endif // VORTICE_CHROMAKEY_H