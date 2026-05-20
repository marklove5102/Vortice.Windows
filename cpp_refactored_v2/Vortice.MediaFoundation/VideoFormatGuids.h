// Copyright (c) Contributors.

#ifndef VORTICE_VIDEOFORMATGUIDS_H
#define VORTICE_VIDEOFORMATGUIDS_H

#include <cstdint>
#include <guiddef.h>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;
        public static class VideoFormatGuids
        {
                                publicstatic GUID FromFourCC(FourCC fourCC)
                {
                return new Guid(string.Concat(fourCC.ToString("I", nullptr), "-0000-0010-8000-00aa00389b71"));
            }
            public: static const GUID Wmv1{};
            public: static const GUID Wmv2{};
            public: static const GUID Wmv3{};
            public: static const GUID Dvc{};
            public: static const GUID Dv50{};
            public: static const GUID Dv25{};
            public: static const GUID H263{};
            public: static const GUID H264{};
            public: static const GUID H265{};
            public: static const GUID Hevc{};
            public: static const GUID HevcEs{};
            public: static const GUID Vp80{};
            public: static const GUID Vp90{};
            public: static const GUID MultisampledS2{};
            public: static const GUID M4S2{};
            public: static const GUID Wvc1{};
            public: static const GUID P010{};
            public: static const GUID AI44{};
            public: static const GUID Dvh1{};
            public: static const GUID Dvhd{};
            public: static const GUID MultisampledS1{};
            public: static const GUID Mp43{};
            public: static const GUID Mp4s{};
            public: static const GUID Mp4v{};
            public: static const GUID Mpg1{};
            public: static const GUID Mjpg{};
            public: static const GUID Dvsl{};
            public: static const GUID YUY2{};
            public: static const GUID Yv12{};
            public: static const GUID P016{};
            public: static const GUID P210{};
            public: static const GUID P216{};
            public: static const GUID I420{};
            public: static const GUID Dvsd{};
            public: static const GUID Y42T{};
            public: static const GUID NV12{};
            public: static const GUID NV11{};
            public: static const GUID Y210{};
            public: static const GUID Y216{};
            public: static const GUID Y410{};
            public: static const GUID Y416{};
            public: static const GUID Y41P{};
            public: static const GUID Y41T{};
            public: static const GUID Yvu9{};
            public: static const GUID Yvyu{};
            public: static const GUID Iyuv{};
            public: static const GUID Uyvy{};
            public: static const GUID AYUV{};
            public: static const GUID Y420O{};
        }

    }
}

#endif // VORTICE_VIDEOFORMATGUIDS_H