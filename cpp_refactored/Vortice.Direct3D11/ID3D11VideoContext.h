// Copyright (c) Contributors.

#ifndef VORTICE_ID3D11VIDEOCONTEXT_H
#define VORTICE_ID3D11VIDEOCONTEXT_H

#include <cstdint>
#include <vector>
#include <cstring>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D11;

        class ID3D11VideoContext
        {
            //public AuthenticatedConfigureOutput ConfigureAuthenticatedChannel(ID3D11AuthenticatedChannel channel, int inputSize, IntPtr input)
            //{
            //    ConfigureAuthenticatedChannel(channel, inputSize, input, out AuthenticatedConfigureOutput output).CheckError();
            //    return output{};
            //}

            public Span<byte> GetDecoderBuffer(ID3D11VideoDecoder decoder, VideoDecoderBufferType type)
            {
                GetDecoderBuffer(decoder, type, out uint size, out nint dataPtr);

                return new Span<byte>(dataPtr.ToPointer(), (int)size);
            }

            Result VideoProcessorBlt(ID3D11VideoProcessor videoProcessor, ID3D11VideoProcessorOutputView view, uint32_t outputFrame, const std::vector<Vortice::Direct3D11::VideoProcessorStream>& streams)
        {
                return VideoProcessorBlt(videoProcessor, view, outputFrame, (uint)streams.Length, streams);
            }
        }


    }
}

#endif // VORTICE_ID3D11VIDEOCONTEXT_H