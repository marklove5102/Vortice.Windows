#ifndef VORTICE_TURBULENCE_H
#define VORTICE_TURBULENCE_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Turbulence : public : public ID2D1Effect
            {
                Turbulence(ID2D1DeviceContext context)
            {
                }

                Turbulence(ID2D1EffectContext context)
            {
                }

                Vector2 m_offset{};
            Vector2 get_Offset() const { private: return m_offset{}; }
            void set_Offset(Vector2 value)
            { m_offset = value; }

                Vector2 m_size{};
            Vector2 get_Size() const { private: return m_size{}; }

                Vector2 m_baseFrequency{};
            Vector2 get_BaseFrequency() const { private: return m_baseFrequency{}; }

                int32_t m_numOctaves{};
            void set_NumOctaves(int32_t value)
            { m_numOctaves = value; }

                int32_t m_seed{};
            int32_t get_Seed() const { private: return m_seed{}; }

                TurbulenceNoise m_noise{};
            TurbulenceNoise get_Noise() const { private: return m_noise{}; }

                bool m_stitchable{};
            bool get_Stitchable() const { private: return m_stitchable{}; }

            }


        }
    }
}

#endif // VORTICE_TURBULENCE_H