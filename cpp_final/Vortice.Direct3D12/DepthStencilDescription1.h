// Copyright (c) Contributors.

#ifndef VORTICE_DEPTHSTENCILDESCRIPTION1_H
#define VORTICE_DEPTHSTENCILDESCRIPTION1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct DepthStencilDescription1
        {
                        public static DepthStencilDescription1 get_None() const { return new(false, DepthWriteMask.Zero, ComparisonFunction.LessEqual); }

                        public static DepthStencilDescription1 get_Default() const { return new(true, DepthWriteMask.All, ComparisonFunction.LessEqual); }

                        public static DepthStencilDescription1 get_Read() const { return new(true, DepthWriteMask.Zero, ComparisonFunction.LessEqual); }

                        public static DepthStencilDescription1 get_ReverseZ() const { return new(true, DepthWriteMask.All, ComparisonFunction.GreaterEqual); }

                        public static DepthStencilDescription1 get_ReadReverseZ() const { return new(true, DepthWriteMask.Zero, ComparisonFunction.GreaterEqual); }

                                    public DepthStencilDescription1(bool depthEnable, DepthWriteMask depthWriteMask, ComparisonFunction depthFunc)
        {
                DepthEnable = depthEnable;
                DepthWriteMask = depthWriteMask;
                DepthFunc = depthFunc;
                StencilEnable = false;
                StencilReadMask = D3D12.DefaultStencilReadMask;
                StencilWriteMask = D3D12.DefaultStencilWriteMask;
                FrontFace = DepthStencilOperationDescription.Default;
                BackFace = DepthStencilOperationDescription.Default;
                DepthBoundsTestEnable = false;
            }

                                                                                    public DepthStencilDescription1(bool depthEnable, bool depthWriteEnable, ComparisonFunction depthFunc, bool stencilEnable, uint8_t stencilReadMask, uint8_t stencilWriteMask, StencilOperation frontStencilFailOp, StencilOperation frontStencilDepthFailOp, StencilOperation frontStencilPassOp, ComparisonFunction frontStencilFunc, StencilOperation backStencilFailOp, StencilOperation backStencilDepthFailOp, StencilOperation backStencilPassOp, ComparisonFunction backStencilFunc, bool depthBoundsTestEnable)
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
                DepthBoundsTestEnable = depthBoundsTestEnable;
            }

                        public DepthStencilDescription1(const DepthStencilDescription& other)
        {
                DepthEnable = other.DepthEnable;
                DepthWriteMask = other.DepthWriteMask;
                DepthFunc = other.DepthFunc;
                StencilEnable = other.StencilEnable;
                StencilReadMask = other.StencilReadMask;
                StencilWriteMask = other.StencilWriteMask;
                FrontFace.StencilFailOp = other.FrontFace.StencilFailOp;
                FrontFace.StencilDepthFailOp = other.FrontFace.StencilDepthFailOp;
                FrontFace.StencilPassOp = other.FrontFace.StencilPassOp;
                FrontFace.StencilFunc = other.FrontFace.StencilFunc;
                BackFace.StencilFailOp = other.BackFace.StencilFailOp;
                BackFace.StencilDepthFailOp = other.BackFace.StencilDepthFailOp;
                BackFace.StencilPassOp = other.BackFace.StencilPassOp;
                BackFace.StencilFunc = other.BackFace.StencilFunc;
                DepthBoundsTestEnable = false;
            }
        }


    }
}

#endif // VORTICE_DEPTHSTENCILDESCRIPTION1_H