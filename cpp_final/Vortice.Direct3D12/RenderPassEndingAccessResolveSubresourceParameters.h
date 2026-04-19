// Copyright (c) Contributors.

#ifndef VORTICE_RENDERPASSENDINGACCESSRESOLVESUBRESOURCEPARAMETERS_H
#define VORTICE_RENDERPASSENDINGACCESSRESOLVESUBRESOURCEPARAMETERS_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct RenderPassEndingAccessResolveSubresourceParameters
        {
                                            public RenderPassEndingAccessResolveSubresourceParameters(uint32_t srcSubresource, uint32_t dstSubresource, uint32_t dstX, uint32_t dstY, RawRect srcRect)
        {
                SrcSubresource = srcSubresource;
                DstSubresource = dstSubresource;
                DstX = dstX;
                DstY = dstY;
                SrcRect = srcRect;
            }
        }


    }
}

#endif // VORTICE_RENDERPASSENDINGACCESSRESOLVESUBRESOURCEPARAMETERS_H