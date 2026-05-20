// Copyright (c) Contributors.

#ifndef VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION1_H
#define VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct DepthStencilOperationDescription1
        {
                        public static DepthStencilOperationDescription1 get_Default() const { return new(StencilOperation.Keep, StencilOperation.Keep, StencilOperation.Keep, ComparisonFunction.Always); }

                                                public DepthStencilOperationDescription1(StencilOperation stencilFailOp, StencilOperation stencilDepthFailOp, StencilOperation stencilPassOp, ComparisonFunction stencilFunc, uint8_t stencilReadMask{};
                StencilDepthFailOp = stencilDepthFailOp;
                StencilPassOp = stencilPassOp;
                StencilFunc = stencilFunc;
                StencilReadMask = stencilReadMask;
                StencilWriteMask = stencilWriteMask;
            }
        }


    }
}

#endif // VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION1_H