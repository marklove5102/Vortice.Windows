// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ARCSEGMENT_H
#define VORTICE_DIRECT2D1_ARCSEGMENT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ARCSEGMENT_H
#define VORTICE_VORTICE_ARCSEGMENT_H

#include <cstdint>

namespace Vortice {

struct ArcSegment
{
public:
    constexpr ArcSegment(Vector2 point, Size size, float rotationAngle, SweepDirection sweepDirection, ArcSize arcSize)
    Point = point;
        Size = size;
        RotationAngle = rotationAngle;
        SweepDirection = sweepDirection;
        ArcSize = arcSize;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ARCSEGMENT_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ARCSEGMENT_H
