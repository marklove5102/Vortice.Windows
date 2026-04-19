// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_BITMAPPROPERTIES_H
#define VORTICE_DIRECT2D1_BITMAPPROPERTIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BITMAPPROPERTIES_H
#define VORTICE_VORTICE_BITMAPPROPERTIES_H

#include <cstdint>

namespace Vortice {

struct BitmapProperties
{
public:
    constexpr BitmapProperties(PixelFormat pixelFormat)
    PixelFormat = pixelFormat;
        DpiX = 96.0f;
        DpiY = 96.0f;
    constexpr BitmapProperties(PixelFormat pixelFormat, float dpiX, float dpiY)
    PixelFormat = pixelFormat;
        DpiX = dpiX;
        DpiY = dpiY;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BITMAPPROPERTIES_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_BITMAPPROPERTIES_H
