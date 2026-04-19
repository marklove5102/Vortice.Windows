// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_VIDEOFORMATGUIDS_H
#define VORTICE_MEDIAFOUNDATION_VIDEOFORMATGUIDS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VIDEOFORMATGUIDS_H
#define VORTICE_VORTICE_VIDEOFORMATGUIDS_H

#include <cstdint>

namespace Vortice {

class VideoFormatGuids
{
public:
    ~VideoFormatGuids() = default;

    static const GUID Wmv1{new("31564d57-0000-0010-8000-00aa00389b71")};
    static const GUID Wmv2{new("32564d57-0000-0010-8000-00aa00389b71")};
    static const GUID Wmv3{new("33564d57-0000-0010-8000-00aa00389b71")};
    static const GUID Dvc{new("20637664-0000-0010-8000-00aa00389b71")};
    static const GUID Dv50{new("30357664-0000-0010-8000-00aa00389b71")};
    static const GUID Dv25{new("35327664-0000-0010-8000-00aa00389b71")};
    static const GUID H263{new("33363248-0000-0010-8000-00aa00389b71")};
    static const GUID H264{new("34363248-0000-0010-8000-00aa00389b71")};
    static const GUID H265{new("35363248-0000-0010-8000-00aa00389b71")};
    static const GUID Hevc{new("43564548-0000-0010-8000-00aa00389b71")};
    static const GUID HevcEs{new("53564548-0000-0010-8000-00aa00389b71")};
    static const GUID Vp80{new("30385056-0000-0010-8000-00aa00389b71")};
    static const GUID Vp90{new("30395056-0000-0010-8000-00aa00389b71")};
    static const GUID MultisampledS2{new("3253534d-0000-0010-8000-00aa00389b71")};
    static const GUID M4S2{new("3253344d-0000-0010-8000-00aa00389b71")};
    static const GUID Wvc1{new("31435657-0000-0010-8000-00aa00389b71")};
    static const GUID P010{new("30313050-0000-0010-8000-00aa00389b71")};
    static const GUID AI44{new("34344941-0000-0010-8000-00aa00389b71")};
    static const GUID Dvh1{new("31687664-0000-0010-8000-00aa00389b71")};
    static const GUID Dvhd{new("64687664-0000-0010-8000-00aa00389b71")};
    static const GUID MultisampledS1{new("3153534d-0000-0010-8000-00aa00389b71")};
    static const GUID Mp43{new("3334504d-0000-0010-8000-00aa00389b71")};
    static const GUID Mp4s{new("5334504d-0000-0010-8000-00aa00389b71")};
    static const GUID Mp4v{new("5634504d-0000-0010-8000-00aa00389b71")};
    static const GUID Mpg1{new("3147504d-0000-0010-8000-00aa00389b71")};
    static const GUID Mjpg{new("47504a4d-0000-0010-8000-00aa00389b71")};
    static const GUID Dvsl{new("6c737664-0000-0010-8000-00aa00389b71")};
    static const GUID YUY2{new("32595559-0000-0010-8000-00aa00389b71")};
    static const GUID Yv12{new("32315659-0000-0010-8000-00aa00389b71")};
    static const GUID P016{new("36313050-0000-0010-8000-00aa00389b71")};
    static const GUID P210{new("30313250-0000-0010-8000-00aa00389b71")};
    static const GUID P216{new("36313250-0000-0010-8000-00aa00389b71")};
    static const GUID I420{new("30323449-0000-0010-8000-00aa00389b71")};
    static const GUID Dvsd{new("64737664-0000-0010-8000-00aa00389b71")};
    static const GUID Y42T{new("54323459-0000-0010-8000-00aa00389b71")};
    static const GUID NV12{new("3231564e-0000-0010-8000-00aa00389b71")};
    static const GUID NV11{new("3131564e-0000-0010-8000-00aa00389b71")};
    static const GUID Y210{new("30313259-0000-0010-8000-00aa00389b71")};
    static const GUID Y216{new("36313259-0000-0010-8000-00aa00389b71")};
    static const GUID Y410{new("30313459-0000-0010-8000-00aa00389b71")};
    static const GUID Y416{new("36313459-0000-0010-8000-00aa00389b71")};
    static const GUID Y41P{new("50313459-0000-0010-8000-00aa00389b71")};
    static const GUID Y41T{new("54313459-0000-0010-8000-00aa00389b71")};
    static const GUID Yvu9{new("39555659-0000-0010-8000-00aa00389b71")};
    static const GUID Yvyu{new("55595659-0000-0010-8000-00aa00389b71")};
    static const GUID Iyuv{new("56555949-0000-0010-8000-00aa00389b71")};
    static const GUID Uyvy{new("59565955-0000-0010-8000-00aa00389b71")};
    static const GUID AYUV{new("56555941-0000-0010-8000-00aa00389b71")};
    static const GUID Y420O{new("4f303234-0000-0010-8000-00aa00389b71")};

    static GUID FromFourCC() { return new Guid(string.Concat(fourCC.ToString("I", nullptr), "-0000-0010-8000-00aa00389b71")); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_VIDEOFORMATGUIDS_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_VIDEOFORMATGUIDS_H
