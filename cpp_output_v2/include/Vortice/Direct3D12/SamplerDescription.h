// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_SAMPLERDESCRIPTION_H
#define VORTICE_DIRECT3D12_SAMPLERDESCRIPTION_H

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

struct SamplerDescription
{
public:
    constexpr SamplerDescription(Filter filter, TextureAddressMode addressU, TextureAddressMode addressV, TextureAddressMode addressW, float mipLODBias, uint32_t maxAnisotropy, ComparisonFunction comparisonFunction, const Color4& borderColor, float minLOD, float maxLOD)
    Filter = filter;
        AddressU = addressU;
        AddressV = addressV;
        AddressW = addressW;
        MipLODBias = mipLODBias;
        MaxAnisotropy = maxAnisotropy;
        ComparisonFunction = comparisonFunction;
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
        ComparisonFunction = comparisonFunction;
        BorderColor = new Color4(1.0f, 1.0f, 1.0f, 1.0f);
        MinLOD = minLOD;
        MaxLOD = maxLOD;
    static SamplerDescription Default{> new(Filter.MinMagMipLinear, TextureAddressMode.Clamp, TextureAddressMode.Clamp, TextureAddressMode.Clamp)};
    static SamplerDescription PointWrap{> new(Filter.MinMagMipPoint, TextureAddressMode.Wrap, TextureAddressMode.Wrap, TextureAddressMode.Wrap)};
    static SamplerDescription PointClamp{> new(Filter.MinMagMipPoint, TextureAddressMode.Clamp, TextureAddressMode.Clamp, TextureAddressMode.Clamp)};
    static SamplerDescription LinearWrap{> new(Filter.MinMagMipLinear, TextureAddressMode.Wrap, TextureAddressMode.Wrap, TextureAddressMode.Wrap)};
    static SamplerDescription LinearClamp{> new(Filter.MinMagMipLinear, TextureAddressMode.Clamp, TextureAddressMode.Clamp, TextureAddressMode.Clamp)};
    static SamplerDescription AnisotropicWrap{> new(Filter.Anisotropic, TextureAddressMode.Wrap, TextureAddressMode.Wrap, TextureAddressMode.Wrap)};
    static SamplerDescription AnisotropicClamp{> new(Filter.Anisotropic, TextureAddressMode.Clamp, TextureAddressMode.Clamp, TextureAddressMode.Clamp)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SAMPLERDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_SAMPLERDESCRIPTION_H
