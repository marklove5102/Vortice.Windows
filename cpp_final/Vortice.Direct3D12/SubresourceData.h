// Copyright (c) Contributors.

#ifndef VORTICE_SUBRESOURCEDATA_H
#define VORTICE_SUBRESOURCEDATA_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct SubresourceData
        {
            public void* pData;

            public: intptr_t RowPitch{};

            public: intptr_t SlicePitch{};

                                    public SubresourceData(void* dataPointer, intptr_t rowPitch{};
                RowPitch = rowPitch;
                SlicePitch = slicePitch;
            }

                                    public SubresourceData(void* dataPointer, intptr_t rowPitch{};
                RowPitch = rowPitch;
                SlicePitch = slicePitch;
            }
        }



    }
}

#endif // VORTICE_SUBRESOURCEDATA_H