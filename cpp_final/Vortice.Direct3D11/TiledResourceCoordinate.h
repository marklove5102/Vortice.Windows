// Copyright (c) Contributors.

#ifndef VORTICE_TILEDRESOURCECOORDINATE_H
#define VORTICE_TILEDRESOURCECOORDINATE_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D11;

        struct TiledResourceCoordinate
        {
                                                    public TiledResourceCoordinate(uint32_t x, uint32_t y, uint32_t z, uint32_t subresource)
        {
                X = x;
                Y = y;
                Z = z;
                Subresource = subresource;
            }
        }


    }
}

#endif // VORTICE_TILEDRESOURCECOORDINATE_H