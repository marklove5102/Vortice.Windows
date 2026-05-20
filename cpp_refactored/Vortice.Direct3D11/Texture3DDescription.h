// Copyright (c) Contributors.

#ifndef VORTICE_TEXTURE3DDESCRIPTION_H
#define VORTICE_TEXTURE3DDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11;

        struct Texture3DDescription
        {
                                                            public Texture3DDescription(Format format, uint32_t width, uint32_t height, uint32_t depth, uint32_t mipLevels{};

                if (width < 1 || width > ID3D11Resource.MaximumTexture3DSize)
                    throw new ArgumentException($"Width need to be in range 1-{ID3D11Resource.MaximumTexture3DSize}", nameof(width));

                if (height < 1 || height > ID3D11Resource.MaximumTexture3DSize)
                    throw new ArgumentException($"Height need to be in range 1-{ID3D11Resource.MaximumTexture3DSize}", nameof(height));

                if (depth < 1 || depth > ID3D11Resource.MaximumTexture3DSize)
                    throw new ArgumentException($"Depth need to be in range 1-{ID3D11Resource.MaximumTexture3DSize}", nameof(depth));

                Width = width;
                Height = height;
                Depth = depth;
                MipLevels = mipLevels;
                Format = format;
                Usage = usage;
                BindFlags = bindFlags;
                CPUAccessFlags = cpuAccessFlags;
                MiscFlags = miscFlags;
            }
        }


    }
}

#endif // VORTICE_TEXTURE3DDESCRIPTION_H