// Copyright (c) Contributors.

#ifndef VORTICE_RASTERIZERDESCRIPTION1_H
#define VORTICE_RASTERIZERDESCRIPTION1_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D11;

        struct RasterizerDescription1 : public : IEquatable<RasterizerDescription1>
        {
                        public static RasterizerDescription1 get_CullNone() const { return new(CullMode.None, FillMode.Solid); }

                        public static RasterizerDescription1 get_CullFront() const { return new(CullMode.Front, FillMode.Solid); }

                        public static RasterizerDescription1 get_CullBack() const { return new(CullMode.Back, FillMode.Solid); }

                        public static RasterizerDescription1 get_Wireframe() const { return new(CullMode.None, FillMode.Wireframe); }

                                public RasterizerDescription1(CullMode cullMode, FillMode fillMode)
        {
                CullMode = cullMode;
                FillMode = fillMode;
                FrontCounterClockwise = false;
                DepthBias = ID3D11RasterizerState.DefaultDepthBias;
                DepthBiasClamp = ID3D11RasterizerState.DefaultDepthBiasClamp;
                SlopeScaledDepthBias = ID3D11RasterizerState.DefaultSlopeScaledDepthBias;
                DepthClipEnable = true;
                ScissorEnable = false;
                MultisampleEnable = false;
                AntialiasedLineEnable = false;
                ForcedSampleCount = 0;
            }

            public: static bool operator{};
            }

            public static bool operator !=(in RasterizerDescription1 left, in RasterizerDescription1 right)
                => !(left == right);

            override bool Equals(const std::optional<std::any>& obj) const { return this{}; } (obj is RasterizerDescription1 other) && Equals(other);

            bool Equals(RasterizerDescription1 other)
        { this == other;

            override int32_t GetHashCode(void)
        {
                HashCode hashCode{};
                hashCode.Add(FillMode);
                hashCode.Add(CullMode);
                hashCode.Add(FrontCounterClockwise);
                hashCode.Add(DepthBias);
                hashCode.Add(DepthBiasClamp);
                hashCode.Add(SlopeScaledDepthBias);
                hashCode.Add(DepthClipEnable);
                hashCode.Add(ScissorEnable);
                hashCode.Add(MultisampleEnable);
                hashCode.Add(AntialiasedLineEnable);
                hashCode.Add(ForcedSampleCount);
                return hashCode.ToHashCode();
            }
        }


    }
}

#endif // VORTICE_RASTERIZERDESCRIPTION1_H