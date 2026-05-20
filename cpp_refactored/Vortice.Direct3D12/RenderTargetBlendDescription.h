// Copyright (c) Contributors.

#ifndef VORTICE_RENDERTARGETBLENDDESCRIPTION_H
#define VORTICE_RENDERTARGETBLENDDESCRIPTION_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct RenderTargetBlendDescription : public : IEquatable<RenderTargetBlendDescription>
        {
                                                                                                                                                    public RenderTargetBlendDescription(bool blendEnable, bool logicOpEnable, Blend srcBlend, Blend destBlend, BlendOperation blendOp, Blend srcBlendAlpha, Blend destBlendAlpha, BlendOperation blendOpAlpha, LogicOp logicOp{};
                LogicOpEnable = logicOpEnable;
                SourceBlend = srcBlend;
                DestinationBlend = destBlend;
                BlendOperation = blendOp;
                SourceBlendAlpha = srcBlendAlpha;
                DestinationBlendAlpha = destBlendAlpha;
                BlendOperationAlpha = blendOpAlpha;
                LogicOp = logicOp;
                RenderTargetWriteMask = renderTargetWriteMask;
            }

            public: static bool operator{};
            }

            public static bool operator !=(in RenderTargetBlendDescription left, in RenderTargetBlendDescription right)
                => !(left == right);

            override bool Equals(const std::optional<std::any>& obj) const { return this{}; } (obj is RenderTargetBlendDescription other) && Equals(other);

            bool Equals(RenderTargetBlendDescription other)
        { this == other;

            override int32_t GetHashCode(void)
        {
                HashCode hashCode{};
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
                return hashCode.ToHashCode();
            }
        }


    }
}

#endif // VORTICE_RENDERTARGETBLENDDESCRIPTION_H