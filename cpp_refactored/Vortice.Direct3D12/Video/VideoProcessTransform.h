// Copyright (c) Contributors.

#ifndef VORTICE_VIDEOPROCESSTRANSFORM_H
#define VORTICE_VIDEOPROCESSTRANSFORM_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Video;

            struct VideoProcessTransform
            {
                                                                                public VideoProcessTransform(RawRect sourceRectangle, RawRect destinationRectangle, VideoProcessOrientation orientation)
            {
                    SourceRectangle = sourceRectangle;
                    DestinationRectangle = destinationRectangle;
                    Orientation = orientation;
                }
            }


        }
    }
}

#endif // VORTICE_VIDEOPROCESSTRANSFORM_H