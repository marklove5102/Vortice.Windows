#ifndef VORTICE_LOOKUPTABLE3D_H
#define VORTICE_LOOKUPTABLE3D_H

#include <cstdint>
#include <optional>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            using Vortice.DCommon;

            namespace Vortice.Direct2D1.Effects;

            public sealed class LookupTable3D : public : public ID2D1Effect
            {
                LookupTable3D(ID2D1DeviceContext context)
            {
                }

                LookupTable3D(ID2D1EffectContext context)
            {
                }

                std::optional<ID2D1LookupTable3D> m_lUT{};
            void set_LUT(const std::optional<ID2D1LookupTable3D>& value)
            { m_lUT = value; }

                AlphaMode m_alphaMode{};
            void set_AlphaMode(AlphaMode value)
            { m_alphaMode = value; }

            }


        }
    }
}

#endif // VORTICE_LOOKUPTABLE3D_H