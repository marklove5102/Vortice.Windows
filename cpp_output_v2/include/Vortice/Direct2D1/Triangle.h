// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_TRIANGLE_H
#define VORTICE_DIRECT2D1_TRIANGLE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TRIANGLE_H
#define VORTICE_VORTICE_TRIANGLE_H

#include <cstdint>

namespace Vortice {

struct Triangle
{
public:
    constexpr Triangle(const Vector2& point1, const Vector2& point2, const Vector2& point3)
    Point1 = point1;
        Point2 = point2;
        Point3 = point3;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TRIANGLE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_TRIANGLE_H
