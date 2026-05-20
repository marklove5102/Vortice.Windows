// Copyright (c) Contributors.

#ifndef VORTICE_INDEXBUFFERVIEW_H
#define VORTICE_INDEXBUFFERVIEW_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct IndexBufferView
        {
                                    public IndexBufferView(uint64_t bufferLocation, uint32_t sizeInBytes, Format format)
        {
                BufferLocation = bufferLocation;
                SizeInBytes = sizeInBytes;
                Format = format;
            }

                                    public IndexBufferView(ulong bufferLocation, uint sizeInBytes, bool is32Bit = false)
                : this(bufferLocation, sizeInBytes, is32Bit ? Format.R32_UInt : Format.R16_UInt)
            {
            }
        }


    }
}

#endif // VORTICE_INDEXBUFFERVIEW_H