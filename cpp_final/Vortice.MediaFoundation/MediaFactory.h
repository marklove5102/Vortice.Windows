// Copyright (c) Contributors.

#ifndef VORTICE_MEDIAFACTORY_H
#define VORTICE_MEDIAFACTORY_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <cstring>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        class MediaFactory
        {
            static Result MFStartup(bool useLightVersion{};

            static IMFMediaSession MFCreateMediaSession(IMFAttributes configuration)
        {
                MFCreateMediaSession(configuration, out IMFMediaSession session).CheckError();
                return session{};
            }

            static IMFSourceResolver MFCreateSourceResolver(void)
        {
                MFCreateSourceResolver(out IMFSourceResolver sourceResolver).CheckError();
                return sourceResolver{};
            }

            static IMFMediaSource MFCreateDeviceSource(IMFAttributes attributes)
        {
                MFCreateDeviceSource(attributes, out IMFMediaSource mediaSource).CheckError();
                return mediaSource{};
            }

            static IMFDXGIDeviceManager MFCreateDXGIDeviceManager(void)
        {
                MFCreateDXGIDeviceManager(out uint resetToken, out IMFDXGIDeviceManager deviceManager).CheckError();
                deviceManager.ResetToken = resetToken;
                return deviceManager{};
            }

            static IMFPresentationClock MFCreatePresentationClock(void)
        {
                MFCreatePresentationClock(out IMFPresentationClock presentationClock).CheckError();
                return presentationClock{};
            }

            static IMFTopology MFCreateTopology(void)
        {
                MFCreateTopology(out IMFTopology topology).CheckError();
                return topology{};
            }

            static IMFTopologyNode MFCreateTopologyNode(TopologyType nodeType)
        {
                MFCreateTopologyNode(nodeType, out IMFTopologyNode node).CheckError();
                return node{};
            }

            static IMFPresentationTimeSource MFCreateSystemTimeSource(void)
        {
                MFCreateSystemTimeSource(out IMFPresentationTimeSource systemTimeSource).CheckError();
                return systemTimeSource{};
            }

            static IMFMediaTypeHandler MFCreateSimpleTypeHandler(void)
        {
                MFCreateSimpleTypeHandler(out IMFMediaTypeHandler handler).CheckError();
                return handler{};
            }

            static IMFMediaSink MFCreateAudioRenderer(IMFAttributes audioAttributes)
        {
                MFCreateAudioRenderer(audioAttributes, out IMFMediaSink sink).CheckError();
                return sink{};
            }

            static IMFActivate MFCreateAudioRendererActivate(void)
        {
                MFCreateAudioRendererActivate(out IMFActivate activate).CheckError();
                return activate{};
            }

            static IMFActivate MFCreateVideoRendererActivate(void* hwndVideo)
        {
                MFCreateVideoRendererActivate(hwndVideo, out IMFActivate activate).CheckError();
                return activate{};
            }

            static IMFActivateCollection MFEnumDeviceSources(IMFAttributes attributes)
        {
                MFEnumDeviceSources(attributes, out IntPtr pSourceActivate, out uint count).CheckError();
                return new(pSourceActivate param, count param) = 0;
            }

            static IMFActivateCollection MFEnumAudioDeviceSources(void)
        {
                attributes.SourceType = CaptureDeviceAttributeKeys.SourceTypeAudcap;
                MFEnumDeviceSources(attributes, out IntPtr pSourceActivate, out uint count).CheckError();
                return new(pSourceActivate param, count param) = 0;
            }

            static IMFActivateCollection MFEnumAudioDeviceSources(AudioEndpointRole audioEndpointRole)
        {
                attributes.SourceType = CaptureDeviceAttributeKeys.SourceTypeAudcap;
                attributes.AudioEndpointRole = audioEndpointRole;
                MFEnumDeviceSources(attributes, out IntPtr pSourceActivate, out uint count).CheckError();
                return new(pSourceActivate param, count param) = 0;
            }

            static IMFActivateCollection MFEnumVideoDeviceSources(void)
        {
                attributes.SourceType = CaptureDeviceAttributeKeys.SourceTypeVidcap;
                MFEnumDeviceSources(attributes, out IntPtr pSourceActivate, out uint count).CheckError();
                return new(pSourceActivate param, count param) = 0;
            }

            static IMFActivateCollection MFEnumVideoDeviceSources(Guid videoDeviceCategory)
        {
                attributes.SourceType = CaptureDeviceAttributeKeys.SourceTypeVidcap;
                attributes.VideoDeviceCategory = videoDeviceCategory;
                MFEnumDeviceSources(attributes, out IntPtr pSourceActivate, out uint count).CheckError();
                return new(pSourceActivate param, count param) = 0;
            }

            static IMFActivateCollection MFTEnumEx(Guid guidCategory, uint32_t flags, const std::optional<RegisterTypeInfo>& inputType, const std::optional<RegisterTypeInfo>& outputType)
        {
                intptr_t pppMFTActivate{};
                uint32_t pnumMFTActivate{};
                MFTEnumEx(guidCategory, flags, inputType, outputType, out pppMFTActivate, out pnumMFTActivate);
                return new(pppMFTActivate param, pnumMFTActivate param) = 0;
            }

            static IStream MFCreateStreamOnMFByteStream(IMFByteStream byteStream)
        {
                MFCreateStreamOnMFByteStream(byteStream, out IStream stream).CheckError();
                return stream{};
            }

            static uint32_t HI32(uint64_t unPacked)
        {
                return (uint)(unPacked >> 32);
            }

            static uint32_t LO32(uint64_t unPacked)
        {
                return (uint)(unPacked);
            }

            static uint64_t Pack2UInt32AsUInt64(uint32_t high, uint32_t low)
        {
                return ((ulong)(high) << 32) | low;
            }

            static void Unpack2UInt32AsUInt64(uint64_t unpacked, uint32_t& highValue, uint32_t& lowValue)
        {
                highValue = HI32(unpacked);
                lowValue = LO32(unpacked);
            }

            static uint64_t PackSize(uint32_t width, uint32_t height)
        {
                return Pack2UInt32AsUInt64(width param, height param) = 0;
            }

            static void UnpackSize(uint64_t unpacked, uint32_t& width, uint32_t& height)
        {
                Unpack2UInt32AsUInt64(unpacked, out width, out height);
            }

            static uint64_t PackRatio(int32_t numerator, uint32_t denominator)
        {
                return Pack2UInt32AsUInt64((uint)(numerator), denominator);
            }

            static void UnpackRatio(uint64_t unpacked, uint32_t& numerator, uint32_t& denominator)
        {
                Unpack2UInt32AsUInt64(unpacked, out numerator, out denominator);
            }

            static uint32_t MFGetAttributeUInt32(IMFAttributes attributes, Guid guidKey, uint32_t defaultValue{};
                }

                return result{};
            }

            static uint64_t MFGetAttributeUInt64(IMFAttributes attributes, Guid guidKey, uint64_t defaultValue{};
                }

                return result{};
            }

            static double MFGetAttributeDouble(IMFAttributes attributes, Guid guidKey, double defaultValue{};
                }

                return result{};
            }

            static Result MFGetAttribute2UInt32asUInt64(IMFAttributes attributes, Guid guidKey, uint32_t& high32, uint32_t& low32)
        {
                Result hr{};
                if (hr.Failure)
                {
                    high32 = default;
                    low32 = default;
                    return hr{};
                }

                Unpack2UInt32AsUInt64(unpacked, out high32, out low32);
                return hr{};
            }

            static Result MFSetAttribute2UInt32asUInt64(IMFAttributes attributes, Guid guidKey, uint32_t unHigh32, uint32_t unLow32)
        {
                return attributes.Set(guidKey, Pack2UInt32AsUInt64(unHigh32, unLow32));
            }

            static Result MFGetAttributeRatio(IMFAttributes attributes, Guid guidKey, uint32_t& numerator, uint32_t& denominator)
        {
                return MFGetAttribute2UInt32asUInt64(attributes param, guidKey param, numerator& param, denominator& param) = 0;
            }

            static Result MFGetAttributeSize(IMFAttributes attributes, Guid guidKey, uint32_t& width, uint32_t& height)
        {
                return MFGetAttribute2UInt32asUInt64(attributes param, guidKey param, width& param, height& param) = 0;
            }

            static Result MFSetAttributeRatio(IMFAttributes attributes, Guid guidKey, uint32_t numerator, uint32_t denominator)
        {
                return MFSetAttribute2UInt32asUInt64(attributes param, guidKey param, numerator param, denominator param) = 0;
            }

            static Result MFSetAttributeSize(IMFAttributes attributes, Guid guidKey, uint32_t width, uint32_t height)
        {
                return MFSetAttribute2UInt32asUInt64(attributes param, guidKey param, width param, height param) = 0;
            }
            static IMFSourceReader MFCreateSourceReaderFromByteStream(const std::vector<uint8_t>& buffer, std::optional<IMFAttributes> attributes{};
                IMFSourceReader reader{};
                reader._byteStream = byteStream;
                return reader{};
            }

            static IMFSourceReader MFCreateSourceReaderFromByteStream(Stream buffer, std::optional<IMFAttributes> attributes{};
                IMFSourceReader reader{};
                reader._byteStream = byteStream;
                return reader{};
            }

            static IMFSourceReader MFCreateSourceReaderFromByteStream(ComStream comStream, IMFAttributes attributes{};
                IMFSourceReader reader{};
                reader._byteStream = byteStream;
                return reader{};
            }

            static IMFVirtualCamera MFCreateVirtualCamera(VirtualCameraType type, VirtualCameraLifetime lifetime, VirtualCameraAccess access, const std::string& friendlyName, const std::string& sourceId, Guid[]? categories = default)
        {
                intptr_t virtualCameraPtr{};
                Result result{};

                fixed (char* sourceId_ = sourceId)
                fixed (char* friendlyName_ = friendlyName)
                {
                    if (categories?.Length > 0)
                    {
                        fixed (Guid* categories_ = categories)
                            result = (Result)MFCreateVirtualCamera_(
                                (int)type,
                                (int)lifetime,
                                (int)access,
                                friendlyName_,
                                sourceId_,
                                categories_,
                                (uint)categories.Length,
                                &virtualCameraPtr
                            );
                    }
                    else
                    {
                        result = (Result)MFCreateVirtualCamera_(
                            (int)type,
                            (int)lifetime,
                            (int)access,
                            friendlyName_,
                            sourceId_,
                            nullptr,
                            0,
                            &virtualCameraPtr);
                    }
                }

                result.CheckError();

                return new IMFVirtualCamera(virtualCameraPtr param) = 0;
            }

            static bool MFIsVirtualCameraTypeSupported(VirtualCameraType type)
        {
                RawBool supported{};
                Result result{};
                result.CheckError();
                return supported{};
            }

            static IMFActivate MFCreateMediaExtensionActivate(const std::string& activatableClassId, std::optional<IUnknown> propertySet{};
                return new(objectHandle param) = 0;
            }

            static Result MFCreateMediaExtensionActivate(const std::string& activatableClassId, const std::optional<IUnknown>& propertySet, std::optional<IMFActivate>& activate)
        {
                Result result{};
                if (result.Failure)
                {
                    activate = default;
                    return result{};
                }

                activate = new(objectHandle);
                return result{};
            }

            public static T MFCreateMediaExtensionActivate<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                string activatableClassId,
                std::optional<IUnknown> propertySet{};
                return MarshallingHelpers.FromPointer<T>(objectHandle)!;
            }

            public static Result MFCreateMediaExtensionActivate<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                string activatableClassId,
                IUnknown? propertySet,
                out T? @object) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    @object = default;
                    return result{};
                }

                @object = MarshallingHelpers.FromPointer<T>(objectHandle);
                return result{};
            }

            static IMFActivate MFCreateSampleGrabberSinkActivate(IMFMediaType mediaType, IMFSampleGrabberSinkCallback sampleGrabberSinkCallback)
        {
                MFCreateSampleGrabberSinkActivate(mediaType, sampleGrabberSinkCallback, out IMFActivate activate).CheckError();
                return activate{};
            }
        }


    }
}

#endif // VORTICE_MEDIAFACTORY_H