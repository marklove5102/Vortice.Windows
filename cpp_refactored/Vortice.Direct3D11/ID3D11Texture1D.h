// Copyright (c) Contributors.

#ifndef VORTICE_ID3D11TEXTURE1D_H
#define VORTICE_ID3D11TEXTURE1D_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D11;

        class ID3D11Texture1D
        {
                override uint32_t CalculateSubResourceIndex(uint32_t mipSlice, uint32_t arraySlice, uint32_t& mipSize)
        {
                Texture1DDescription description{};
                mipSize = D3D11.CalculateMipSize(mipSlice, description.Width);
                return D3D11.CalculateSubResourceIndex(mipSlice, arraySlice, description.MipLevels);
            }
        }


    }
}

#endif // VORTICE_ID3D11TEXTURE1D_H