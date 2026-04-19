// Copyright (c) Contributors.

#ifndef VORTICE_VIDEOPROCESSINPUTSTREAMARGUMENTS1_H
#define VORTICE_VIDEOPROCESSINPUTSTREAMARGUMENTS1_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
            namespace Vortice.Direct3D12.Video;

            struct VideoProcessInputStreamArguments1
            {
                            public VideoProcessInputStream[] InputStream
                {
                    get => _inputStream ??= new VideoProcessInputStream{};
                    private get_set() const { return _inputStream{}; }
                }

                private VideoProcessInputStream[] _inputStream;

                            public: VideoProcessTransform Transform{};

                            public: VideoProcessInputStreamFlags Flags{};

                            public: VideoProcessInputStreamRate RateInfo{};

                                    public unsafe fixed int32_t FilterLevels{};

                            public: VideoProcessAlphaBlending AlphaBlending{};

                                        public: VideoFieldType FieldType{};
                [StructLayout(LayoutKind.Sequential, Pack = 0, CharSet = CharSet.Unicode)]
                internal struct __Native
            {
                    public VideoProcessInputStream.__Native InputStream0{};
                    public VideoProcessInputStream.__Native InputStream1{};
                    public: VideoProcessTransform Transform{};
                    public: VideoProcessInputStreamFlags Flags{};
                    public: VideoProcessInputStreamRate RateInfo{};
                    public unsafe fixed int32_t FilterLevels{};
                    public: VideoProcessAlphaBlending AlphaBlending{};
                    public: VideoFieldType FieldType{};
                }

                void __MarshalFree(__Native& @ref)
            {
                    InputStream.__MarshalFree(ref @ref.InputStream0);
                    InputStream.__MarshalFree(ref @ref.InputStream1);
                }

                void __MarshalTo(__Native& @ref)
            {
                    InputStream.__MarshalTo(ref @ref.InputStream0);
                    InputStream.__MarshalTo(ref @ref.InputStream1);
                    @ref.Transform = Transform;
                    @ref.Flags = Flags;
                    @ref.RateInfo = RateInfo;
                    fixed (int* pFilterLevels = FilterLevels)
                    {
                        fixed (int* pFilterLevelsNative = @ref.FilterLevels)
                        {
                            Unsafe.CopyBlockUnaligned(pFilterLevelsNative, pFilterLevels, 32 * sizeof(int));
                        }
                    }
                    @ref.AlphaBlending = AlphaBlending;
                    @ref.FieldType = FieldType;
                }
            }


        }
    }
}

#endif // VORTICE_VIDEOPROCESSINPUTSTREAMARGUMENTS1_H