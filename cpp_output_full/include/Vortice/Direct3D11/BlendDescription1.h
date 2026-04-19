// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_BLENDDESCRIPTION1_H
#define VORTICE_DIRECT3D11_BLENDDESCRIPTION1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BLENDDESCRIPTION1_H
#define VORTICE_VORTICE_BLENDDESCRIPTION1_H

#include <cstdint>

namespace Vortice {

struct BlendDescription1
{
public:
    constexpr BlendDescription1(Blend sourceBlend, Blend destinationBlend)
    {}

    constexpr BlendDescription1(Blend sourceBlend, Blend destinationBlend, Blend srcBlendAlpha, Blend destBlendAlpha)
    AlphaToCoverageEnable = false;
        IndependentBlendEnable = false;

        for (int i = 0; i < ID3D11BlendState.SimultaneousRenderTargetCount; i++)
        {
            RenderTarget[i].BlendEnable = IsBlendEnabled(ref RenderTarget[i]);
            RenderTarget[i].LogicOpEnable = false;
            RenderTarget[i].SourceBlend = sourceBlend;
            RenderTarget[i].DestinationBlend = destinationBlend;
            RenderTarget[i].BlendOperation = BlendOperation.Add;
            RenderTarget[i].SourceBlendAlpha = srcBlendAlpha;
            RenderTarget[i].DestinationBlendAlpha = destBlendAlpha;
            RenderTarget[i].BlendOperationAlpha = BlendOperation.Add;
            RenderTarget[i].LogicOp = LogicOp.Noop;
            RenderTarget[i].RenderTargetWriteMask = ColorWriteEnable.All;
        }
    static BlendDescription1 Opaque{> new(Blend.One, Blend.Zero)};
    static BlendDescription1 AlphaBlend{> new(Blend.One, Blend.InverseSourceAlpha)};
    static BlendDescription1 Additive{> new(Blend.SourceAlpha, Blend.One)};
    static BlendDescription1 NonPremultiplied{> new(Blend.SourceAlpha, Blend.InverseSourceAlpha)};


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BLENDDESCRIPTION1_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_BLENDDESCRIPTION1_H
