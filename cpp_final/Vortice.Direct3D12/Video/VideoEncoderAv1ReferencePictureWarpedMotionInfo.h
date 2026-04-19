// Copyright (c) Contributors.

#ifndef VORTICE_VIDEOENCODERAV1REFERENCEPICTUREWARPEDMOTIONINFO_H
#define VORTICE_VIDEOENCODERAV1REFERENCEPICTUREWARPEDMOTIONINFO_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Video;

            struct VideoEncoderAv1ReferencePictureWarpedMotionInfo
            {
                public: VideoEncoderAv1ReferenceWarpedMotionTransformation TransformationType{};
                public fixed int32_t TransformationMatrix{};
                public: RawBool InvalidAffineSet{};
            }


        }
    }
}

#endif // VORTICE_VIDEOENCODERAV1REFERENCEPICTUREWARPEDMOTIONINFO_H