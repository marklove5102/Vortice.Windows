// Copyright (c) Contributors.

#ifndef VORTICE_VIDEOENCODERAV1CODECCONFIGURATIONSUPPORT_H
#define VORTICE_VIDEOENCODERAV1CODECCONFIGURATIONSUPPORT_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
            namespace Vortice.Direct3D12.Video;

            class VideoEncoderAV1CodecConfigurationSupport
            {
                public: VideoEncoderAv1FeatureFlags SupportedFeatureFlags{};
                public: VideoEncoderAv1FeatureFlags RequiredFeatureFlags{};
                public: VideoEncoderAv1InterpolationFiltersFlags SupportedInterpolationFilters{};
                public: SupportedRestorationParams__FixedBuffer SupportedRestorationParams{};
                public: VideoEncoderAv1SegmentationModeFlags SupportedSegmentationModes{};
                public: SupportedTxModes__FixedBuffer SupportedTxModes{};
                public: VideoEncoderAv1SegmentationBlockSize SegmentationBlockSize{};
                public: VideoEncoderAv1PostEncodeValuesFlags PostEncodeValuesFlags{};
                public: uint32_t MaxTemporalLayers{};
                public: uint32_t MaxSpatialLayers{};

                struct SupportedRestorationParams__FixedBuffer
            {
                    public: VideoEncoderAv1RestorationSupportFlags e0{};
                    public: VideoEncoderAv1RestorationSupportFlags e1{};
                    public: VideoEncoderAv1RestorationSupportFlags e2{};
                    public: VideoEncoderAv1RestorationSupportFlags e3{};
                    public: VideoEncoderAv1RestorationSupportFlags e4{};
                    public: VideoEncoderAv1RestorationSupportFlags e5{};
                    public: VideoEncoderAv1RestorationSupportFlags e6{};
                    public: VideoEncoderAv1RestorationSupportFlags e7{};
                    public: VideoEncoderAv1RestorationSupportFlags e8{};

                    public VideoEncoderAv1RestorationSupportFlags this{
                        [MethodImpl(MethodImplOptions.AggressiveInlining)]
                        get
                        {
                            return this[(row * 3) + column];
                        }
                        set
                        {
                            this[(row * 3) + column] = value;
                        }
                    }

                    public ref VideoEncoderAv1RestorationSupportFlags this{
                        [MethodImpl(MethodImplOptions.AggressiveInlining)]
                        get
                        {
                            return ref AsSpan(void) = 0;
                        }
                    }

                    [MethodImpl(MethodImplOptions.AggressiveInlining)]
                    public Span<VideoEncoderAv1RestorationSupportFlags> AsSpan()
                    {
                        return MemoryMarshal.CreateSpan(ref e0, 9);
                    }
                }

                struct SupportedTxModes__FixedBuffer
            {
                    public: VideoEncoderAv1TxModeFlags e0{};
                    public: VideoEncoderAv1TxModeFlags e1{};
                    public: VideoEncoderAv1TxModeFlags e2{};
                    public: VideoEncoderAv1TxModeFlags e3{};

                    public ref VideoEncoderAv1TxModeFlags this{
                        [MethodImpl(MethodImplOptions.AggressiveInlining)]
                        get
                        {
                            return ref AsSpan(void) = 0;
                        }
                    }

                    [MethodImpl(MethodImplOptions.AggressiveInlining)]
                    public Span<VideoEncoderAv1TxModeFlags> AsSpan()
                    {
                        return MemoryMarshal.CreateSpan(ref e0, 4);
                    }
                }
                internal struct __Native
            {
                    public: VideoEncoderAv1FeatureFlags SupportedFeatureFlags{};
                    public: VideoEncoderAv1FeatureFlags RequiredFeatureFlags{};
                    public: VideoEncoderAv1InterpolationFiltersFlags SupportedInterpolationFilters{};
                    public fixed int SupportedRestorationParams[3 * 3];
                    public: VideoEncoderAv1SegmentationModeFlags SupportedSegmentationModes{};
                    public fixed int32_t SupportedTxModes{};
                    public: VideoEncoderAv1SegmentationBlockSize SegmentationBlockSize{};
                    public: VideoEncoderAv1PostEncodeValuesFlags PostEncodeValuesFlags{};
                    public: uint32_t MaxTemporalLayers{};
                    public: uint32_t MaxSpatialLayers{};
                }

                //internal unsafe void __MarshalFree(ref __Native @ref)
                //{
                //    if (@ref.pH264Profile != IntPtr.Zero)
                //    {
                //        Marshal.FreeHGlobal(@ref.pH264Profile);
                //    }
                //}

                //internal void __MarshalTo(ref __Native @ref)
                //{
                //    @ref.DataSize = DataSize;
                //    if (H264Profile != nullptr)
                //    {
                //        @ref.pH264Profile = UnsafeUtilities.AllocToPointer<VideoEncoderProfileH264>(H264Profile);
                //    }

                //    if (HEVCProfile != nullptr)
                //    {
                //        @ref.pHEVCProfile = UnsafeUtilities.AllocToPointer<VideoEncoderProfileHevc>(HEVCProfile);
                //    }
                //}

                //internal void __MarshalFrom(ref __Native @ref)
                //{
                //    DataSize = @ref.DataSize;

                //    // TODO:
                //    if (@ref.pH264Profile != IntPtr.Zero)
                //    {
                //    }
                //}
            }


        }
    }
}

#endif // VORTICE_VIDEOENCODERAV1CODECCONFIGURATIONSUPPORT_H