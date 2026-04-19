// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_SWAPCHAINDESCRIPTION1_H
#define VORTICE_DXGI_SWAPCHAINDESCRIPTION1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SWAPCHAINDESCRIPTION1_H
#define VORTICE_VORTICE_SWAPCHAINDESCRIPTION1_H

#include <cstdint>

namespace Vortice {

struct SwapChainDescription1
{
public:
    constexpr SwapChainDescription1(uint32_t width, uint32_t height, Format Format.B8G8R8A8_UNorm, bool false, Usage Usage.RenderTargetOutput, uint32_t 2, Scaling Scaling.Stretch, SwapEffect SwapEffect.FlipDiscard, AlphaMode AlphaMode.Ignore, SwapChainFlags SwapChainFlags.None)
    Width = width;
        Height = height;
        Format = format;
        Stereo = stereo;
        SampleDescription = SampleDescription.Default;
        BufferUsage = bufferUsage;
        BufferCount = bufferCount;
        Scaling = scaling;
        SwapEffect = swapEffect;
        AlphaMode = alphaMode;
        Flags = flags;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_SWAPCHAINDESCRIPTION1_H

} // namespace Vortice

#endif // VORTICE_DXGI_SWAPCHAINDESCRIPTION1_H
