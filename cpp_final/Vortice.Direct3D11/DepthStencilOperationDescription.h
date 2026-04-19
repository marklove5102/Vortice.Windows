// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION_H
#define VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D11 {


        namespace Vortice.Direct3D11;

        struct DepthStencilOperationDescription : public : IEquatable<DepthStencilOperationDescription>
        {
                        public: static const DepthStencilOperationDescription Default{};

                                        public DepthStencilOperationDescription(StencilOperation stencilFailOp, StencilOperation stencilDepthFailOp, StencilOperation stencilPassOp, ComparisonFunction stencilFunc)
        {
                StencilFailOp = stencilFailOp;
                StencilDepthFailOp = stencilDepthFailOp;
                StencilPassOp = stencilPassOp;
                StencilFunc = stencilFunc;
            }

            public: static bool operator{};
            }

            public static bool operator !=(in DepthStencilOperationDescription left, in DepthStencilOperationDescription right)
                => !(left == right);

            override bool Equals(const std::optional<std::any>& obj) const { return this{}; } (obj is DepthStencilOperationDescription other) && Equals(other);

            bool Equals(DepthStencilOperationDescription other) const { return HashCode.Combine(StencilFailOp, StencilDepthFailOp, StencilPassOp, StencilFunc); } this == other;

            override int32_t GetHashCode(void)
        { HashCode.Combine(StencilFailOp, StencilDepthFailOp, StencilPassOp, StencilFunc);
        }


    }
}

#endif // VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION_H