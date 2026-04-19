// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11VIDEOCONTEXT_H
#define VORTICE_DIRECT3D11_ID3D11VIDEOCONTEXT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11VIDEOCONTEXT_H
#define VORTICE_VORTICE_ID3D11VIDEOCONTEXT_H

#include <cstdint>

namespace Vortice {

class ID3D11VideoContext
{
public:
    ~ID3D11VideoContext() = default;

    std::span<uint8_t> GetDecoderBuffer() { GetDecoderBuffer(decoder, type, out uint size, out nint dataPtr);

        return new Span<byte>(dataPtr.ToPointer(), (int)size); }

    HRESULT VideoProcessorBlt() { return VideoProcessorBlt(videoProcessor, view, outputFrame, (uint)streams.Length, streams); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11VIDEOCONTEXT_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11VIDEOCONTEXT_H
