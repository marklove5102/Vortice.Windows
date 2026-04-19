// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_SVGPRESERVEASPECTRATIO_H
#define VORTICE_DIRECT2D1_SVGPRESERVEASPECTRATIO_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SVGPRESERVEASPECTRATIO_H
#define VORTICE_VORTICE_SVGPRESERVEASPECTRATIO_H

#include <cstdint>

namespace Vortice {

struct SvgPreserveAspectRatio
{
public:
    constexpr SvgPreserveAspectRatio(bool defer, SvgAspectAlign align, SvgAspectScaling meetOrSlice)
    Defer = defer;
        Align = align;
        MeetOrSlice = meetOrSlice;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_SVGPRESERVEASPECTRATIO_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_SVGPRESERVEASPECTRATIO_H
