// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IMAGEBRUSHPROPERTIES_H
#define VORTICE_DIRECT2D1_IMAGEBRUSHPROPERTIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IMAGEBRUSHPROPERTIES_H
#define VORTICE_VORTICE_IMAGEBRUSHPROPERTIES_H

#include <cstdint>

namespace Vortice {

struct ImageBrushProperties
{
public:
    constexpr ImageBrushProperties(RectangleF sourceRectangle, ExtendMode extendModeX, ExtendMode extendModeY, InterpolationMode interpolationMode)
    SourceRectangle = sourceRectangle;
        ExtendModeX = extendModeX;
        ExtendModeY = extendModeY;
        InterpolationMode = interpolationMode;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IMAGEBRUSHPROPERTIES_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IMAGEBRUSHPROPERTIES_H
