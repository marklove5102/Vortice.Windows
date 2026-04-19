// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_RADIALGRADIENTBRUSHPROPERTIES_H
#define VORTICE_DIRECT2D1_RADIALGRADIENTBRUSHPROPERTIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RADIALGRADIENTBRUSHPROPERTIES_H
#define VORTICE_VORTICE_RADIALGRADIENTBRUSHPROPERTIES_H

#include <cstdint>

namespace Vortice {

struct RadialGradientBrushProperties
{
public:
    constexpr RadialGradientBrushProperties(const Vector2& center, const Vector2& gradientOriginOffset, float radiusX, float radiusY)
    Center = center;
        GradientOriginOffset = gradientOriginOffset;
        RadiusX = radiusX;
        RadiusY = radiusY;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RADIALGRADIENTBRUSHPROPERTIES_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_RADIALGRADIENTBRUSHPROPERTIES_H
