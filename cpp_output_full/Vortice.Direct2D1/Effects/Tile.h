#ifndef VORTICE_TILE_H
#define VORTICE_TILE_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class Tile : public : public ID2D1Effect
            {
                Tile(ID2D1DeviceContext context)
            {
                }

                Tile(ID2D1EffectContext context)
            {
                }

                Vector4 m_rectangle{};
            void set_Rectangle(Vector4 value)
            { m_rectangle = value; }

            }


        }
    }
}

#endif // VORTICE_TILE_H