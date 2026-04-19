// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DEPTHSTENCILDESCRIPTION_H
#define VORTICE_DEPTHSTENCILDESCRIPTION_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D11 {


        namespace Vortice.Direct3D11;

        struct DepthStencilDescription : public : IEquatable<DepthStencilDescription>
        {
                        public static DepthStencilDescription get_None() const { return new(false, DepthWriteMask.Zero); }

                        public static DepthStencilDescription get_Default() const { return new(true, DepthWriteMask.All); }

                        public static DepthStencilDescription get_DepthRead() const { return new(true, DepthWriteMask.Zero); }

                        public static DepthStencilDescription get_DepthReverseZ() const { return new(true, DepthWriteMask.All, ComparisonFunction.GreaterEqual); }

                        public static DepthStencilDescription get_DepthReadReverseZ() const { return new(true, DepthWriteMask.Zero, ComparisonFunction.GreaterEqual); }

                                    public DepthStencilDescription(bool depthEnable, DepthWriteMask depthWriteMask, ComparisonFunction depthFunc{};
                DepthWriteMask = depthWriteMask;
                DepthFunc = depthFunc;
                StencilEnable = false;
                StencilReadMask = ID3D11DepthStencilState.DefaultStencilReadMask;
                StencilWriteMask = ID3D11DepthStencilState.DefaultStencilWriteMask;
                FrontFace = DepthStencilOperationDescription.Default;
                BackFace = DepthStencilOperationDescription.Default;
            }

                                                                                public DepthStencilDescription(bool depthEnable, bool depthWriteEnable, ComparisonFunction depthFunc, bool stencilEnable, uint8_t stencilReadMask, uint8_t stencilWriteMask, StencilOperation frontStencilFailOp, StencilOperation frontStencilDepthFailOp, StencilOperation frontStencilPassOp, ComparisonFunction frontStencilFunc, StencilOperation backStencilFailOp, StencilOperation backStencilDepthFailOp, StencilOperation backStencilPassOp, ComparisonFunction backStencilFunc)
        {
                DepthEnable = depthEnable;
                DepthWriteMask = depthWriteEnable ? DepthWriteMask.All : DepthWriteMask.Zero;
                DepthFunc = depthFunc;
                StencilEnable = stencilEnable;
                StencilReadMask = stencilReadMask;
                StencilWriteMask = stencilWriteMask;
                FrontFace.StencilFailOp = frontStencilFailOp;
                FrontFace.StencilDepthFailOp = frontStencilDepthFailOp;
                FrontFace.StencilPassOp = frontStencilPassOp;
                FrontFace.StencilFunc = frontStencilFunc;
                BackFace.StencilFailOp = backStencilFailOp;
                BackFace.StencilDepthFailOp = backStencilDepthFailOp;
                BackFace.StencilPassOp = backStencilPassOp;
                BackFace.StencilFunc = backStencilFunc;
            }

            public: static bool operator{};
            }

            public static bool operator !=(in DepthStencilDescription left, in DepthStencilDescription right)
                => !(left == right);

            override bool Equals(const std::optional<std::any>& obj) const { return this{}; } (obj is DepthStencilDescription other) && Equals(other);

            bool Equals(DepthStencilDescription other) const { return HashCode.Combine(DepthEnable, DepthWriteMask, DepthFunc, StencilEnable, StencilReadMask, StencilWriteMask, FrontFace, BackFace); } this == other;

            override int32_t GetHashCode(void)
        { HashCode.Combine(DepthEnable, DepthWriteMask, DepthFunc, StencilEnable, StencilReadMask, StencilWriteMask, FrontFace, BackFace);
        }


    }
}

#endif // VORTICE_DEPTHSTENCILDESCRIPTION_H