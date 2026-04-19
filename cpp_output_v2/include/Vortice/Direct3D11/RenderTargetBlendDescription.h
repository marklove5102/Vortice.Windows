// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_RENDERTARGETBLENDDESCRIPTION_H
#define VORTICE_DIRECT3D11_RENDERTARGETBLENDDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RENDERTARGETBLENDDESCRIPTION_H
#define VORTICE_VORTICE_RENDERTARGETBLENDDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct RenderTargetBlendDescription : public IEquatable<RenderTargetBlendDescription>
{
public:
    static bool operator{=(in RenderTargetBlendDescription left, in RenderTargetBlendDescription right)
    {
        return (left.BlendEnable == right.BlendEnable)
            && (left.SourceBlend == right.SourceBlend)
            && (left.DestinationBlend == right.DestinationBlend)
            && (left.BlendOperation == right.BlendOperation)
            && (left.SourceBlendAlpha == right.SourceBlendAlpha)
            && (left.DestinationBlendAlpha == right.DestinationBlendAlpha)
            && (left.BlendOperationAlpha == right.BlendOperationAlpha)
            && (left.RenderTargetWriteMask == right.RenderTargetWriteMask)};

    int32_t GetHashCode() override { return HashCode.Combine(BlendEnable, SourceBlend, DestinationBlend, BlendOperation, SourceBlendAlpha, DestinationBlendAlpha, BlendOperationAlpha, RenderTargetWriteMask); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RENDERTARGETBLENDDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_RENDERTARGETBLENDDESCRIPTION_H
