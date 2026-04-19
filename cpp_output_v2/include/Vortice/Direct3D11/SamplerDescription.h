// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_SAMPLERDESCRIPTION_H
#define VORTICE_DIRECT3D11_SAMPLERDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SAMPLERDESCRIPTION_H
#define VORTICE_VORTICE_SAMPLERDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct SamplerDescription : public IEquatable<SamplerDescription>
{
public:
    constexpr SamplerDescription(Filter filter, TextureAddressMode addressU, TextureAddressMode addressV, TextureAddressMode addressW, float mipLODBias, uint32_t maxAnisotropy, ComparisonFunction comparisonFunc, const Color4& borderColor, float float.MinValue, float float.MaxValue)
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
    constexpr SamplerDescription(Filter filter, TextureAddressMode addressU, TextureAddressMode addressV, TextureAddressMode addressW, float 0.0f, uint32_t 1, ComparisonFunction ComparisonFunction.Never, float float.MinValue, float float.MaxValue)
    Filter = filter;
        AddressU = addressU;
        AddressV = addressV;
        AddressW = addressW;
        MipLODBias = mipLODBias;
        MaxAnisotropy = maxAnisotropy;
        ComparisonFunc = comparisonFunc;
        BorderColor = new Color4(1.0f, 1.0f, 1.0f, 1.0f);
        MinLOD = minLOD;
        MaxLOD = maxLOD;
    constexpr SamplerDescription(Filter filter, TextureAddressMode address, float 0.0f, uint32_t 1, ComparisonFunction ComparisonFunction.Never, float float.MinValue, float float.MaxValue)
    Filter = filter;
        AddressU = address;
        AddressV = address;
        AddressW = address;
        MipLODBias = mipLODBias;
        MaxAnisotropy = maxAnisotropy;
        ComparisonFunc = comparisonFunc;
        BorderColor = new Color4(1.0f, 1.0f, 1.0f, 1.0f);
        MinLOD = minLOD;
        MaxLOD = maxLOD;
    static SamplerDescription PointWrap{> new(Filter.MinMagMipPoint, TextureAddressMode.Wrap)};
    static SamplerDescription PointClamp{> new(Filter.MinMagMipPoint, TextureAddressMode.Clamp)};
    static SamplerDescription LinearWrap{> new(Filter.MinMagMipLinear, TextureAddressMode.Wrap)};
    static SamplerDescription LinearClamp{> new(Filter.MinMagMipLinear, TextureAddressMode.Clamp)};
    static SamplerDescription AnisotropicWrap{> new(Filter.Anisotropic, TextureAddressMode.Wrap, 0.0f, ID3D11SamplerState.MaxMaxAnisotropy)};
    static SamplerDescription AnisotropicClamp{> new(Filter.Anisotropic, TextureAddressMode.Clamp, 0.0f, ID3D11SamplerState.MaxMaxAnisotropy)};
    static bool operator{=(in SamplerDescription left, in SamplerDescription right)
    {
        return (left.Filter == right.Filter)
            && (left.AddressU == right.AddressU)
            && (left.AddressV == right.AddressV)
            && (left.AddressW == right.AddressW)
            && (left.MipLODBias == right.MipLODBias)
            && (left.MaxAnisotropy == right.MaxAnisotropy)
            && (left.ComparisonFunc == right.ComparisonFunc)
            && (left.BorderColor[0] == right.BorderColor[0])
            && (left.BorderColor[1] == right.BorderColor[1])
            && (left.BorderColor[2] == right.BorderColor[2])
            && (left.BorderColor[3] == right.BorderColor[3])
            && (left.MinLOD == right.MinLOD)
            && (left.MaxLOD == right.MaxLOD)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SAMPLERDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_SAMPLERDESCRIPTION_H
