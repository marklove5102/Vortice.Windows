// Copyright (c) Contributors.

#ifndef VORTICE_STATICSAMPLERDESCRIPTION1_H
#define VORTICE_STATICSAMPLERDESCRIPTION1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct StaticSamplerDescription1
        {
                                        public StaticSamplerDescription1(ShaderVisibility shaderVisibility, uint32_t shaderRegister, uint32_t registerSpace, SamplerFlags flags)
        {
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
            }

                        public StaticSamplerDescription1(uint32_t shaderRegister, Filter filter{};
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
            }
        }   


    }
}

#endif // VORTICE_STATICSAMPLERDESCRIPTION1_H