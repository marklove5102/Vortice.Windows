// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_STATICSAMPLERDESCRIPTION1_H
#define VORTICE_DIRECT3D12_STATICSAMPLERDESCRIPTION1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_STATICSAMPLERDESCRIPTION1_H
#define VORTICE_VORTICE_STATICSAMPLERDESCRIPTION1_H

#include <cstdint>

namespace Vortice {

struct StaticSamplerDescription1
{
public:
    constexpr StaticSamplerDescription1(ShaderVisibility shaderVisibility, uint32_t shaderRegister, uint32_t registerSpace, SamplerFlags flags)
    Filter = Filter.MinMagMipLinear;
        AddressU = TextureAddressMode.Clamp;
        AddressV = TextureAddressMode.Clamp;
        AddressW = TextureAddressMode.Clamp;
        MipLODBias = 0.0f;
        MaxAnisotropy = 1;
        ComparisonFunction = ComparisonFunction.Never;
        BorderColor = StaticBorderColor.TransparentBlack;
        MinLOD = 0.0f;
        MaxLOD = float.MaxValue;

        ShaderRegister = shaderRegister;
        RegisterSpace = registerSpace;
        ShaderVisibility = shaderVisibility;
        Flags = flags;
    constexpr StaticSamplerDescription1(uint32_t shaderRegister, Filter Filter.Anisotropic, TextureAddressMode TextureAddressMode.Wrap, TextureAddressMode TextureAddressMode.Wrap, TextureAddressMode TextureAddressMode.Wrap, float 0.0f, uint32_t 16, ComparisonFunction ComparisonFunction.LessEqual, StaticBorderColor StaticBorderColor.OpaqueWhite, float 0.0f, float float.MaxValue, ShaderVisibility ShaderVisibility.All, uint32_t 0, SamplerFlags SamplerFlags.None)
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
        Flags = flags;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_STATICSAMPLERDESCRIPTION1_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_STATICSAMPLERDESCRIPTION1_H
