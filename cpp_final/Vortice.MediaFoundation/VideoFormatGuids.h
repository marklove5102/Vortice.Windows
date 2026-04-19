// Copyright (c) Contributors.

#ifndef VORTICE_VIDEOFORMATGUIDS_H
#define VORTICE_VIDEOFORMATGUIDS_H

#include <cstdint>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.MediaFoundation;

        public static class VideoFormatGuids
        {
                                static Guid FromFourCC(FourCC fourCC)
        {
                return new Guid(string.Concat(fourCC.ToString("I", nullptr), "-0000-0010-8000-00aa00389b71"));
            }

            public: static const Guid Wmv1{};
            public: static const Guid Wmv2{};
            public: static const Guid Wmv3{};

            public: static const Guid Dvc{};
            public: static const Guid Dv50{};
            public: static const Guid Dv25{};

            public: static const Guid H263{};
            public: static const Guid H264{};
            public: static const Guid H265{};

            public: static const Guid Hevc{};
            public: static const Guid HevcEs{};

            public: static const Guid Vp80{};
            public: static const Guid Vp90{};

            public: static const Guid MultisampledS2{};
            public: static const Guid M4S2{};
            public: static const Guid Wvc1{};

            public: static const Guid P010{};
            public: static const Guid AI44{};

            public: static const Guid Dvh1{};
            public: static const Guid Dvhd{};

            public: static const Guid MultisampledS1{};

            public: static const Guid Mp43{};
            public: static const Guid Mp4s{};
            public: static const Guid Mp4v{};
            public: static const Guid Mpg1{};
            public: static const Guid Mjpg{};

            public: static const Guid Dvsl{};
            public: static const Guid YUY2{};

            public: static const Guid Yv12{};
            public: static const Guid P016{};

            public: static const Guid P210{};
            public: static const Guid P216{};
            public: static const Guid I420{};
            public: static const Guid Dvsd{};

            public: static const Guid Y42T{};
            public: static const Guid NV12{};
            public: static const Guid NV11{};
            public: static const Guid Y210{};
            public: static const Guid Y216{};
            public: static const Guid Y410{};
            public: static const Guid Y416{};
            public: static const Guid Y41P{};
            public: static const Guid Y41T{};
            public: static const Guid Yvu9{};
            public: static const Guid Yvyu{};
            public: static const Guid Iyuv{};
            public: static const Guid Uyvy{};

            public: static const Guid AYUV{};
            public: static const Guid Y420O{};
        }


    }
}

#endif // VORTICE_VIDEOFORMATGUIDS_H