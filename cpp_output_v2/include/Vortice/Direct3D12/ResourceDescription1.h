// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RESOURCEDESCRIPTION1_H
#define VORTICE_DIRECT3D12_RESOURCEDESCRIPTION1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RESOURCEDESCRIPTION1_H
#define VORTICE_VORTICE_RESOURCEDESCRIPTION1_H

#include <cstdint>

namespace Vortice {

struct ResourceDescription1
{
public:
    constexpr ResourceDescription1(ResourceDimension dimension, uint64_t alignment, uint64_t width, uint32_t height, uint16_t depthOrArraySize, uint16_t mipLevels, Format format, uint32_t sampleCount, uint32_t sampleQuality, TextureLayout layout, ResourceFlags flags, uint32_t 0, uint32_t 0, uint32_t 0)
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
        SamplerFeedbackMipRegion = new MipRegion(samplerFeedbackMipRegionWidth, samplerFeedbackMipRegionHeight, samplerFeedbackMipRegionDepth);
    uint16_t Depth{> Dimension == ResourceDimension.Texture3D ? DepthOrArraySize : (ushort)1};
    uint16_t ArraySize{> Dimension != ResourceDimension.Texture3D ? DepthOrArraySize : (ushort)1};

    static ResourceDescription1 Buffer() { return new ResourceDescription1(
            ResourceDimension.Buffer,
            resourceAllocInfo.Alignment,
            resourceAllocInfo.SizeInBytes,
            1, 1, 1, Format.Unknown, 1, 0, TextureLayout.RowMajor, flags, 0, 0, 0); }

    static ResourceDescription1 Buffer() { return new ResourceDescription1(ResourceDimension.Buffer, alignment, width, 1, 1, 1, Format.Unknown, 1, 0, TextureLayout.RowMajor, flags, 0, 0, 0); }

    static ResourceDescription1 Texture1D() { return new ResourceDescription1(ResourceDimension.Texture1D, alignment, width, 1, arraySize,
            mipLevels, format, 1, 0, layout, flags, 0, 0, 0); }

    static ResourceDescription1 Texture2D() { return new ResourceDescription1(ResourceDimension.Texture2D, alignment, width, height, arraySize,
            mipLevels, format, sampleCount, sampleQuality, layout, flags,
            samplerFeedbackMipRegionWidth, samplerFeedbackMipRegionHeight, samplerFeedbackMipRegionDepth); }

    static ResourceDescription1 Texture3D() { return new ResourceDescription1(ResourceDimension.Texture3D, alignment, width, height, depth,
            mipLevels, format, 1, 0, layout, flags, 0, 0, 0); }

    uint8_t GetPlaneCount() { return device.GetFormatPlaneCount(Format); }

    uint32_t Subresources() { return (uint)MipLevels * ArraySize * GetPlaneCount(pDevice); }

    uint32_t CalculateSubResourceIndex() { return ID3D12Resource.CalculateSubResourceIndex(mipSlice, arraySlice, planeSlice, MipLevels, ArraySize); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RESOURCEDESCRIPTION1_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RESOURCEDESCRIPTION1_H
