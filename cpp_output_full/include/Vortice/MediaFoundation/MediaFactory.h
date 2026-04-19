// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_MEDIAFACTORY_H
#define VORTICE_MEDIAFOUNDATION_MEDIAFACTORY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MEDIAFACTORY_H
#define VORTICE_VORTICE_MEDIAFACTORY_H

#include <cstdint>

namespace Vortice {

class MediaFactory
{
public:
    ~MediaFactory() = default;

    static IMFMediaSession MFCreateMediaSession() { MFCreateMediaSession(configuration, out IMFMediaSession session).CheckError();
        return session; }

    static IMFSourceResolver MFCreateSourceResolver() { MFCreateSourceResolver(out IMFSourceResolver sourceResolver).CheckError();
        return sourceResolver; }

    static IMFMediaSource MFCreateDeviceSource() { MFCreateDeviceSource(attributes, out IMFMediaSource mediaSource).CheckError();
        return mediaSource; }

    static IMFDXGIDeviceManager MFCreateDXGIDeviceManager() { MFCreateDXGIDeviceManager(out uint resetToken, out IMFDXGIDeviceManager deviceManager).CheckError();
        deviceManager.ResetToken = resetToken;
        return deviceManager; }

    static IMFPresentationClock MFCreatePresentationClock() { MFCreatePresentationClock(out IMFPresentationClock presentationClock).CheckError();
        return presentationClock; }

    static IMFTopology MFCreateTopology() { MFCreateTopology(out IMFTopology topology).CheckError();
        return topology; }

    static IMFTopologyNode MFCreateTopologyNode() { MFCreateTopologyNode(nodeType, out IMFTopologyNode node).CheckError();
        return node; }

    static IMFPresentationTimeSource MFCreateSystemTimeSource() { MFCreateSystemTimeSource(out IMFPresentationTimeSource systemTimeSource).CheckError();
        return systemTimeSource; }

    static IMFMediaTypeHandler MFCreateSimpleTypeHandler() { MFCreateSimpleTypeHandler(out IMFMediaTypeHandler handler).CheckError();
        return handler; }

    static IMFMediaSink MFCreateAudioRenderer() { MFCreateAudioRenderer(audioAttributes, out IMFMediaSink sink).CheckError();
        return sink; }

    static IMFActivate MFCreateAudioRendererActivate() { MFCreateAudioRendererActivate(out IMFActivate activate).CheckError();
        return activate; }

    static IMFActivate MFCreateVideoRendererActivate() { MFCreateVideoRendererActivate(hwndVideo, out IMFActivate activate).CheckError();
        return activate; }

    static uint32_t HI32() { return (uint)(unPacked >> 32); }

    static uint32_t LO32() { return (uint)(unPacked); }

    static uint64_t Pack2UInt32AsUInt64() { return ((ulong)(high) << 32) | low; }

    static void Unpack2UInt32AsUInt64() { highValue = HI32(unpacked);
        lowValue = LO32(unpacked); }

    static uint64_t PackSize() { return Pack2UInt32AsUInt64(width, height); }

    static void UnpackSize() { Unpack2UInt32AsUInt64(unpacked, out width, out height); }

    static uint64_t PackRatio() { return Pack2UInt32AsUInt64((uint)(numerator), denominator); }

    static void UnpackRatio() { Unpack2UInt32AsUInt64(unpacked, out numerator, out denominator); }

    static HRESULT MFSetAttribute2UInt32asUInt64() { return attributes.Set(guidKey, Pack2UInt32AsUInt64(unHigh32, unLow32)); }

    static HRESULT MFGetAttributeRatio() { return MFGetAttribute2UInt32asUInt64(attributes, guidKey, out numerator, out denominator); }

    static HRESULT MFGetAttributeSize() { return MFGetAttribute2UInt32asUInt64(attributes, guidKey, out width, out height); }

    static HRESULT MFSetAttributeRatio() { return MFSetAttribute2UInt32asUInt64(attributes, guidKey, numerator, denominator); }

    static HRESULT MFSetAttributeSize() { return MFSetAttribute2UInt32asUInt64(attributes, guidKey, width, height); }

    static bool MFIsVirtualCameraTypeSupported() { RawBool supported;
        Result result = MFIsVirtualCameraTypeSupported_(unchecked((int)type), &supported);
        result.CheckError();
        return supported; }

    static IMFActivate MFCreateMediaExtensionActivate() { MFCreateMediaExtensionActivate(activatableClassId, propertySet, typeid(IMFActivate).GUID, out nint objectHandle).CheckError();
        return new(objectHandle); }

    static IMFActivate MFCreateSampleGrabberSinkActivate() { MFCreateSampleGrabberSinkActivate(mediaType, sampleGrabberSinkCallback, out IMFActivate activate).CheckError();
        return activate; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_MEDIAFACTORY_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_MEDIAFACTORY_H
