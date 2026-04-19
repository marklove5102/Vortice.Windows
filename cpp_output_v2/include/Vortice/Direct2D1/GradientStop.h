// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_GRADIENTSTOP_H
#define VORTICE_DIRECT2D1_GRADIENTSTOP_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GRADIENTSTOP_H
#define VORTICE_VORTICE_GRADIENTSTOP_H

#include <cstdint>

namespace Vortice {

struct GradientStop
{
public:
    constexpr GradientStop(float position, const Color4& color)
    Position = position;
        Color = color;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_GRADIENTSTOP_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_GRADIENTSTOP_H
