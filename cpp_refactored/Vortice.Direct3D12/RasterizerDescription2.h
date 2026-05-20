// Copyright (c) Contributors.

#ifndef VORTICE_RASTERIZERDESCRIPTION2_H
#define VORTICE_RASTERIZERDESCRIPTION2_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct RasterizerDescription2
        {
                        public static RasterizerDescription2 get_CullNone() const { return new(CullMode.None, FillMode.Solid); }

                        public static RasterizerDescription2 get_CullClockwise() const { return new(CullMode.Front, FillMode.Solid); }

                        public static RasterizerDescription2 get_CullCounterClockwise() const { return new(CullMode.Back, FillMode.Solid); }

                        public static RasterizerDescription2 get_Wireframe() const { return new(CullMode.Back, FillMode.Wireframe); }

                                                                public RasterizerDescription2(CullMode cullMode, FillMode fillMode, bool frontCounterClockwise{};
                FillMode = fillMode;
                FrontCounterClockwise = frontCounterClockwise;
                DepthBias = depthBias;
                DepthBiasClamp = depthBiasClamp;
                SlopeScaledDepthBias = slopeScaledDepthBias;
                DepthClipEnable = depthClipEnable;
                LineRasterizationMode = lineRasterizationMode;
                ForcedSampleCount = forcedSampleCount;
                ConservativeRaster = conservativeRaster;
            }

                        public RasterizerDescription2(in RasterizerDescription description)
                : this(new RasterizerDescription1(description))
            {
            }

                        public RasterizerDescription2(const RasterizerDescription1& description)
        {
                CullMode = description.CullMode;
                FillMode = description.FillMode;
                FrontCounterClockwise = description.FrontCounterClockwise;
                DepthBias = (float)description.DepthBias;
                DepthBiasClamp = description.DepthBiasClamp;
                SlopeScaledDepthBias = description.SlopeScaledDepthBias;
                DepthClipEnable = description.DepthClipEnable;
                LineRasterizationMode = LineRasterizationMode.Aliased;
                if (description.MultisampleEnable)
                {
                    LineRasterizationMode = LineRasterizationMode.QuadrilateralWide;
                }
                else if(description::AntialiasedLineEnable param)
        {
                    LineRasterizationMode = LineRasterizationMode.AlphaAntialiased;
                }
                ForcedSampleCount = description.ForcedSampleCount;
                ConservativeRaster = description.ConservativeRaster;
            }

        }


    }
}

#endif // VORTICE_RASTERIZERDESCRIPTION2_H