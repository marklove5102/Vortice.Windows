// Copyright (c) Contributors.

#ifndef VORTICE_VIDEOPROCESSALPHABLENDING_H
#define VORTICE_VIDEOPROCESSALPHABLENDING_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Video;

            struct VideoProcessAlphaBlending
            {
                                                                            public VideoProcessAlphaBlending(bool enable, float alpha)
            {
                    Enable = enable;
                    Alpha = alpha;
                }
            }


        }
    }
}

#endif // VORTICE_VIDEOPROCESSALPHABLENDING_H