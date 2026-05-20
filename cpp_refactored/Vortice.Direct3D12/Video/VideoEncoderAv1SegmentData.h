// Copyright (c) Contributors.

#ifndef VORTICE_VIDEOENCODERAV1SEGMENTDATA_H
#define VORTICE_VIDEOENCODERAV1SEGMENTDATA_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Video;

            struct VideoEncoderAv1SegmentData
            {
                public: uint64_t EnabledFeatures{};

                public fixed int64_t FeatureValue{};
            }


        }
    }
}

#endif // VORTICE_VIDEOENCODERAV1SEGMENTDATA_H