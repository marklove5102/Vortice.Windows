// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_TEXTURE3DDESCRIPTION1_H
#define VORTICE_DIRECT3D11_TEXTURE3DDESCRIPTION1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TEXTURE3DDESCRIPTION1_H
#define VORTICE_VORTICE_TEXTURE3DDESCRIPTION1_H

#include <cstdint>

namespace Vortice {

struct Texture3DDescription1
{
public:
    constexpr Texture3DDescription1(Format format, uint32_t width, uint32_t height, uint32_t depth, uint32_t 0, BindFlags BindFlags.ShaderResource, ResourceUsage ResourceUsage.Default, CpuAccessFlags CpuAccessFlags.None, ResourceOptionFlags ResourceOptionFlags.None, TextureLayout TextureLayout.Undefined)
    if (format == Format.Unknown)
            throw ArgumentException(std::format("format need to be valid"), "format");

        if (width < 1 || width > ID3D11Resource.MaximumTexture3DSize)
            throw ArgumentException(std::format("Width need to be in range 1-{ID3D11Resource.MaximumTexture3DSize}"), "width");

        if (height < 1 || height > ID3D11Resource.MaximumTexture3DSize)
            throw ArgumentException(std::format("Height need to be in range 1-{ID3D11Resource.MaximumTexture3DSize}"), "height");

        if (depth < 1 || depth > ID3D11Resource.MaximumTexture3DSize)
            throw ArgumentException(std::format("Depth need to be in range 1-{ID3D11Resource.MaximumTexture3DSize}"), "depth");

        Width = width;
        Height = height;
        Depth = depth;
        MipLevels = mipLevels;
        Format = format;
        Usage = usage;
        BindFlags = bindFlags;
        CPUAccessFlags = cpuAccessFlags;
        MiscFlags = miscFlags;
        TextureLayout = textureLayout;
    constexpr Texture3DDescription1(const Texture3DDescription& description, TextureLayout TextureLayout.Undefined)
    Width = description.Width;
        Height = description.Height;
        Depth = description.Depth;
        MipLevels = description.MipLevels;
        Format = description.Format;
        Usage = description.Usage;
        BindFlags = description.BindFlags;
        CPUAccessFlags = description.CPUAccessFlags;
        MiscFlags = description.MiscFlags;
        TextureLayout = textureLayout;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TEXTURE3DDESCRIPTION1_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_TEXTURE3DDESCRIPTION1_H
