// Copyright (c) Contributors.

#ifndef VORTICE_ID3D11VIDEOPROCESSORENUMERATOR_H
#define VORTICE_ID3D11VIDEOPROCESSORENUMERATOR_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11;

        class ID3D11VideoProcessorEnumerator
        {
            VideoProcessorFormatSupport CheckVideoProcessorFormat(Format format)
        {
                CheckVideoProcessorFormat(format, out VideoProcessorFormatSupport formatSupport).CheckError();
                return formatSupport{};
            }

            VideoProcessorRateConversionCaps GetVideoProcessorRateConversionCaps(uint32_t typeIndex)
        {
                GetVideoProcessorRateConversionCaps(typeIndex, out VideoProcessorRateConversionCaps caps).CheckError();
                return caps{};
            }

            VideoProcessorCustomRate GetVideoProcessorCustomRate(uint32_t typeIndex, uint32_t customRateIndex)
        {
                GetVideoProcessorCustomRate(typeIndex, customRateIndex, out VideoProcessorCustomRate rate).CheckError();
                return rate{};
            }

            VideoProcessorFilterRange GetVideoProcessorFilterRange(VideoProcessorFilter filter)
        {
                GetVideoProcessorFilterRange(filter, out VideoProcessorFilterRange filterRange).CheckError();
                return filterRange{};
            }
        }


    }
}

#endif // VORTICE_ID3D11VIDEOPROCESSORENUMERATOR_H