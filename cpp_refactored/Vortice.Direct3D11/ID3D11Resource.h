// Copyright (c) Contributors.

#ifndef VORTICE_ID3D11RESOURCE_H
#define VORTICE_ID3D11RESOURCE_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D11;

        class ID3D11Resource
        {
                                        virtual uint32_t CalculateSubResourceIndex(uint32_t mipSlice, uint32_t arraySlice, uint32_t& mipSize)
        {
                throw new NotSupportedException("This method is not implemented for this kind of resource") = 0;
            }
        }


    }
}

#endif // VORTICE_ID3D11RESOURCE_H