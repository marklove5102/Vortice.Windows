// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11VIDEOPROCESSORENUMERATOR_H
#define VORTICE_DIRECT3D11_ID3D11VIDEOPROCESSORENUMERATOR_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11VIDEOPROCESSORENUMERATOR_H
#define VORTICE_VORTICE_ID3D11VIDEOPROCESSORENUMERATOR_H

#include <cstdint>

namespace Vortice {

class ID3D11VideoProcessorEnumerator
{
public:
    ~ID3D11VideoProcessorEnumerator() = default;

    VideoProcessorFormatSupport CheckVideoProcessorFormat() { CheckVideoProcessorFormat(format, out VideoProcessorFormatSupport formatSupport).CheckError();
        return formatSupport; }

    VideoProcessorRateConversionCaps GetVideoProcessorRateConversionCaps() { GetVideoProcessorRateConversionCaps(typeIndex, out VideoProcessorRateConversionCaps caps).CheckError();
        return caps; }

    VideoProcessorCustomRate GetVideoProcessorCustomRate() { GetVideoProcessorCustomRate(typeIndex, customRateIndex, out VideoProcessorCustomRate rate).CheckError();
        return rate; }

    VideoProcessorFilterRange GetVideoProcessorFilterRange() { GetVideoProcessorFilterRange(filter, out VideoProcessorFilterRange filterRange).CheckError();
        return filterRange; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11VIDEOPROCESSORENUMERATOR_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11VIDEOPROCESSORENUMERATOR_H
