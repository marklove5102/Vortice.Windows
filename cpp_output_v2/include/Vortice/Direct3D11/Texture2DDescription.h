// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_TEXTURE2DDESCRIPTION_H
#define VORTICE_DIRECT3D11_TEXTURE2DDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TEXTURE2DDESCRIPTION_H
#define VORTICE_VORTICE_TEXTURE2DDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct Texture2DDescription
{
public:
    constexpr Texture2DDescription(Format format, uint32_t width, uint32_t height, uint32_t 1, uint32_t 0, BindFlags BindFlags.ShaderResource, ResourceUsage ResourceUsage.Default, CpuAccessFlags CpuAccessFlags.None, uint32_t 1, uint32_t 0, ResourceOptionFlags ResourceOptionFlags.None)
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
        SampleDescription = new(sampleCount, sampleQuality);
        Usage = usage;
        BindFlags = bindFlags;
        CPUAccessFlags = cpuAccessFlags;
        MiscFlags = miscFlags;
    uint32_t GetWidth() { return (mipLevel == 0) || (mipLevel < MipLevels) ? Math.Max(1, Width >> (int)mipLevel) : 0; }

    uint32_t GetHeight() { return (mipLevel == 0) || (mipLevel < MipLevels) ? Math.Max(1, Height >> (int)mipLevel) : 0; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_TEXTURE2DDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_TEXTURE2DDESCRIPTION_H
