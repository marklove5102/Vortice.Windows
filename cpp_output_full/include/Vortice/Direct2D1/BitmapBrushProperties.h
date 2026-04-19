// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_BITMAPBRUSHPROPERTIES_H
#define VORTICE_DIRECT2D1_BITMAPBRUSHPROPERTIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BITMAPBRUSHPROPERTIES_H
#define VORTICE_VORTICE_BITMAPBRUSHPROPERTIES_H

#include <cstdint>

namespace Vortice {

struct BitmapBrushProperties
{
public:
    constexpr BitmapBrushProperties(ExtendMode extendModeX, ExtendMode extendModeY, BitmapInterpolationMode interpolationMode)
    ExtendModeX = extendModeX;
        ExtendModeY = extendModeY;
        InterpolationMode = interpolationMode;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BITMAPBRUSHPROPERTIES_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_BITMAPBRUSHPROPERTIES_H
