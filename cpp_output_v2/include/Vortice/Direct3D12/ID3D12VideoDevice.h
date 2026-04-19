// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12VIDEODEVICE_H
#define VORTICE_DIRECT3D12_ID3D12VIDEODEVICE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12VIDEODEVICE_H
#define VORTICE_VORTICE_ID3D12VIDEODEVICE_H

#include <cstdint>

namespace Vortice {

class ID3D12VideoDevice
{
public:
    ~ID3D12VideoDevice() = default;

    ID3D12VideoDecoder CreateVideoDecoder() { CreateVideoDecoder(ref description, typeid(ID3D12VideoDecoder).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12VideoDecoder(nativePtr); }

    ID3D12VideoDecoderHeap CreateVideoDecoderHeap() { CreateVideoDecoderHeap(ref description, typeid(ID3D12VideoDecoderHeap).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12VideoDecoderHeap(nativePtr); }

    ID3D12VideoProcessor CreateVideoProcessor() { CreateVideoProcessor(nodeMask, ref outputStreamDescription, inputStreamDescriptionsCount, inputStreamDescriptions, typeid(ID3D12VideoProcessor).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12VideoProcessor(nativePtr); }

    ID3D12VideoProcessor CreateVideoProcessor() { CreateVideoProcessor(nodeMask, ref outputStreamDescription, (uint)inputStreamDescriptions.Length, inputStreamDescriptions, typeid(ID3D12VideoProcessor).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12VideoProcessor(nativePtr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12VIDEODEVICE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12VIDEODEVICE_H
