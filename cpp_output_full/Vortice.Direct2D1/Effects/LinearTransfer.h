#ifndef VORTICE_LINEARTRANSFER_H
#define VORTICE_LINEARTRANSFER_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class LinearTransfer : public : public ID2D1Effect
            {
                LinearTransfer(ID2D1DeviceContext context)
            {
                }

                LinearTransfer(ID2D1EffectContext context)
            {
                }

                float m_redYIntercept{};
            void set_RedYIntercept(float value)
            { m_redYIntercept = value; }

                float m_redSlope{};
            void set_RedSlope(float value)
            { m_redSlope = value; }

                bool m_redDisable{};
            void set_RedDisable(bool value)
            { m_redDisable = value; }

                float m_greenYIntercept{};
            void set_GreenYIntercept(float value)
            { m_greenYIntercept = value; }

                float m_greenSlope{};
            void set_GreenSlope(float value)
            { m_greenSlope = value; }

                bool m_greenDisable{};
            void set_GreenDisable(bool value)
            { m_greenDisable = value; }

                float m_blueYIntercept{};
            void set_BlueYIntercept(float value)
            { m_blueYIntercept = value; }

                float m_blueSlope{};
            void set_BlueSlope(float value)
            { m_blueSlope = value; }

                bool m_blueDisable{};
            void set_BlueDisable(bool value)
            { m_blueDisable = value; }

                float m_alphaYIntercept{};
            void set_AlphaYIntercept(float value)
            { m_alphaYIntercept = value; }

                float m_alphaSlope{};
            void set_AlphaSlope(float value)
            { m_alphaSlope = value; }

                bool m_alphaDisable{};
            void set_AlphaDisable(bool value)
            { m_alphaDisable = value; }

                bool m_clampOutput{};
            void set_ClampOutput(bool value)
            { m_clampOutput = value; }

            }


        }
    }
}

#endif // VORTICE_LINEARTRANSFER_H