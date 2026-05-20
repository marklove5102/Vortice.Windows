// Copyright (c) Contributors.

#ifndef VORTICE_CONSTANTBUFFERVIEWDESCRIPTION_H
#define VORTICE_CONSTANTBUFFERVIEWDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct ConstantBufferViewDescription
        {
                                public ConstantBufferViewDescription(uint64_t bufferLocation, uint32_t sizeInBytes)
        {
                BufferLocation = bufferLocation;
                SizeInBytes = sizeInBytes;
            }

                                public ConstantBufferViewDescription(ID3D12Resource resource, uint32_t sizeInBytes{};
                SizeInBytes = sizeInBytes == 0 ? (uint)resource.Description.Width : sizeInBytes;
            }
        }


    }
}

#endif // VORTICE_CONSTANTBUFFERVIEWDESCRIPTION_H