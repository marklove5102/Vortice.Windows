// Copyright (c) Contributors.

#ifndef VORTICE_SUBRESOURCEFOOTPRINT_H
#define VORTICE_SUBRESOURCEFOOTPRINT_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct SubresourceFootPrint
        {
                                            public SubresourceFootPrint(Format format, uint32_t width, uint32_t height, uint32_t depth, uint32_t rowPitch)
        {
                Format = format;
                Width = width;
                Height = height;
                Depth = depth;
                RowPitch = rowPitch;
            }

                                public SubresourceFootPrint(ResourceDescription description, uint32_t rowPitch)
        {
                Format = description.Format;
                Width = (uint)description.Width;
                Height = description.Height;
                Depth = (description.Dimension == ResourceDimension.Texture3D ? description.DepthOrArraySize : 1u);
                RowPitch = rowPitch;
            }
        }


    }
}

#endif // VORTICE_SUBRESOURCEFOOTPRINT_H