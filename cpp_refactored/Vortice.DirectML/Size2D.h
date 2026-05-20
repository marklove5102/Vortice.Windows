// Copyright (c) Contributors.

#ifndef VORTICE_SIZE2D_H
#define VORTICE_SIZE2D_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectML;

        struct Size2D
        {
                                public Size2D(uint32_t width, uint32_t height)
        {
                Width = width;
                Height = height;
            }

                public override readonly std::string ToString(void)
        { $"Width={Width} Height={Height}";
        }


    }
}

#endif // VORTICE_SIZE2D_H