// Copyright (c) Contributors.

#ifndef VORTICE_TILEREGIONSIZE_H
#define VORTICE_TILEREGIONSIZE_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct TileRegionSize
        {
                            public TileRegionSize(uint32_t numTiles)
        {
                NumTiles = numTiles;
                UseBox = false;
                Width = Height = Depth = 0;
            }

                                    public TileRegionSize(uint32_t width, uint16_t height, uint16_t depth)
        {
                Width = width >= 1 ? width : 1;
                Height = height >= 1 ? height : (ushort)1;
                Depth = depth >= 1 ? depth : (ushort)1;
                NumTiles = Width * Height * Depth;
                UseBox = true;
            }
        }


    }
}

#endif // VORTICE_TILEREGIONSIZE_H