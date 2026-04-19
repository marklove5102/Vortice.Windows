// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RENDERTARGETBLENDDESCRIPTION_H
#define VORTICE_DIRECT3D12_RENDERTARGETBLENDDESCRIPTION_H

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
    constexpr RenderTargetBlendDescription(bool blendEnable, bool logicOpEnable, Blend srcBlend, Blend destBlend, BlendOperation blendOp, Blend srcBlendAlpha, Blend destBlendAlpha, BlendOperation blendOpAlpha, LogicOp LogicOp.Noop, ColorWriteEnable ColorWriteEnable.All)
    BlendEnable = blendEnable;
        LogicOpEnable = logicOpEnable;
        SourceBlend = srcBlend;
        DestinationBlend = destBlend;
        BlendOperation = blendOp;
        SourceBlendAlpha = srcBlendAlpha;
        DestinationBlendAlpha = destBlendAlpha;
        BlendOperationAlpha = blendOpAlpha;
        LogicOp = logicOp;
        RenderTargetWriteMask = renderTargetWriteMask;
    static bool operator{=(in RenderTargetBlendDescription left, in RenderTargetBlendDescription right)
    {
        return (left.BlendEnable == right.BlendEnable)
            && (left.LogicOpEnable == right.LogicOpEnable)
            && (left.SourceBlend == right.SourceBlend)
            && (left.DestinationBlend == right.DestinationBlend)
            && (left.BlendOperation == right.BlendOperation)
            && (left.SourceBlendAlpha == right.SourceBlendAlpha)
            && (left.DestinationBlendAlpha == right.DestinationBlendAlpha)
            && (left.BlendOperationAlpha == right.BlendOperationAlpha)
            && (left.LogicOp == right.LogicOp)
            && (left.RenderTargetWriteMask == right.RenderTargetWriteMask)};

    int32_t GetHashCode() override { HashCode hashCode = new();
        hashCode.Add(BlendEnable);
        hashCode.Add(LogicOpEnable);
        hashCode.Add(SourceBlend);
        hashCode.Add(DestinationBlend);
        hashCode.Add(BlendOperation);
        hashCode.Add(SourceBlendAlpha);
        hashCode.Add(DestinationBlendAlpha);
        hashCode.Add(BlendOperationAlpha);
        hashCode.Add(LogicOp);
        hashCode.Add(RenderTargetWriteMask);
        return hashCode.ToHashCode(); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RENDERTARGETBLENDDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RENDERTARGETBLENDDESCRIPTION_H
