#ifndef VORTICE_GAMMATRANSFER_H
#define VORTICE_GAMMATRANSFER_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class GammaTransfer : public : public ID2D1Effect
            {
                GammaTransfer(ID2D1DeviceContext context)
            {
                }

                GammaTransfer(ID2D1EffectContext context)
            {
                }

                float m_redAmplitude{};
            float get_RedAmplitude() const { private: return m_redAmplitude{}; }

                float m_redExponent{};
            float get_RedExponent() const { private: return m_redExponent{}; }

                float m_redOffset{};
            float get_RedOffset() const { private: return m_redOffset{}; }
            void set_RedOffset(float value)
            { m_redOffset = value; }

                bool m_redDisable{};
            bool get_RedDisable() const { private: return m_redDisable{}; }

                float m_greenAmplitude{};
            float get_GreenAmplitude() const { private: return m_greenAmplitude{}; }

                float m_greenExponent{};
            float get_GreenExponent() const { private: return m_greenExponent{}; }

                float m_greenOffset{};
            float get_GreenOffset() const { private: return m_greenOffset{}; }
            void set_GreenOffset(float value)
            { m_greenOffset = value; }

                bool m_greenDisable{};
            bool get_GreenDisable() const { private: return m_greenDisable{}; }

                float m_blueAmplitude{};
            float get_BlueAmplitude() const { private: return m_blueAmplitude{}; }

                float m_blueExponent{};
            float get_BlueExponent() const { private: return m_blueExponent{}; }

                float m_blueOffset{};
            float get_BlueOffset() const { private: return m_blueOffset{}; }
            void set_BlueOffset(float value)
            { m_blueOffset = value; }

                bool m_blueDisable{};
            bool get_BlueDisable() const { private: return m_blueDisable{}; }

                float m_alphaAmplitude{};
            float get_AlphaAmplitude() const { private: return m_alphaAmplitude{}; }

                float m_alphaExponent{};
            float get_AlphaExponent() const { private: return m_alphaExponent{}; }

                float m_alphaOffset{};
            float get_AlphaOffset() const { private: return m_alphaOffset{}; }
            void set_AlphaOffset(float value)
            { m_alphaOffset = value; }

                bool m_alphaDisable{};
            bool get_AlphaDisable() const { private: return m_alphaDisable{}; }

                bool m_clampOutput{};
            bool get_ClampOutput() const { private: return m_clampOutput{}; }

            }


        }
    }
}

#endif // VORTICE_GAMMATRANSFER_H