// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_LINEARGRADIENTBRUSHPROPERTIES_H
#define VORTICE_DIRECT2D1_LINEARGRADIENTBRUSHPROPERTIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_LINEARGRADIENTBRUSHPROPERTIES_H
#define VORTICE_VORTICE_LINEARGRADIENTBRUSHPROPERTIES_H

#include <cstdint>

namespace Vortice {

struct LinearGradientBrushProperties
{
public:
    constexpr LinearGradientBrushProperties(const Vector2& startPoint, const Vector2& endPoint)
    StartPoint = startPoint;
        EndPoint = endPoint;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_LINEARGRADIENTBRUSHPROPERTIES_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_LINEARGRADIENTBRUSHPROPERTIES_H
