// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_BITMAPPROPERTIES1_H
#define VORTICE_DIRECT2D1_BITMAPPROPERTIES1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BITMAPPROPERTIES1_H
#define VORTICE_VORTICE_BITMAPPROPERTIES1_H

#include <cstdint>

namespace Vortice {

struct BitmapProperties1
{
public:
    constexpr BitmapProperties1(PixelFormat pixelFormat)
    {}

    constexpr BitmapProperties1(PixelFormat pixelFormat, float dpiX, float dpiY)
    {}

    constexpr BitmapProperties1(PixelFormat pixelFormat, float dpiX, float dpiY, BitmapOptions bitmapOptions)
    {}

    constexpr BitmapProperties1(PixelFormat pixelFormat, float dpiX, float dpiY, BitmapOptions bitmapOptions, ID2D1ColorContext colorContext)
    PixelFormat = pixelFormat;
        DpiX = dpiX;
        DpiY = dpiY;
        BitmapOptions = bitmapOptions;
        ColorContext = colorContext;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BITMAPPROPERTIES1_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_BITMAPPROPERTIES1_H
