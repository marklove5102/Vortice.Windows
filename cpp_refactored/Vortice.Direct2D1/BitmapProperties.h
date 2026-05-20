// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BITMAPPROPERTIES_H
#define VORTICE_BITMAPPROPERTIES_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {

        namespace Vortice.Direct2D1;

        struct BitmapProperties
        {
                            public BitmapProperties(PixelFormat pixelFormat)
        {
                PixelFormat = pixelFormat;
                DpiX = 96.0f;
                DpiY = 96.0f;
            }

                                    public BitmapProperties(PixelFormat pixelFormat, float dpiX, float dpiY)
        {
                PixelFormat = pixelFormat;
                DpiX = dpiX;
                DpiY = dpiY;
            }
        }


    }
}

#endif // VORTICE_BITMAPPROPERTIES_H