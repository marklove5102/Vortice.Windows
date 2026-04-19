// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_STATICSAMPLERDESCRIPTION_H
#define VORTICE_DIRECT3D12_STATICSAMPLERDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_STATICSAMPLERDESCRIPTION_H
#define VORTICE_VORTICE_STATICSAMPLERDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct StaticSamplerDescription
{
public:
    constexpr StaticSamplerDescription(ShaderVisibility shaderVisibility, uint32_t shaderRegister, uint32_t registerSpace)
    Filter = Filter.MinMagMipLinear;
        AddressU = TextureAddressMode.Clamp;
        AddressV = TextureAddressMode.Clamp;
        AddressW = TextureAddressMode.Clamp;
        MipLODBias = 0.0f;
        MaxAnisotropy = 1;
        ComparisonFunction = ComparisonFunction.Never;
        BorderColor = StaticBorderColor.TransparentBlack;
        MinLOD = float.MinValue;
        MaxLOD = float.MaxValue;

        ShaderRegister = shaderRegister;
        RegisterSpace = registerSpace;
        ShaderVisibility = shaderVisibility;
    constexpr StaticSamplerDescription(uint32_t shaderRegister, Filter Filter.Anisotropic, TextureAddressMode TextureAddressMode.Wrap, TextureAddressMode TextureAddressMode.Wrap, TextureAddressMode TextureAddressMode.Wrap, float 0.0f, uint32_t 16, ComparisonFunction ComparisonFunction.LessEqual, StaticBorderColor StaticBorderColor.OpaqueWhite, float 0.0f, float float.MaxValue, ShaderVisibility ShaderVisibility.All, uint32_t 0)
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
        ShaderRegister = shaderRegister;
        RegisterSpace = registerSpace;
        ShaderVisibility = shaderVisibility;
    constexpr StaticSamplerDescription(SamplerDescription samplerDescription, ShaderVisibility shaderVisibility, uint32_t shaderRegister, uint32_t registerSpace)
    ShaderVisibility = shaderVisibility;
        ShaderRegister = shaderRegister;
        RegisterSpace = registerSpace;

        // Unlike regular samplers, static samplers only support three possible border colors: opaque white, opaque black, and transparent.
        // So if the sampler has a border color that matches one of those exactly, we can convert it; otherwise it's left as the default (transparent).
        if (samplerDescription.BorderColor == Colors.White)
            BorderColor = StaticBorderColor.OpaqueWhite;
        else if (samplerDescription.BorderColor == Colors.Black)
            BorderColor = StaticBorderColor.OpaqueBlack;
        else
            BorderColor = StaticBorderColor.TransparentBlack;

        Filter = samplerDescription.Filter;
        AddressU = samplerDescription.AddressU;
        AddressV = samplerDescription.AddressV;
        AddressW = samplerDescription.AddressW;
        MinLOD = samplerDescription.MinLOD;
        MaxLOD = samplerDescription.MaxLOD;
        MipLODBias = samplerDescription.MipLODBias;
        MaxAnisotropy = samplerDescription.MaxAnisotropy;
        ComparisonFunction = samplerDescription.ComparisonFunction;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_STATICSAMPLERDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_STATICSAMPLERDESCRIPTION_H
