// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RENDERTARGETBLENDDESCRIPTION_H
#define VORTICE_RENDERTARGETBLENDDESCRIPTION_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D11 {


        namespace Vortice.Direct3D11;

        struct RenderTargetBlendDescription : public : IEquatable<RenderTargetBlendDescription>
        {
            public: static bool operator{};
            }

            public static bool operator !=(in RenderTargetBlendDescription left, in RenderTargetBlendDescription right)
                => !(left == right);

            override bool Equals(const std::optional<std::any>& obj) const { return this{}; } (obj is RenderTargetBlendDescription other) && Equals(other);

            bool Equals(RenderTargetBlendDescription other)
        { this == other;

            override int32_t GetHashCode(void)
        {
                return HashCode.Combine(BlendEnable, SourceBlend, DestinationBlend, BlendOperation, SourceBlendAlpha, DestinationBlendAlpha, BlendOperationAlpha, RenderTargetWriteMask);
            }
        }


    }
}

#endif // VORTICE_RENDERTARGETBLENDDESCRIPTION_H