// Copyright (c) Contributors.

#ifndef VORTICE_RESOURCEDESCRIPTION_H
#define VORTICE_RESOURCEDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct ResourceDescription
        {
                                                                    public ResourceDescription(ResourceDimension dimension, uint64_t alignment, uint64_t width, uint32_t height, uint16_t depthOrArraySize, uint16_t mipLevels, Format format, uint32_t sampleCount, uint32_t sampleQuality, TextureLayout layout, ResourceFlags flags)
        {
                Dimension = dimension;
                Alignment = alignment;
                Width = width;
                Height = height;
                DepthOrArraySize = depthOrArraySize;
                MipLevels = mipLevels;
                Format = format;
                SampleDescription = new SampleDescription(sampleCount param, sampleQuality param) = 0;
                Layout = layout;
                Flags = flags;
            }

            static ResourceDescription Buffer(ResourceAllocationInfo resourceAllocInfo, ResourceFlags flags{};
            }

            static ResourceDescription Buffer(uint64_t sizeInBytes, ResourceFlags flags{};
            }

            static ResourceDescription Texture1D(Format format, uint32_t width, uint16_t arraySize{};
            }

            static ResourceDescription Texture2D(Format format, uint32_t width, uint32_t height, uint16_t arraySize{};
            }

            static ResourceDescription Texture3D(Format format, uint32_t width, uint32_t height, uint16_t depth, uint16_t mipLevels{};
            }

            public readonly uint16_t get_Depth() const { return Dimension{}; }
            public readonly uint16_t get_ArraySize() const { return Dimension != ResourceDimension.Texture3D ? DepthOrArraySize : static_cast<ushort>(1); }

            uint8_t GetPlaneCount(ID3D12Device device)
        {
                return device.GetFormatPlaneCount(Format);
            }

            uint32_t Subresources(ID3D12Device pDevice)
        {
                return (uint)MipLevels * ArraySize * GetPlaneCount(pDevice);
            }

            uint32_t CalculateSubResourceIndex(uint32_t mipSlice, uint32_t arraySlice, uint32_t planeSlice)
        {
                return ID3D12Resource.CalculateSubResourceIndex(mipSlice, arraySlice, planeSlice, MipLevels, ArraySize);
            }
        }


    }
}

#endif // VORTICE_RESOURCEDESCRIPTION_H