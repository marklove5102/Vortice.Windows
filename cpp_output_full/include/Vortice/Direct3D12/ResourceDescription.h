// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RESOURCEDESCRIPTION_H
#define VORTICE_DIRECT3D12_RESOURCEDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RESOURCEDESCRIPTION_H
#define VORTICE_VORTICE_RESOURCEDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ResourceDescription
{
public:
    constexpr ResourceDescription(ResourceDimension dimension, uint64_t alignment, uint64_t width, uint32_t height, uint16_t depthOrArraySize, uint16_t mipLevels, Format format, uint32_t sampleCount, uint32_t sampleQuality, TextureLayout layout, ResourceFlags flags)
    Dimension = dimension;
        Alignment = alignment;
        Width = width;
        Height = height;
        DepthOrArraySize = depthOrArraySize;
        MipLevels = mipLevels;
        Format = format;
        SampleDescription = new SampleDescription(sampleCount, sampleQuality);
        Layout = layout;
        Flags = flags;
    const uint16_t Depth{> Dimension == ResourceDimension.Texture3D ? DepthOrArraySize : (ushort)1};
    const uint16_t ArraySize{> Dimension != ResourceDimension.Texture3D ? DepthOrArraySize : (ushort)1};

    static ResourceDescription Buffer() { return new ResourceDescription(
            ResourceDimension.Buffer,
            resourceAllocInfo.Alignment,
            resourceAllocInfo.SizeInBytes,
            1, 1, 1, Format.Unknown, 1, 0, TextureLayout.RowMajor, flags); }

    static ResourceDescription Buffer() { return new ResourceDescription(ResourceDimension.Buffer, alignment, sizeInBytes, 1, 1, 1, Format.Unknown, 1, 0, TextureLayout.RowMajor, flags); }

    static ResourceDescription Texture1D() { return new ResourceDescription(ResourceDimension.Texture1D, alignment, width, 1, arraySize, mipLevels, format, 1, 0, layout, flags); }

    static ResourceDescription Texture2D() { return new ResourceDescription(ResourceDimension.Texture2D,
            alignment,
            width,
            height,
            arraySize,
            mipLevels,
            format,
            sampleCount,
            sampleQuality,
            layout,
            flags); }

    static ResourceDescription Texture3D() { return new ResourceDescription(
            ResourceDimension.Texture3D,
            alignment,
            width,
            height,
            depth,
            mipLevels,
            format,
            1,
            0,
            layout,
            flags); }

    uint8_t GetPlaneCount() { return device.GetFormatPlaneCount(Format); }

    uint32_t Subresources() { return (uint)MipLevels * ArraySize * GetPlaneCount(pDevice); }

    uint32_t CalculateSubResourceIndex() { return ID3D12Resource.CalculateSubResourceIndex(mipSlice, arraySlice, planeSlice, MipLevels, ArraySize); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RESOURCEDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RESOURCEDESCRIPTION_H
