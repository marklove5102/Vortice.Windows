// Copyright (c) Contributors.

#ifndef VORTICE_DEPTHSTENCILDESCRIPTION_H
#define VORTICE_DEPTHSTENCILDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct DepthStencilDescription
        {
                        public static DepthStencilDescription get_None() const { return new(false, DepthWriteMask.Zero, ComparisonFunction.LessEqual); }

                        public static DepthStencilDescription get_Default() const { return new(true, DepthWriteMask.All, ComparisonFunction.LessEqual); }

                        public static DepthStencilDescription get_Read() const { return new(true, DepthWriteMask.Zero, ComparisonFunction.LessEqual); }

                        public static DepthStencilDescription get_ReverseZ() const { return new(true, DepthWriteMask.All, ComparisonFunction.GreaterEqual); }

                        public static DepthStencilDescription get_ReadReverseZ() const { return new(true, DepthWriteMask.Zero, ComparisonFunction.GreaterEqual); }

                                    public DepthStencilDescription(bool depthEnable, DepthWriteMask depthWriteMask, ComparisonFunction depthFunc)
        {
                DepthEnable = depthEnable;
                DepthWriteMask = depthWriteMask;
                DepthFunc = depthFunc;
                StencilEnable = false;
                StencilReadMask = D3D12.DefaultStencilReadMask;
                StencilWriteMask = D3D12.DefaultStencilWriteMask;
                FrontFace = DepthStencilOperationDescription.Default;
                BackFace = DepthStencilOperationDescription.Default;
            }

                                                                                public DepthStencilDescription(bool depthEnable, bool depthWriteEnable, ComparisonFunction depthFunc, bool stencilEnable, uint8_t stencilReadMask, uint8_t stencilWriteMask, StencilOperation frontStencilFailOp, StencilOperation frontStencilDepthFailOp, StencilOperation frontStencilPassOp, ComparisonFunction frontStencilFunc, StencilOperation backStencilFailOp, StencilOperation backStencilDepthFailOp, StencilOperation backStencilPassOp, ComparisonFunction backStencilFunc)
        {
                DepthEnable = depthEnable;
                DepthWriteMask = depthWriteEnable ? DepthWriteMask.All : DepthWriteMask.Zero;
                DepthFunc = depthFunc;
                StencilEnable = stencilEnable;
                StencilReadMask = stencilReadMask;
                StencilWriteMask = stencilWriteMask;
                FrontFace.StencilFailOp = frontStencilFailOp;
                FrontFace.StencilDepthFailOp = frontStencilDepthFailOp;
                FrontFace.StencilPassOp = frontStencilPassOp;
                FrontFace.StencilFunc = frontStencilFunc;
                BackFace.StencilFailOp = backStencilFailOp;
                BackFace.StencilDepthFailOp = backStencilDepthFailOp;
                BackFace.StencilPassOp = backStencilPassOp;
                BackFace.StencilFunc = backStencilFunc;
            }
        }


    }
}

#endif // VORTICE_DEPTHSTENCILDESCRIPTION_H