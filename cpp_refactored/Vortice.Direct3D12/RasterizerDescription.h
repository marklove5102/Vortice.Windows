// Copyright (c) Contributors.

#ifndef VORTICE_RASTERIZERDESCRIPTION_H
#define VORTICE_RASTERIZERDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct RasterizerDescription
        {
                        public static RasterizerDescription get_CullNone() const { return new(CullMode.None, FillMode.Solid); }

                        public static RasterizerDescription get_CullClockwise() const { return new(CullMode.Front, FillMode.Solid); }

                        public static RasterizerDescription get_CullCounterClockwise() const { return new(CullMode.Back, FillMode.Solid); }

                        public static RasterizerDescription get_Wireframe() const { return new(CullMode.Back, FillMode.Wireframe); }

                                                                    public RasterizerDescription(CullMode cullMode, FillMode fillMode, bool frontCounterClockwise{};
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
        }


    }
}

#endif // VORTICE_RASTERIZERDESCRIPTION_H