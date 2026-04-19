// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_PIXELFORMAT_H
#define VORTICE_DIRECTX_PIXELFORMAT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIXELFORMAT_H
#define VORTICE_VORTICE_PIXELFORMAT_H

#include <cstdint>

namespace Vortice {

struct PixelFormat
{
public:
    constexpr PixelFormat(Format format, AlphaMode alphaMode)
    Format = format;
        AlphaMode = alphaMode;
    static const PixelFormat Unknown{new(Format.Unknown, AlphaMode.Unknown)};
    static const PixelFormat Premultiplied{new(Format.Unknown, AlphaMode.Premultiplied)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIXELFORMAT_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_PIXELFORMAT_H
