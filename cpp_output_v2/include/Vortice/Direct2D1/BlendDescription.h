// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_BLENDDESCRIPTION_H
#define VORTICE_DIRECT2D1_BLENDDESCRIPTION_H

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

    constexpr BlendDescription(Blend sourceBlend, Blend destinationBlend, Blend sourceBlendAlpha, Blend destinationBlendAlpha)
    SourceBlend = sourceBlend;
        DestinationBlend = destinationBlend;
        BlendOperation = BlendOperation.Add;
        SourceBlendAlpha = sourceBlendAlpha;
        DestinationBlendAlpha = destinationBlendAlpha;
        BlendOperationAlpha = BlendOperation.Add;
        BlendFactor = default;
    constexpr BlendDescription(Blend sourceBlend, Blend destinationBlend, BlendOperation blendOperation, Blend sourceBlendAlpha, Blend destinationBlendAlpha, BlendOperation blendOperationAlpha)
    SourceBlend = sourceBlend;
        DestinationBlend = destinationBlend;
        BlendOperation = blendOperation;
        SourceBlendAlpha = sourceBlendAlpha;
        DestinationBlendAlpha = destinationBlendAlpha;
        BlendOperationAlpha = blendOperationAlpha;
        BlendFactor = new Color4(1.0f, 1.0f, 1.0f, 1.0f);
    constexpr BlendDescription(Blend sourceBlend, Blend destinationBlend, BlendOperation blendOperation, Blend sourceBlendAlpha, Blend destinationBlendAlpha, BlendOperation blendOperationAlpha, const Color4& blendFactor)
    SourceBlend = sourceBlend;
        DestinationBlend = destinationBlend;
        BlendOperation = blendOperation;
        SourceBlendAlpha = sourceBlendAlpha;
        DestinationBlendAlpha = destinationBlendAlpha;
        BlendOperationAlpha = blendOperationAlpha;
        BlendFactor = blendFactor;
    static BlendDescription Opaque{> new(Blend.One, Blend.Zero)};
    static BlendDescription AlphaBlend{> new(Blend.One, Blend.InverseSourceAlpha)};
    static BlendDescription Additive{> new(Blend.SourceAlpha, Blend.One)};
    static BlendDescription NonPremultiplied{> new(Blend.SourceAlpha, Blend.InverseSourceAlpha)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_BLENDDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_BLENDDESCRIPTION_H
