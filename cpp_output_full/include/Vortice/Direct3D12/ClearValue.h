// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_CLEARVALUE_H
#define VORTICE_DIRECT3D12_CLEARVALUE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CLEARVALUE_H
#define VORTICE_VORTICE_CLEARVALUE_H

#include <cstdint>

namespace Vortice {

struct ClearValue
{
public:
    constexpr ClearValue(Format format, const Color4& color)
    Unsafe.SkipInit(out this);

        Format = format;
        Color = color;
    constexpr ClearValue(Format format, const DepthStencilValue& depthStencil)
    Unsafe.SkipInit(out this);

        Format = format;
        DepthStencil = depthStencil;
    constexpr ClearValue(Format format, float depth, uint8_t 0)
    Unsafe.SkipInit(out this);

        Format = format;
        DepthStencil = new DepthStencilValue(depth, stencil);
};

} // namespace Vortice

#endif // VORTICE_VORTICE_CLEARVALUE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_CLEARVALUE_H
