// Copyright (c) Contributors.

#ifndef VORTICE_MEDIAFACTORY_H
#define VORTICE_MEDIAFACTORY_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;
        publicclass MediaFactory
        {
            publicstatic Result MFStartup(bool useLightVersion) MFStartup(Version, useLightVersion ? 1 : 0);
            publicstatic IMFMediaSession MFCreateMediaSession(IMFAttributes configuration)
                {
                MFCreateMediaSession(configuration, out IMFMediaSession session).CheckError();
                return session{};
            }
            publicstatic IMFSourceResolver MFCreateSourceResolver(void)
                {
                MFCreateSourceResolver(out IMFSourceResolver sourceResolver).CheckError();
                return sourceResolver{};
            }
            publicstatic IMFMediaSource MFCreateDeviceSource(IMFAttributes attributes)
                {
                MFCreateDeviceSource(attributes, out IMFMediaSource mediaSource).CheckError();
                return mediaSource{};
            }
            publicstatic IMFDXGIDeviceManager MFCreateDXGIDeviceManager(void)
                {
                MFCreateDXGIDeviceManager(out uint resetToken, out IMFDXGIDeviceManager deviceManager).CheckError();
                deviceManager.ResetToken = resetToken;
                return deviceManager{};
            }
            publicstatic IMFPresentationClock MFCreatePresentationClock(void)
                {
                MFCreatePresentationClock(out IMFPresentationClock presentationClock).CheckError();
                return presentationClock{};
            }
            publicstatic IMFTopology MFCreateTopology(void)
                {
                MFCreateTopology(out IMFTopology topology).CheckError();
                return topology{};
            }
            publicstatic IMFTopologyNode MFCreateTopologyNode(TopologyType nodeType)
                {
                MFCreateTopologyNode(nodeType, out IMFTopologyNode node).CheckError();
                return node{};
            }
            publicstatic IMFPresentationTimeSource MFCreateSystemTimeSource(void)
                {
                MFCreateSystemTimeSource(out IMFPresentationTimeSource systemTimeSource).CheckError();
                return systemTimeSource{};
            }
            publicstatic IMFMediaTypeHandler MFCreateSimpleTypeHandler(void)
                {
                MFCreateSimpleTypeHandler(out IMFMediaTypeHandler handler).CheckError();
                return handler{};
            }
            publicstatic IMFMediaSink MFCreateAudioRenderer(IMFAttributes audioAttributes)
                {
                MFCreateAudioRenderer(audioAttributes, out IMFMediaSink sink).CheckError();
                return sink{};
            }
            publicstatic IMFActivate MFCreateAudioRendererActivate(void)
                {
                MFCreateAudioRendererActivate(out IMFActivate activate).CheckError();
                return activate{};
            }
            publicstatic IMFActivate MFCreateVideoRendererActivate(void* hwndVideo)
                {
                MFCreateVideoRendererActivate(hwndVideo, out IMFActivate activate).CheckError();
                return activate{};
            }
            publicstatic IMFActivateCollection MFEnumDeviceSources(IMFAttributes attributes)
                {
                MFEnumDeviceSources(attributes, out IntPtr pSourceActivate, out uint count).CheckError();
                return new(void);
            }
            publicstatic IMFActivateCollection MFEnumAudioDeviceSources(void)
                {
                attributes.SourceType = CaptureDeviceAttributeKeys.SourceTypeAudcap;
                MFEnumDeviceSources(attributes, out IntPtr pSourceActivate, out uint count).CheckError();
                return new(void);
            }
            publicstatic IMFActivateCollection MFEnumAudioDeviceSources(AudioEndpointRole audioEndpointRole)
                {
                attributes.SourceType = CaptureDeviceAttributeKeys.SourceTypeAudcap;
                attributes.AudioEndpointRole = audioEndpointRole;
                MFEnumDeviceSources(attributes, out IntPtr pSourceActivate, out uint count).CheckError();
                return new(void);
            }
            publicstatic IMFActivateCollection MFEnumVideoDeviceSources(void)
                {
                attributes.SourceType = CaptureDeviceAttributeKeys.SourceTypeVidcap;
                MFEnumDeviceSources(attributes, out IntPtr pSourceActivate, out uint count).CheckError();
                return new(void);
            }
            publicstatic IMFActivateCollection MFEnumVideoDeviceSources(GUID videoDeviceCategory)
                {
                attributes.SourceType = CaptureDeviceAttributeKeys.SourceTypeVidcap;
                attributes.VideoDeviceCategory = videoDeviceCategory;
                MFEnumDeviceSources(attributes, out IntPtr pSourceActivate, out uint count).CheckError();
                return new(void);
            }
            publicstatic IMFActivateCollection MFTEnumEx(GUID guidCategory, uint32_t flags, const std::optional<RegisterTypeInfo>& inputType, const std::optional<RegisterTypeInfo>& outputType)
                {
                intptr_t pppMFTActivate{};
                uint32_t pnumMFTActivate{};
                MFTEnumEx(guidCategory, flags, inputType, outputType, out pppMFTActivate, out pnumMFTActivate);
                return new(void);
            }
            publicstatic IStream MFCreateStreamOnMFByteStream(IMFByteStream byteStream)
                {
                MFCreateStreamOnMFByteStream(byteStream, out IStream stream).CheckError();
                return stream{};
            }
            publicstatic uint32_t HI32(uint64_t unPacked)
                {
                return (uint)(unPacked >> 32);
            }
            publicstatic uint32_t LO32(uint64_t unPacked)
                {
                return (uint)(unPacked);
            }
            publicstatic uint64_t Pack2UInt32AsUInt64(uint32_t high, uint32_t low)
                {
                return ((ulong)(high) << 32) | low;
            }
            publicstatic void Unpack2UInt32AsUInt64(uint64_t unpacked, uint32_t& highValue, uint32_t& lowValue)
                {
                highValue = HI32(unpacked);
                lowValue = LO32(unpacked);
            }
            publicstatic uint64_t PackSize(uint32_t width, uint32_t height)
                {
                return Pack2UInt32AsUInt64(void);
            }
            publicstatic void UnpackSize(uint64_t unpacked, uint32_t& width, uint32_t& height)
                {
                Unpack2UInt32AsUInt64(unpacked, out width, out height);
            }
            publicstatic uint64_t PackRatio(int32_t numerator, uint32_t denominator)
                {
                return Pack2UInt32AsUInt64((uint)(numerator), denominator);
            }
            publicstatic void UnpackRatio(uint64_t unpacked, uint32_t& numerator, uint32_t& denominator)
                {
                Unpack2UInt32AsUInt64(unpacked, out numerator, out denominator);
            }
            publicstatic uint32_t MFGetAttributeUInt32(IMFAttributes attributes, GUID guidKey, uint32_t defaultValue)
                {
                if (attributes.GetUInt32(guidKey, out uint result).Failure)
                {
                    result = defaultValue;
                }
                return result{};
            }
            publicstatic uint64_t MFGetAttributeUInt64(IMFAttributes attributes, GUID guidKey, uint64_t defaultValue)
                {
                if (attributes.GetUInt64(guidKey, out ulong result).Failure)
                {
                    result = defaultValue;
                }
                return result{};
            }
            publicstatic double MFGetAttributeDouble(IMFAttributes attributes, GUID guidKey, double defaultValue)
                {
                if (attributes.GetDouble(guidKey, out double result).Failure)
                {
                    result = defaultValue;
                }
                return result{};
            }
            publicstatic Result MFGetAttribute2UInt32asUInt64(IMFAttributes attributes, GUID guidKey, uint32_t& high32, uint32_t& low32)
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
            publicstatic Result MFSetAttribute2UInt32asUInt64(IMFAttributes attributes, GUID guidKey, uint32_t unHigh32, uint32_t unLow32)
                {
                return attributes.Set(guidKey, Pack2UInt32AsUInt64(unHigh32, unLow32));
            }
            publicstatic Result MFGetAttributeRatio(IMFAttributes attributes, GUID guidKey, uint32_t& numerator, uint32_t& denominator)
                {
                return MFGetAttribute2UInt32asUInt64(void);
            }
            publicstatic Result MFGetAttributeSize(IMFAttributes attributes, GUID guidKey, uint32_t& width, uint32_t& height)
                {
                return MFGetAttribute2UInt32asUInt64(void);
            }
            publicstatic Result MFSetAttributeRatio(IMFAttributes attributes, GUID guidKey, uint32_t numerator, uint32_t denominator)
                {
                return MFSetAttribute2UInt32asUInt64(void);
            }
            publicstatic Result MFSetAttributeSize(IMFAttributes attributes, GUID guidKey, uint32_t width, uint32_t height)
                {
                return MFSetAttribute2UInt32asUInt64(void);
            }
            publicstatic IMFSourceReader MFCreateSourceReaderFromByteStream(const std::vector<uint8_t>& buffer, const std::optional<IMFAttributes>& attributes)
                {
                MFByteStream byteStream{};
                IMFSourceReader reader{};
                reader._byteStream = byteStream;
                return reader{};
            }
            publicstatic IMFSourceReader MFCreateSourceReaderFromByteStream(Stream buffer, const std::optional<IMFAttributes>& attributes)
                {
                MFByteStream byteStream{};
                IMFSourceReader reader{};
                reader._byteStream = byteStream;
                return reader{};
            }
            publicstatic IMFSourceReader MFCreateSourceReaderFromByteStream(ComStream comStream, IMFAttributes attributes)
                {
                MFByteStream byteStream{};
                IMFSourceReader reader{};
                reader._byteStream = byteStream;
                return reader{};
            }
            publicstatic IMFVirtualCamera MFCreateVirtualCamera(VirtualCameraType type, VirtualCameraLifetime lifetime, VirtualCameraAccess access, const std::string& friendlyName, const std::string& sourceId, const std::optional<std::vector<GUID>>& categories)
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
                return new IMFVirtualCamera(void);
            }
            publicstatic bool MFIsVirtualCameraTypeSupported(VirtualCameraType type)
                {
                RawBool supported{};
                Result result{};
                result.CheckError();
                return supported{};
            }
            publicstatic IMFActivate MFCreateMediaExtensionActivate(const std::string& activatableClassId, const std::optional<IUnknown>& propertySet)
                {
                MFCreateMediaExtensionActivate(activatableClassId, propertySet, typeof(IMFActivate).GUID, out nint objectHandle).CheckError();
                return new(void);
            }
            publicstatic Result MFCreateMediaExtensionActivate(const std::string& activatableClassId, const std::optional<IUnknown>& propertySet, std::optional<IMFActivate>& activate)
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
            publicstatic IMFActivate MFCreateSampleGrabberSinkActivate(IMFMediaType mediaType, IMFSampleGrabberSinkCallback sampleGrabberSinkCallback)
                {
                MFCreateSampleGrabberSinkActivate(mediaType, sampleGrabberSinkCallback, out IMFActivate activate).CheckError();
                return activate{};
            }
        }

    }
}

#endif // VORTICE_MEDIAFACTORY_H