// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_VIDEOPROCESSINPUTSTREAMARGUMENTS_H
#define VORTICE_DIRECT3D12_VIDEOPROCESSINPUTSTREAMARGUMENTS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VIDEOPROCESSINPUTSTREAMARGUMENTS_H
#define VORTICE_VORTICE_VIDEOPROCESSINPUTSTREAMARGUMENTS_H

#include <cstdint>

namespace Vortice {

struct VideoProcessInputStreamArguments
{
public:
    VideoProcessTransform Transform;
    VideoProcessInputStreamFlags Flags;
    VideoProcessInputStreamRate RateInfo;
    VideoProcessAlphaBlending AlphaBlending;
    VideoProcessTransform Transform;
    VideoProcessInputStreamFlags Flags;
    VideoProcessInputStreamRate RateInfo;
    VideoProcessAlphaBlending AlphaBlending;


private:
    std::vector<VideoProcessInputStream> _inputStream;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_VIDEOPROCESSINPUTSTREAMARGUMENTS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    VideoProcessTransform Transform;
    VideoProcessInputStreamFlags Flags;
    VideoProcessInputStreamRate RateInfo;
    VideoProcessAlphaBlending AlphaBlending;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_VIDEOPROCESSINPUTSTREAMARGUMENTS_H
