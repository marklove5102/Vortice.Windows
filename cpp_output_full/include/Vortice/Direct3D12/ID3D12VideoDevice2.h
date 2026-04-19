// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12VIDEODEVICE2_H
#define VORTICE_DIRECT3D12_ID3D12VIDEODEVICE2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ADDS_H
#define VORTICE_VORTICE_ADDS_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) adds
{
public:
    virtual ~adds() = default;

    virtual ID3D12VideoDecoder1 CreateVideoDecoder1(VideoDecoderDescription description, ID3D12ProtectedResourceSession protectedResourceSession) = 0;
    virtual ID3D12VideoDecoderHeap1 CreateVideoDecoderHeap1(VideoDecoderHeapDescription description, ID3D12ProtectedResourceSession protectedResourceSession) = 0;
    virtual ID3D12VideoExtensionCommand CreateVideoExtensionCommand(VideoExtensionCommandDescription description, void* creationParameters, uintptr_t creationParametersDataSizeInBytes, ID3D12ProtectedResourceSession protectedResourceSession) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ADDS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12VIDEODEVICE2_H
#define VORTICE_VORTICE_ID3D12VIDEODEVICE2_H

#include <cstdint>

namespace Vortice {

class ID3D12VideoDevice2
{
public:
    ~ID3D12VideoDevice2() = default;

    ID3D12VideoDecoder1 CreateVideoDecoder1() { CreateVideoDecoder1(ref description, protectedResourceSession, typeid(ID3D12VideoDecoder1).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12VideoDecoder1(nativePtr); }

    ID3D12VideoDecoderHeap1 CreateVideoDecoderHeap1() { CreateVideoDecoderHeap1(ref description, protectedResourceSession, typeid(ID3D12VideoDecoderHeap1).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12VideoDecoderHeap1(nativePtr); }

    ID3D12VideoExtensionCommand CreateVideoExtensionCommand() { CreateVideoExtensionCommand(ref description, creationParameters, creationParametersDataSizeInBytes, protectedResourceSession, typeid(ID3D12VideoExtensionCommand).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12VideoExtensionCommand(nativePtr); }

    ID3D12VideoProcessor CreateVideoProcessor1() { CreateVideoProcessor1(
            nodeMask,
            ref outputStreamDescription,
            inputStreamDescriptionsCount,
            inputStreamDescriptions,
            protectedResourceSession,
            typeid(ID3D12VideoProcessor).GUID,
            out IntPtr nativePtr).CheckError();

        return new ID3D12VideoProcessor(nativePtr); }

    ID3D12VideoProcessor CreateVideoProcessor1() { CreateVideoProcessor1(
            nodeMask,
            ref outputStreamDescription,
            (uint)inputStreamDescriptions.Length,
            inputStreamDescriptions,
            protectedResourceSession,
            typeid(ID3D12VideoProcessor).GUID,
            out IntPtr nativePtr).CheckError();
        return new ID3D12VideoProcessor(nativePtr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12VIDEODEVICE2_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12VIDEODEVICE2_H
