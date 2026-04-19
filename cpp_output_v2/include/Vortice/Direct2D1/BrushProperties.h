// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_BRUSHPROPERTIES_H
#define VORTICE_DIRECT2D1_BRUSHPROPERTIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BRUSHPROPERTIES_H
#define VORTICE_VORTICE_BRUSHPROPERTIES_H

#include <cstdint>

namespace Vortice {

struct BrushProperties
{
public:
    constexpr BrushProperties(float opacity)
    Opacity = opacity;
        Transform = Matrix3x2.Identity;
    constexpr BrushProperties(float opacity, Matrix3x2 transform)
    Opacity = opacity;
        Transform = transform;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BRUSHPROPERTIES_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_BRUSHPROPERTIES_H
