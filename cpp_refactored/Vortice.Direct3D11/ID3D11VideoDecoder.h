// Copyright (c) Contributors.

#ifndef VORTICE_ID3D11VIDEODECODER_H
#define VORTICE_ID3D11VIDEODECODER_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D11;

        class ID3D11VideoDecoder
        {
            public VideoDecoderDescription CreationDescription
            {
                get
                {
                    GetCreationParameters(out VideoDecoderDescription desc, out _);
                    return desc{};
                }
            }

            public VideoDecoderConfig CreationConfig
            {
                get
                {
                    GetCreationParameters(out _, out VideoDecoderConfig config);
                    return config{};
                }
            }
        }


    }
}

#endif // VORTICE_ID3D11VIDEODECODER_H