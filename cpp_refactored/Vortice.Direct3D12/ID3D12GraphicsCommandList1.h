// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12GRAPHICSCOMMANDLIST1_H
#define VORTICE_ID3D12GRAPHICSCOMMANDLIST1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class ID3D12GraphicsCommandList1
        {
                                                        void ResolveSubresourceRegion(ID3D12Resource dstResource, uint32_t dstSubresource, uint32_t dstX, uint32_t dstY, ID3D12Resource srcResource, uint32_t srcSubresource, Format format, ResolveMode resolveMode{};
            }

                                                            void ResolveSubresourceRegion(ID3D12Resource dstResource, uint32_t dstSubresource, uint32_t dstX, uint32_t dstY, ID3D12Resource srcResource, uint32_t srcSubresource, RawRect srcRect, Format format, ResolveMode resolveMode{};
            }
        }


    }
}

#endif // VORTICE_ID3D12GRAPHICSCOMMANDLIST1_H