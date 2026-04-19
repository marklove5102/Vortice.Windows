// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BITMAPPROPERTIES1_H
#define VORTICE_BITMAPPROPERTIES1_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct2D1 {

        namespace Vortice.Direct2D1;

        struct BitmapProperties1
        {
                            public BitmapProperties1(PixelFormat pixelFormat)
                : this(pixelFormat, 96.0f, 96.0f, BitmapOptions.None, nullptr)
            {
            }

                                    public BitmapProperties1(PixelFormat pixelFormat, float dpiX, float dpiY)
                : this(pixelFormat, dpiX, dpiY, BitmapOptions.None, nullptr)
            {
            }

                                        public BitmapProperties1(PixelFormat pixelFormat, float dpiX, float dpiY, BitmapOptions bitmapOptions)
                : this(pixelFormat, dpiX, dpiY, bitmapOptions, nullptr)
            {
            }

                                            public BitmapProperties1(PixelFormat pixelFormat, float dpiX, float dpiY, BitmapOptions bitmapOptions, const std::optional<ID2D1ColorContext>& colorContext)
        {
                PixelFormat = pixelFormat;
                DpiX = dpiX;
                DpiY = dpiY;
                BitmapOptions = bitmapOptions;
                ColorContext = colorContext;
            }
        }


    }
}

#endif // VORTICE_BITMAPPROPERTIES1_H