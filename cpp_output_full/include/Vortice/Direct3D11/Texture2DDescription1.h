// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_TEXTURE2DDESCRIPTION1_H
#define VORTICE_DIRECT3D11_TEXTURE2DDESCRIPTION1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TEXTURE2DDESCRIPTION1_H
#define VORTICE_VORTICE_TEXTURE2DDESCRIPTION1_H

#include <cstdint>

namespace Vortice {

struct Texture2DDescription1
{
public:
    constexpr Texture2DDescription1(Format format, uint32_t width, uint32_t height, uint32_t 1, uint32_t 0, BindFlags BindFlags.ShaderResource, ResourceUsage ResourceUsage.Default, CpuAccessFlags CpuAccessFlags.None, uint32_t 1, uint32_t 0, ResourceOptionFlags ResourceOptionFlags.None, TextureLayout TextureLayout.Undefined)
    if (format == Format.Unknown)
            throw ArgumentException(std::format("format need to be valid"), "format");

        if (width < 1 || width > ID3D11Resource.MaximumTexture2DSize)
            throw ArgumentException(std::format("Width need to be in range 1-{ID3D11Resource.MaximumTexture2DSize}"), "width");

        if (height < 1 || height > ID3D11Resource.MaximumTexture2DSize)
            throw ArgumentException(std::format("Height need to be in range 1-{ID3D11Resource.MaximumTexture2DSize}"), "height");

        if (arraySize < 1 || arraySize > ID3D11Resource.MaximumTexture2DArraySize)
            throw ArgumentException(std::format("Array size need to be in range 1-{ID3D11Resource.MaximumTexture2DArraySize}"), "arraySize");

        Width = width;
        Height = height;
        MipLevels = mipLevels;
        ArraySize = arraySize;
        Format = format;
        SampleDescription = new SampleDescription(sampleCount, sampleQuality);
        Usage = usage;
        BindFlags = bindFlags;
        CPUAccessFlags = cpuAccessFlags;
        MiscFlags = miscFlags;
        TextureLayout = textureLayout;
    constexpr Texture2DDescription1(const Texture2DDescription& description, TextureLayout TextureLayout.Undefined)
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
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TEXTURE2DDESCRIPTION1_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_TEXTURE2DDESCRIPTION1_H
