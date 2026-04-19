// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_VIDEOPROCESSTRANSFORM_H
#define VORTICE_DIRECT3D12_VIDEOPROCESSTRANSFORM_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VIDEOPROCESSTRANSFORM_H
#define VORTICE_VORTICE_VIDEOPROCESSTRANSFORM_H

#include <cstdint>

namespace Vortice {

struct VideoProcessTransform
{
public:
    constexpr VideoProcessTransform(RawRect sourceRectangle, RawRect destinationRectangle, VideoProcessOrientation orientation)
    SourceRectangle = sourceRectangle;
        DestinationRectangle = destinationRectangle;
        Orientation = orientation;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_VIDEOPROCESSTRANSFORM_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_VIDEOPROCESSTRANSFORM_H
