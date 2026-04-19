// Copyright (c) Contributors.

#ifndef VORTICE_VIDEODECODEOUTPUTSTREAMARGUMENTS1_H
#define VORTICE_VIDEODECODEOUTPUTSTREAMARGUMENTS1_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Video;

            class VideoDecodeOutputStreamArguments1
            {
                                    public: std::optional<ID3D12Resource> OutputTexture2D{};
                                public: int32_t OutputSubresource{};
                                    public: VideoDecodeConversionArguments1 ConversionArguments{};

                                public VideoDecodeOutputHistogram[] Histograms
                {
                    get => _histograms ??= new VideoDecodeOutputHistogram{};
                    private get_set() const { return _histograms{}; }
                }

                private VideoDecodeOutputHistogram[]? _histograms;
                [StructLayout(LayoutKind.Sequential, Pack = 0, CharSet = CharSet.Unicode)]
                internal struct __Native
            {
                    public: void* POutputTexture2D{};
                    public: int32_t OutputSubresource{};
                    public VideoDecodeConversionArguments1.__Native ConversionArguments{};
                    public VideoDecodeOutputHistogram.__Native Histograms0{};
                    public VideoDecodeOutputHistogram.__Native Histograms1{};
                    public VideoDecodeOutputHistogram.__Native Histograms2{};
                    public VideoDecodeOutputHistogram.__Native Histograms3{};
                }

                void __MarshalFree(__Native& @ref)
            {
                    GC.KeepAlive(OutputTexture2D);
                    ConversionArguments.__MarshalFree(ref @ref.ConversionArguments);
                    Histograms.__MarshalFree(ref @ref.Histograms0);
                    Histograms.__MarshalFree(ref @ref.Histograms1);
                    Histograms.__MarshalFree(ref @ref.Histograms2);
                    Histograms.__MarshalFree(ref @ref.Histograms3);
                }

                void __MarshalTo(__Native& @ref)
            {
                    @ref.POutputTexture2D = MarshallingHelpers.ToCallbackPtr<ID3D12Resource>(OutputTexture2D);
                    @ref.OutputSubresource = OutputSubresource;
                    ConversionArguments.__MarshalTo(ref @ref.ConversionArguments);
                    Histograms.__MarshalTo(ref @ref.Histograms0);
                    Histograms.__MarshalTo(ref @ref.Histograms1);
                    Histograms.__MarshalTo(ref @ref.Histograms2);
                    Histograms.__MarshalTo(ref @ref.Histograms3);
                }
            }


        }
    }
}

#endif // VORTICE_VIDEODECODEOUTPUTSTREAMARGUMENTS1_H