// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_VIDEOENCODERAV1CODECCONFIGURATIONSUPPORT_H
#define VORTICE_DIRECT3D12_VIDEOENCODERAV1CODECCONFIGURATIONSUPPORT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VIDEOENCODERAV1CODECCONFIGURATIONSUPPORT_H
#define VORTICE_VORTICE_VIDEOENCODERAV1CODECCONFIGURATIONSUPPORT_H

#include <cstdint>

namespace Vortice {

class VideoEncoderAV1CodecConfigurationSupport
{
public:
    ~VideoEncoderAV1CodecConfigurationSupport() = default;

    VideoEncoderAv1FeatureFlags SupportedFeatureFlags;
    VideoEncoderAv1FeatureFlags RequiredFeatureFlags;
    VideoEncoderAv1InterpolationFiltersFlags SupportedInterpolationFilters;
    SupportedRestorationParams__FixedBuffer SupportedRestorationParams;
    VideoEncoderAv1SegmentationModeFlags SupportedSegmentationModes;
    SupportedTxModes__FixedBuffer SupportedTxModes;
    VideoEncoderAv1SegmentationBlockSize SegmentationBlockSize;
    VideoEncoderAv1PostEncodeValuesFlags PostEncodeValuesFlags;
    uint32_t MaxTemporalLayers;
    uint32_t MaxSpatialLayers;
    VideoEncoderAv1RestorationSupportFlags e0;
    VideoEncoderAv1RestorationSupportFlags e1;
    VideoEncoderAv1RestorationSupportFlags e2;
    VideoEncoderAv1RestorationSupportFlags e3;
    VideoEncoderAv1RestorationSupportFlags e4;
    VideoEncoderAv1RestorationSupportFlags e5;
    VideoEncoderAv1RestorationSupportFlags e6;
    VideoEncoderAv1RestorationSupportFlags e7;
    VideoEncoderAv1RestorationSupportFlags e8;
    VideoEncoderAv1TxModeFlags e0;
    VideoEncoderAv1TxModeFlags e1;
    VideoEncoderAv1TxModeFlags e2;
    VideoEncoderAv1TxModeFlags e3;
    VideoEncoderAv1FeatureFlags SupportedFeatureFlags;
    VideoEncoderAv1FeatureFlags RequiredFeatureFlags;
    VideoEncoderAv1InterpolationFiltersFlags SupportedInterpolationFilters;
    VideoEncoderAv1SegmentationModeFlags SupportedSegmentationModes;
    VideoEncoderAv1SegmentationBlockSize SegmentationBlockSize;
    VideoEncoderAv1PostEncodeValuesFlags PostEncodeValuesFlags;
    uint32_t MaxTemporalLayers;
    uint32_t MaxSpatialLayers;

    std::span<VideoEncoderAv1RestorationSupportFlags> AsSpan() { return MemoryMarshal.CreateSpan(ref e0, 9); }

    std::span<VideoEncoderAv1TxModeFlags> AsSpan() { return MemoryMarshal.CreateSpan(ref e0, 4); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_VIDEOENCODERAV1CODECCONFIGURATIONSUPPORT_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SUPPORTEDRESTORATIONPARAMS__FIXEDBUFFER_H
#define VORTICE_VORTICE_SUPPORTEDRESTORATIONPARAMS__FIXEDBUFFER_H

#include <cstdint>

namespace Vortice {

struct SupportedRestorationParams__FixedBuffer
{
public:
    VideoEncoderAv1RestorationSupportFlags e0;
    VideoEncoderAv1RestorationSupportFlags e1;
    VideoEncoderAv1RestorationSupportFlags e2;
    VideoEncoderAv1RestorationSupportFlags e3;
    VideoEncoderAv1RestorationSupportFlags e4;
    VideoEncoderAv1RestorationSupportFlags e5;
    VideoEncoderAv1RestorationSupportFlags e6;
    VideoEncoderAv1RestorationSupportFlags e7;
    VideoEncoderAv1RestorationSupportFlags e8;

    std::span<VideoEncoderAv1RestorationSupportFlags> AsSpan() { return MemoryMarshal.CreateSpan(ref e0, 9); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SUPPORTEDRESTORATIONPARAMS__FIXEDBUFFER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SUPPORTEDTXMODES__FIXEDBUFFER_H
#define VORTICE_VORTICE_SUPPORTEDTXMODES__FIXEDBUFFER_H

#include <cstdint>

namespace Vortice {

struct SupportedTxModes__FixedBuffer
{
public:
    VideoEncoderAv1TxModeFlags e0;
    VideoEncoderAv1TxModeFlags e1;
    VideoEncoderAv1TxModeFlags e2;
    VideoEncoderAv1TxModeFlags e3;

    std::span<VideoEncoderAv1TxModeFlags> AsSpan() { return MemoryMarshal.CreateSpan(ref e0, 4); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SUPPORTEDTXMODES__FIXEDBUFFER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    VideoEncoderAv1FeatureFlags SupportedFeatureFlags;
    VideoEncoderAv1FeatureFlags RequiredFeatureFlags;
    VideoEncoderAv1InterpolationFiltersFlags SupportedInterpolationFilters;
    VideoEncoderAv1SegmentationModeFlags SupportedSegmentationModes;
    VideoEncoderAv1SegmentationBlockSize SegmentationBlockSize;
    VideoEncoderAv1PostEncodeValuesFlags PostEncodeValuesFlags;
    uint32_t MaxTemporalLayers;
    uint32_t MaxSpatialLayers;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_VIDEOENCODERAV1CODECCONFIGURATIONSUPPORT_H
