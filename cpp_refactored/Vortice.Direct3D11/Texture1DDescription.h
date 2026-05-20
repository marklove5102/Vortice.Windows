// Copyright (c) Contributors.

#ifndef VORTICE_TEXTURE1DDESCRIPTION_H
#define VORTICE_TEXTURE1DDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11;

        struct Texture1DDescription
        {
                                                        public Texture1DDescription(Format format, uint32_t width, uint32_t arraySize{};

                if (width < 1 || width > ID3D11Resource.MaximumTexture1DSize)
                    throw new ArgumentException($"Width need to be in range 1-{ID3D11Resource.MaximumTexture1DSize}", nameof(width));

                if (arraySize < 1 || arraySize > ID3D11Resource.MaximumTexture1DArraySize)
                    throw new ArgumentException($"Array size need to be in range 1-{ID3D11Resource.MaximumTexture1DArraySize}", nameof(arraySize));

                Width = width;
                MipLevels = mipLevels;
                ArraySize = arraySize;
                Format = format;
                Usage = usage;
                BindFlags = bindFlags;
                CPUAccessFlags = cpuAccessFlags;
                MiscFlags = miscFlags;
            }

                                uint32_t GetWidth(uint32_t mipLevel{};
            }
        }


    }
}

#endif // VORTICE_TEXTURE1DDESCRIPTION_H