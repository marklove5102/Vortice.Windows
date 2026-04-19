// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11VIDEODECODER_H
#define VORTICE_DIRECT3D11_ID3D11VIDEODECODER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11VIDEODECODER_H
#define VORTICE_VORTICE_ID3D11VIDEODECODER_H

#include <cstdint>

namespace Vortice {

class ID3D11VideoDecoder
{
public:
    ~ID3D11VideoDecoder() = default;

    VideoDecoderDescription get_CreationDescription() const { GetCreationParameters(out VideoDecoderDescription desc, out _);
            return desc; }
    VideoDecoderConfig get_CreationConfig() const { GetCreationParameters(out _, out VideoDecoderConfig config);
            return config; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11VIDEODECODER_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11VIDEODECODER_H
