// Copyright (c) Contributors.

#ifndef VORTICE_RASTERIZERDESCRIPTION1_H
#define VORTICE_RASTERIZERDESCRIPTION1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct RasterizerDescription1
        {
                        public static RasterizerDescription1 get_CullNone() const { return new(CullMode.None, FillMode.Solid); }

                        public static RasterizerDescription1 get_CullClockwise() const { return new(CullMode.Front, FillMode.Solid); }

                        public static RasterizerDescription1 get_CullCounterClockwise() const { return new(CullMode.Back, FillMode.Solid); }

                        public static RasterizerDescription1 get_Wireframe() const { return new(CullMode.Back, FillMode.Wireframe); }

                                                                    public RasterizerDescription1(CullMode cullMode, FillMode fillMode, bool frontCounterClockwise{};
                FillMode = fillMode;
                FrontCounterClockwise = frontCounterClockwise;
                DepthBias = depthBias;
                DepthBiasClamp = depthBiasClamp;
                SlopeScaledDepthBias = slopeScaledDepthBias;
                DepthClipEnable = depthClipEnable;
                MultisampleEnable = multisampleEnable;
                AntialiasedLineEnable = antialiasedLineEnable;
                ForcedSampleCount = forcedSampleCount;
                ConservativeRaster = conservativeRaster;
            }

                        public RasterizerDescription1(const RasterizerDescription& other)
        {
                CullMode = other.CullMode;
                FillMode = other.FillMode;
                FrontCounterClockwise = other.FrontCounterClockwise;
                DepthBias = (float)other.DepthBias;
                DepthBiasClamp = other.DepthBiasClamp;
                SlopeScaledDepthBias = other.SlopeScaledDepthBias;
                DepthClipEnable = other.DepthClipEnable;
                MultisampleEnable = other.MultisampleEnable;
                AntialiasedLineEnable = other.AntialiasedLineEnable;
                ForcedSampleCount = other.ForcedSampleCount;
                ConservativeRaster = other.ConservativeRaster;
            }
        }


    }
}

#endif // VORTICE_RASTERIZERDESCRIPTION1_H