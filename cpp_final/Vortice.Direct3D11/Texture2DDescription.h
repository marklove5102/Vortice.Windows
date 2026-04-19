// Copyright (c) Contributors.

#ifndef VORTICE_TEXTURE2DDESCRIPTION_H
#define VORTICE_TEXTURE2DDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11;

        struct Texture2DDescription
        {
                                                                    public Texture2DDescription(Format format, uint32_t width, uint32_t height, uint32_t arraySize{};

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
                SampleDescription = new(sampleCount, sampleQuality);
                Usage = usage;
                BindFlags = bindFlags;
                CPUAccessFlags = cpuAccessFlags;
                MiscFlags = miscFlags;
            }

                                uint32_t GetWidth(uint32_t mipLevel{};
            }

                                uint32_t GetHeight(uint32_t mipLevel{};
            }
        }


    }
}

#endif // VORTICE_TEXTURE2DDESCRIPTION_H