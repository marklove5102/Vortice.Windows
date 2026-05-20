// Copyright (c) Contributors.

#ifndef VORTICE_RESOURCEDESCRIPTION1_H
#define VORTICE_RESOURCEDESCRIPTION1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicstruct ResourceDescription1
        {
                                                                                public ResourceDescription1(ResourceDimension dimension, uint64_t alignment, uint64_t width, uint32_t height, uint16_t depthOrArraySize, uint16_t mipLevels, Format format, uint32_t sampleCount, uint32_t sampleQuality, TextureLayout layout, ResourceFlags flags, uint32_t samplerFeedbackMipRegionWidth, uint32_t samplerFeedbackMipRegionHeight, uint32_t samplerFeedbackMipRegionDepth)
                {
                Dimension = dimension;
                Alignment = alignment;
                Width = width;
                Height = height;
                DepthOrArraySize = depthOrArraySize;
                MipLevels = mipLevels;
                Format = format;
                SampleDescription = new SampleDescription(void);
                Layout = layout;
                Flags = flags;
                SamplerFeedbackMipRegion = new MipRegion(void);
            }
            publicstatic ResourceDescription1 Buffer(ResourceAllocationInfo resourceAllocInfo, ResourceFlags flags)
                {
                return new ResourceDescription1(void);
            }
            publicstatic ResourceDescription1 Buffer(uint64_t width, ResourceFlags flags, uint64_t alignment)
                {
                return new ResourceDescription1(void);
            }
            publicstatic ResourceDescription1 Texture1D(Format format, uint64_t width, uint16_t arraySize, uint16_t mipLevels, ResourceFlags flags, TextureLayout layout, uint64_t alignment)
                {
                return new ResourceDescription1(void);
            }
            publicstatic ResourceDescription1 Texture2D(Format format, uint64_t width, uint32_t height, uint16_t arraySize, uint16_t mipLevels, uint32_t sampleCount, uint32_t sampleQuality, ResourceFlags flags, TextureLayout layout, uint64_t alignment, uint32_t samplerFeedbackMipRegionWidth, uint32_t samplerFeedbackMipRegionHeight, uint32_t samplerFeedbackMipRegionDepth)
                {
                return new ResourceDescription1(void);
            }
            publicstatic ResourceDescription1 Texture3D(Format format, uint64_t width, uint32_t height, uint16_t depth, uint16_t mipLevels, ResourceFlags flags, TextureLayout layout, uint64_t alignment)
                {
                return new ResourceDescription1(void);
            }
            public: uint16_t get_Depth() const { return Dimension{}; }
            public: uint16_t get_ArraySize() const { return Dimension != ResourceDimension.Texture3D ? DepthOrArraySize : (ushort)1; }
            publicuint8_t GetPlaneCount(ID3D12Device device)
                {
                return device.GetFormatPlaneCount(Format);
            }
            publicuint32_t Subresources(ID3D12Device pDevice)
                {
                return (uint)MipLevels * ArraySize * GetPlaneCount(pDevice);
            }
            publicuint32_t CalculateSubResourceIndex(uint32_t mipSlice, uint32_t arraySlice, uint32_t planeSlice)
                {
                return ID3D12Resource.CalculateSubResourceIndex(mipSlice, arraySlice, planeSlice, MipLevels, ArraySize);
            }
        }

    }
}

#endif // VORTICE_RESOURCEDESCRIPTION1_H