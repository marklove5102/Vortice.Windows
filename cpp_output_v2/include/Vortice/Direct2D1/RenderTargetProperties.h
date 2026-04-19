// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_RENDERTARGETPROPERTIES_H
#define VORTICE_DIRECT2D1_RENDERTARGETPROPERTIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RENDERTARGETPROPERTIES_H
#define VORTICE_VORTICE_RENDERTARGETPROPERTIES_H

#include <cstdint>

namespace Vortice {

struct RenderTargetProperties
{
public:
    constexpr RenderTargetProperties(PixelFormat pixelFormat)
    {}

    constexpr RenderTargetProperties(RenderTargetType type, PixelFormat pixelFormat, float dpiX, float dpiY, RenderTargetUsage usage, FeatureLevel minLevel)
    Type = type;
        PixelFormat = pixelFormat;
        DpiX = dpiX;
        DpiY = dpiY;
        Usage = usage;
        MinLevel = minLevel;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RENDERTARGETPROPERTIES_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_RENDERTARGETPROPERTIES_H
