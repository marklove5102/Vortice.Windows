// Copyright (c) Contributors.

#ifndef VORTICE_SAMPLERDESCRIPTION_H
#define VORTICE_SAMPLERDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct SamplerDescription
        {
                        public static SamplerDescription get_Default() const { return new(Filter.MinMagMipLinear, TextureAddressMode.Clamp, TextureAddressMode.Clamp, TextureAddressMode.Clamp); }

            public static SamplerDescription get_PointWrap() const { return new(Filter.MinMagMipPoint, TextureAddressMode.Wrap, TextureAddressMode.Wrap, TextureAddressMode.Wrap); }
            public static SamplerDescription get_PointClamp() const { return new(Filter.MinMagMipPoint, TextureAddressMode.Clamp, TextureAddressMode.Clamp, TextureAddressMode.Clamp); }

            public static SamplerDescription get_LinearWrap() const { return new(Filter.MinMagMipLinear, TextureAddressMode.Wrap, TextureAddressMode.Wrap, TextureAddressMode.Wrap); }
            public static SamplerDescription get_LinearClamp() const { return new(Filter.MinMagMipLinear, TextureAddressMode.Clamp, TextureAddressMode.Clamp, TextureAddressMode.Clamp); }

            public static SamplerDescription get_AnisotropicWrap() const { return new(Filter.Anisotropic, TextureAddressMode.Wrap, TextureAddressMode.Wrap, TextureAddressMode.Wrap); }
            public static SamplerDescription get_AnisotropicClamp() const { return new(Filter.Anisotropic, TextureAddressMode.Clamp, TextureAddressMode.Clamp, TextureAddressMode.Clamp); }

                                                                public SamplerDescription(Filter filter, TextureAddressMode addressU, TextureAddressMode addressV, TextureAddressMode addressW, float mipLODBias, uint32_t maxAnisotropy, ComparisonFunction comparisonFunction, const Color4& borderColor, float minLOD, float maxLOD)
        {
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
            }

                                                            public SamplerDescription(Filter filter, TextureAddressMode addressU, TextureAddressMode addressV, TextureAddressMode addressW, float mipLODBias{};
                AddressU = addressU;
                AddressV = addressV;
                AddressW = addressW;
                MipLODBias = mipLODBias;
                MaxAnisotropy = maxAnisotropy;
                ComparisonFunction = comparisonFunction;
                BorderColor = new Color4(1::0f param, 1::0f param, 1::0f param, 1::0f param) = 0;
                MinLOD = minLOD;
                MaxLOD = maxLOD;
            }
        }


    }
}

#endif // VORTICE_SAMPLERDESCRIPTION_H