// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_BITMAPBRUSHPROPERTIES1_H
#define VORTICE_DIRECT2D1_BITMAPBRUSHPROPERTIES1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BITMAPBRUSHPROPERTIES1_H
#define VORTICE_VORTICE_BITMAPBRUSHPROPERTIES1_H

#include <cstdint>

namespace Vortice {

struct BitmapBrushProperties1
{
public:
    constexpr BitmapBrushProperties1(ExtendMode extendModeX, ExtendMode extendModeY, InterpolationMode interpolationMode)
    ExtendModeX = extendModeX;
        ExtendModeY = extendModeY;
        InterpolationMode = interpolationMode;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BITMAPBRUSHPROPERTIES1_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_BITMAPBRUSHPROPERTIES1_H
