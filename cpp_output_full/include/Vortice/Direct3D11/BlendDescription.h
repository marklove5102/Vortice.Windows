// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_BLENDDESCRIPTION_H
#define VORTICE_DIRECT3D11_BLENDDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BLENDDESCRIPTION_H
#define VORTICE_VORTICE_BLENDDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct BlendDescription
{
public:
    constexpr BlendDescription(Blend sourceBlend, Blend destinationBlend)
    {}

    constexpr BlendDescription(Blend sourceBlend, Blend destinationBlend, Blend srcBlendAlpha, Blend destBlendAlpha)
    AlphaToCoverageEnable = false;
        IndependentBlendEnable = false;

        for (int i = 0; i < ID3D11BlendState.SimultaneousRenderTargetCount; i++)
        {
            RenderTarget[i].BlendEnable = IsBlendEnabled(ref RenderTarget[i]);
            RenderTarget[i].SourceBlend = sourceBlend;
            RenderTarget[i].DestinationBlend = destinationBlend;
            RenderTarget[i].BlendOperation = BlendOperation.Add;
            RenderTarget[i].SourceBlendAlpha = srcBlendAlpha;
            RenderTarget[i].DestinationBlendAlpha = destBlendAlpha;
            RenderTarget[i].BlendOperationAlpha = BlendOperation.Add;
            RenderTarget[i].RenderTargetWriteMask = ColorWriteEnable.All;
        }
    RawBool AlphaToCoverageEnable;
    RawBool IndependentBlendEnable;
    RenderTarget__FixedBuffer RenderTarget;
    static BlendDescription Opaque{> new(Blend.One, Blend.Zero)};
    static BlendDescription AlphaBlend{> new(Blend.One, Blend.InverseSourceAlpha)};
    static BlendDescription Additive{> new(Blend.SourceAlpha, Blend.One)};
    static BlendDescription NonPremultiplied{> new(Blend.SourceAlpha, Blend.InverseSourceAlpha)};
    static bool operator{=(in BlendDescription left, in BlendDescription right)
    {
        return (left.AlphaToCoverageEnable == right.AlphaToCoverageEnable)
            && (left.IndependentBlendEnable == right.IndependentBlendEnable)
            && (RenderTargetsAreEqual(left, right))};
    RenderTargetBlendDescription e0;
    RenderTargetBlendDescription e1;
    RenderTargetBlendDescription e2;
    RenderTargetBlendDescription e3;
    RenderTargetBlendDescription e4;
    RenderTargetBlendDescription e5;
    RenderTargetBlendDescription e6;
    RenderTargetBlendDescription e7;

    std::span<RenderTargetBlendDescription> AsSpan() { return MemoryMarshal.CreateSpan(ref e0, 8); }


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BLENDDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RENDERTARGET__FIXEDBUFFER_H
#define VORTICE_VORTICE_RENDERTARGET__FIXEDBUFFER_H

#include <cstdint>

namespace Vortice {

struct RenderTarget__FixedBuffer
{
public:
    RenderTargetBlendDescription e0;
    RenderTargetBlendDescription e1;
    RenderTargetBlendDescription e2;
    RenderTargetBlendDescription e3;
    RenderTargetBlendDescription e4;
    RenderTargetBlendDescription e5;
    RenderTargetBlendDescription e6;
    RenderTargetBlendDescription e7;

    std::span<RenderTargetBlendDescription> AsSpan() { return MemoryMarshal.CreateSpan(ref e0, 8); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RENDERTARGET__FIXEDBUFFER_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_BLENDDESCRIPTION_H
