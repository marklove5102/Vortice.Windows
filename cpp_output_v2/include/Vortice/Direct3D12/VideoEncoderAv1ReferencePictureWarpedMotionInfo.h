// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_VIDEOENCODERAV1REFERENCEPICTUREWARPEDMOTIONINFO_H
#define VORTICE_DIRECT3D12_VIDEOENCODERAV1REFERENCEPICTUREWARPEDMOTIONINFO_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VIDEOENCODERAV1REFERENCEPICTUREWARPEDMOTIONINFO_H
#define VORTICE_VORTICE_VIDEOENCODERAV1REFERENCEPICTUREWARPEDMOTIONINFO_H

#include <cstdint>

namespace Vortice {

struct VideoEncoderAv1ReferencePictureWarpedMotionInfo
{
public:
    VideoEncoderAv1ReferenceWarpedMotionTransformation TransformationType;
    RawBool InvalidAffineSet;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_VIDEOENCODERAV1REFERENCEPICTUREWARPEDMOTIONINFO_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_VIDEOENCODERAV1REFERENCEPICTUREWARPEDMOTIONINFO_H
