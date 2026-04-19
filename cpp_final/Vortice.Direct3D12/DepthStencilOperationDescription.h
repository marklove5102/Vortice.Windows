// Copyright (c) Contributors.

#ifndef VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION_H
#define VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct DepthStencilOperationDescription
        {
                        public static DepthStencilOperationDescription get_Default() const { return new(StencilOperation.Keep, StencilOperation.Keep, StencilOperation.Keep, ComparisonFunction.Always); }

                                        public DepthStencilOperationDescription(StencilOperation stencilFailOp, StencilOperation stencilDepthFailOp, StencilOperation stencilPassOp, ComparisonFunction stencilFunc)
        {
                StencilFailOp = stencilFailOp;
                StencilDepthFailOp = stencilDepthFailOp;
                StencilPassOp = stencilPassOp;
                StencilFunc = stencilFunc;
            }
        }


    }
}

#endif // VORTICE_DEPTHSTENCILOPERATIONDESCRIPTION_H