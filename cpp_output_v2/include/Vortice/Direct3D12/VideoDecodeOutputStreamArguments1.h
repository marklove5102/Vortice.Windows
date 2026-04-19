// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_VIDEODECODEOUTPUTSTREAMARGUMENTS1_H
#define VORTICE_DIRECT3D12_VIDEODECODEOUTPUTSTREAMARGUMENTS1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VIDEODECODEOUTPUTSTREAMARGUMENTS1_H
#define VORTICE_VORTICE_VIDEODECODEOUTPUTSTREAMARGUMENTS1_H

#include <cstdint>

namespace Vortice {

class VideoDecodeOutputStreamArguments1
{
public:
    ~VideoDecodeOutputStreamArguments1() = default;

    int32_t OutputSubresource;
    VideoDecodeConversionArguments1 ConversionArguments;
    void* POutputTexture2D;
    int32_t OutputSubresource;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_VIDEODECODEOUTPUTSTREAMARGUMENTS1_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* POutputTexture2D;
    int32_t OutputSubresource;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_VIDEODECODEOUTPUTSTREAMARGUMENTS1_H
