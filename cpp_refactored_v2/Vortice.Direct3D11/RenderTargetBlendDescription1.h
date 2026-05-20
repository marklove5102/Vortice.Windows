// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RENDERTARGETBLENDDESCRIPTION1_H
#define VORTICE_RENDERTARGETBLENDDESCRIPTION1_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D11 {


        namespace Vortice.Direct3D11;
        publicstruct RenderTargetBlendDescription1 : : IEquatable<RenderTargetBlendDescription1>
        {
            public: static bool operator{};
            }
            public static bool operator !=(in RenderTargetBlendDescription1 left, in RenderTargetBlendDescription1 right)
                => !(left == right);
            publicoverride bool Equals(const std::optional<std::any>& obj) (obj is RenderTargetBlendDescription1 other) && Equals(other);
            publicbool Equals(RenderTargetBlendDescription1 other) this == other;
            publicoverride int32_t GetHashCode(void)
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

#endif // VORTICE_RENDERTARGETBLENDDESCRIPTION1_H