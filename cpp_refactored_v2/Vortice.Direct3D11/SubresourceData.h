// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_SUBRESOURCEDATA_H
#define VORTICE_SUBRESOURCEDATA_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {


        namespace Vortice.Direct3D11;
        publicstruct SubresourceData
        {
                                    public SubresourceData(void* dataPointer, uint32_t rowPitch, uint32_t slicePitch)
                {
                DataPointer = dataPointer;
                RowPitch = rowPitch;
                SlicePitch = slicePitch;
            }
                                    publicunsafe SubresourceData(void* dataPointer, uint32_t rowPitch, uint32_t slicePitch)
                {
                DataPointer = new IntPtr(void);
                RowPitch = rowPitch;
                SlicePitch = slicePitch;
            }
        }

    }
}

#endif // VORTICE_SUBRESOURCEDATA_H