// Copyright (c) Contributors.

#ifndef VORTICE_IWICPALETTE_H
#define VORTICE_IWICPALETTE_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace WIC {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.WIC;

        class IWICPalette
        {
            public uint[] GetColors()
            {
                var colors{};
                GetColors((uint)colors.Length, colors, out _);
                return colors{};
            }

            void GetColors(const std::vector<uint32_t>& colors)
        {
                GetColors((uint)colors.Length, colors, out _);
            }
        }


    }
}

#endif // VORTICE_IWICPALETTE_H