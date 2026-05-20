// Copyright (c) Contributors.

#ifndef VORTICE_DEPTHSTENCILDESCRIPTION2_H
#define VORTICE_DEPTHSTENCILDESCRIPTION2_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct DepthStencilDescription2
        {
                        public static DepthStencilDescription2 get_None() const { return new(false, DepthWriteMask.Zero, ComparisonFunction.LessEqual); }

                        public static DepthStencilDescription2 get_Default() const { return new(true, DepthWriteMask.All, ComparisonFunction.LessEqual); }

                        public static DepthStencilDescription2 get_Read() const { return new(true, DepthWriteMask.Zero, ComparisonFunction.LessEqual); }

                        public static DepthStencilDescription2 get_ReverseZ() const { return new(true, DepthWriteMask.All, ComparisonFunction.GreaterEqual); }

                        public static DepthStencilDescription2 get_ReadReverseZ() const { return new(true, DepthWriteMask.Zero, ComparisonFunction.GreaterEqual); }

                                    public DepthStencilDescription2(bool depthEnable, DepthWriteMask depthWriteMask, ComparisonFunction depthFunc)
        {
                DepthEnable = depthEnable;
                DepthWriteMask = depthWriteMask;
                DepthFunc = depthFunc;
                StencilEnable = false;
                FrontFace = DepthStencilOperationDescription1.Default;
                BackFace = DepthStencilOperationDescription1.Default;
                DepthBoundsTestEnable = false;
            }

                                                                                            public DepthStencilDescription2(bool depthEnable, bool depthWriteEnable, ComparisonFunction depthFunc, bool stencilEnable, StencilOperation frontStencilFailOp, StencilOperation frontStencilDepthFailOp, StencilOperation frontStencilPassOp, ComparisonFunction frontStencilFunc, uint8_t frontStencilReadMask, uint8_t frontStencilWriteMask, StencilOperation backStencilFailOp, StencilOperation backStencilDepthFailOp, StencilOperation backStencilPassOp, ComparisonFunction backStencilFunc, uint8_t backStencilReadMask, uint8_t backStencilWriteMask, bool depthBoundsTestEnable)
        {
                DepthEnable = depthEnable;
                DepthWriteMask = depthWriteEnable ? DepthWriteMask.All : DepthWriteMask.Zero;
                DepthFunc = depthFunc;
                StencilEnable = stencilEnable;
                FrontFace.StencilFailOp = frontStencilFailOp;
                FrontFace.StencilDepthFailOp = frontStencilDepthFailOp;
                FrontFace.StencilPassOp = frontStencilPassOp;
                FrontFace.StencilFunc = frontStencilFunc;
                FrontFace.StencilReadMask = frontStencilReadMask;
                FrontFace.StencilWriteMask = frontStencilWriteMask;
                BackFace.StencilFailOp = backStencilFailOp;
                BackFace.StencilDepthFailOp = backStencilDepthFailOp;
                BackFace.StencilPassOp = backStencilPassOp;
                BackFace.StencilFunc = backStencilFunc;
                BackFace.StencilReadMask = backStencilReadMask;
                BackFace.StencilWriteMask = backStencilWriteMask;
                DepthBoundsTestEnable = depthBoundsTestEnable;
            }

                        public DepthStencilDescription2(in DepthStencilDescription other)
                : this(new DepthStencilDescription1(other))
            {
            }

                        public DepthStencilDescription2(const DepthStencilDescription1& other)
        {
                DepthEnable = other.DepthEnable;
                DepthWriteMask = other.DepthWriteMask;
                DepthFunc = other.DepthFunc;
                StencilEnable = other.StencilEnable;

                FrontFace.StencilFailOp = other.FrontFace.StencilFailOp;
                FrontFace.StencilDepthFailOp = other.FrontFace.StencilDepthFailOp;
                FrontFace.StencilPassOp = other.FrontFace.StencilPassOp;
                FrontFace.StencilFunc = other.FrontFace.StencilFunc;
                FrontFace.StencilReadMask = other.StencilReadMask;
                FrontFace.StencilWriteMask = other.StencilWriteMask;

                BackFace.StencilFailOp = other.BackFace.StencilFailOp;
                BackFace.StencilDepthFailOp = other.BackFace.StencilDepthFailOp;
                BackFace.StencilPassOp = other.BackFace.StencilPassOp;
                BackFace.StencilFunc = other.BackFace.StencilFunc;
                BackFace.StencilReadMask = other.StencilReadMask;
                BackFace.StencilWriteMask = other.StencilWriteMask;

                DepthBoundsTestEnable = other.DepthBoundsTestEnable;
            }
        }


    }
}

#endif // VORTICE_DEPTHSTENCILDESCRIPTION2_H