// Copyright (c) Contributors.

#ifndef VORTICE_SAMPLERDESCRIPTION_H
#define VORTICE_SAMPLERDESCRIPTION_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11;
        publicstruct SamplerDescription : : IEquatable<SamplerDescription>
        {
            public static SamplerDescription get_PointWrap() const { return new(Filter.MinMagMipPoint, TextureAddressMode.Wrap); }
            public static SamplerDescription get_PointClamp() const { return new(Filter.MinMagMipPoint, TextureAddressMode.Clamp); }
            public static SamplerDescription get_LinearWrap() const { return new(Filter.MinMagMipLinear, TextureAddressMode.Wrap); }
            public static SamplerDescription get_LinearClamp() const { return new(Filter.MinMagMipLinear, TextureAddressMode.Clamp); }
            public static SamplerDescription get_AnisotropicWrap() const { return new(Filter.Anisotropic, TextureAddressMode.Wrap, 0.0f, ID3D11SamplerState.MaxMaxAnisotropy); }
            public static SamplerDescription get_AnisotropicClamp() const { return new(Filter.Anisotropic, TextureAddressMode.Clamp, 0.0f, ID3D11SamplerState.MaxMaxAnisotropy); }
                                                                public SamplerDescription(Filter filter, TextureAddressMode addressU, TextureAddressMode addressV, TextureAddressMode addressW, float mipLODBias, uint32_t maxAnisotropy, ComparisonFunction comparisonFunc, const Color4& borderColor, float minLOD, float maxLOD)
                {
                Filter = filter;
                AddressU = addressU;
                AddressV = addressV;
                AddressW = addressW;
                MipLODBias = mipLODBias;
                MaxAnisotropy = maxAnisotropy;
                ComparisonFunc = comparisonFunc;
                BorderColor = borderColor;
                MinLOD = minLOD;
                MaxLOD = maxLOD;
            }
                                                            public SamplerDescription(Filter filter, TextureAddressMode addressU, TextureAddressMode addressV, TextureAddressMode addressW, float mipLODBias, uint32_t maxAnisotropy, ComparisonFunction comparisonFunc, float minLOD, float maxLOD)
                {
                Filter = filter;
                AddressU = addressU;
                AddressV = addressV;
                AddressW = addressW;
                MipLODBias = mipLODBias;
                MaxAnisotropy = maxAnisotropy;
                ComparisonFunc = comparisonFunc;
                BorderColor = new Color4(void);
                MinLOD = minLOD;
                MaxLOD = maxLOD;
            }
                                                    public SamplerDescription(Filter filter, TextureAddressMode address, float mipLODBias, uint32_t maxAnisotropy, ComparisonFunction comparisonFunc, float minLOD, float maxLOD)
                {
                Filter = filter;
                AddressU = address;
                AddressV = address;
                AddressW = address;
                MipLODBias = mipLODBias;
                MaxAnisotropy = maxAnisotropy;
                ComparisonFunc = comparisonFunc;
                BorderColor = new Color4(void);
                MinLOD = minLOD;
                MaxLOD = maxLOD;
            }
            public: static bool operator{};
            }
            public static bool operator !=(in SamplerDescription left, in SamplerDescription right)
                => !(left == right);
            publicoverride bool Equals(const std::optional<std::any>& obj) (obj is SamplerDescription other) && Equals(other);
            publicbool Equals(SamplerDescription other) this == other;
            public override readonly int32_t GetHashCode(void)
                {
                HashCode hashCode{};
                hashCode.Add(Filter);
                hashCode.Add(AddressU);
                hashCode.Add(AddressV);
                hashCode.Add(AddressW);
                hashCode.Add(MipLODBias);
                hashCode.Add(MaxAnisotropy);
                hashCode.Add(ComparisonFunc);
                hashCode.Add(BorderColor);
                hashCode.Add(BorderColor);
                hashCode.Add(BorderColor);
                hashCode.Add(BorderColor);
                hashCode.Add(MinLOD);
                hashCode.Add(MaxLOD);
                return hashCode.ToHashCode();
            }
        }

    }
}

#endif // VORTICE_SAMPLERDESCRIPTION_H