// Copyright (c) Contributors.

#ifndef VORTICE_VIDEOPROCESSOUTPUTSTREAMARGUMENTS_H
#define VORTICE_VIDEOPROCESSOUTPUTSTREAMARGUMENTS_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Video;

            struct VideoProcessOutputStreamArguments
            {
                                    public VideoProcessOutputStream[] OutputStream
                {
                    get => _outputStream ??= new VideoProcessOutputStream{};
                    private get_set() const { return _outputStream{}; }
                }

                private VideoProcessOutputStream[] _outputStream;

                            public: RawRect TargetRectangle{};
                [StructLayout(LayoutKind.Sequential, Pack = 0, CharSet = CharSet.Unicode)]
                internal struct __Native
            {
                    public VideoProcessOutputStream.__Native OutputStream0{};
                    public VideoProcessOutputStream.__Native OutputStream1{};
                    public: RawRect TargetRectangle{};
                }

                void __MarshalFree(__Native& @ref)
            {
                    OutputStream.__MarshalFree(ref @ref.OutputStream0);
                    OutputStream.__MarshalFree(ref @ref.OutputStream1);
                }

                void __MarshalTo(__Native& @ref)
            {
                    OutputStream.__MarshalTo(ref @ref.OutputStream0);
                    OutputStream.__MarshalTo(ref @ref.OutputStream1);
                    @ref.TargetRectangle = TargetRectangle;
                }
            }


        }
    }
}

#endif // VORTICE_VIDEOPROCESSOUTPUTSTREAMARGUMENTS_H