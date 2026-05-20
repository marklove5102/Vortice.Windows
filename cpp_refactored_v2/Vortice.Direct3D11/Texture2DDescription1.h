// Copyright (c) Contributors.

#ifndef VORTICE_TEXTURE2DDESCRIPTION1_H
#define VORTICE_TEXTURE2DDESCRIPTION1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11;
        publicstruct Texture2DDescription1
        {
                                                                        public Texture2DDescription1(Format format, uint32_t width, uint32_t height, uint32_t arraySize, uint32_t mipLevels, BindFlags bindFlags, ResourceUsage usage, CpuAccessFlags cpuAccessFlags, uint32_t sampleCount, uint32_t sampleQuality, ResourceOptionFlags miscFlags, TextureLayout textureLayout)
                {
                if (format == Format.Unknown)
                    throw new ArgumentException($"format need to be valid", nameof(format));
                if (width < 1 || width > ID3D11Resource.MaximumTexture2DSize)
                    throw new ArgumentException($"Width need to be in range 1-{ID3D11Resource.MaximumTexture2DSize}", nameof(width));
                if (height < 1 || height > ID3D11Resource.MaximumTexture2DSize)
                    throw new ArgumentException($"Height need to be in range 1-{ID3D11Resource.MaximumTexture2DSize}", nameof(height));
                if (arraySize < 1 || arraySize > ID3D11Resource.MaximumTexture2DArraySize)
                    throw new ArgumentException($"Array size need to be in range 1-{ID3D11Resource.MaximumTexture2DArraySize}", nameof(arraySize));
                Width = width;
                Height = height;
                MipLevels = mipLevels;
                ArraySize = arraySize;
                Format = format;
                SampleDescription = new SampleDescription(void);
                Usage = usage;
                BindFlags = bindFlags;
                CPUAccessFlags = cpuAccessFlags;
                MiscFlags = miscFlags;
                TextureLayout = textureLayout;
            }
                                public Texture2DDescription1(const Texture2DDescription& description, TextureLayout textureLayout)
                {
                Width = description.Width;
                Height = description.Height;
                MipLevels = description.MipLevels;
                ArraySize = description.ArraySize;
                Format = description.Format;
                SampleDescription = description.SampleDescription;
                Usage = description.Usage;
                BindFlags = description.BindFlags;
                CPUAccessFlags = description.CPUAccessFlags;
                MiscFlags = description.MiscFlags;
                TextureLayout = textureLayout;
            }
        }

    }
}

#endif // VORTICE_TEXTURE2DDESCRIPTION1_H