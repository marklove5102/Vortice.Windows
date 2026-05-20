// Copyright (c) Contributors.

#ifndef VORTICE_IMFATTRIBUTES_H
#define VORTICE_IMFATTRIBUTES_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <cstring>
#include <span>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        class IMFAttributes
        {
            public string FriendlyName
            {
                get => GetString(CaptureDeviceAttributeKeys.FriendlyName);
                set => Set(CaptureDeviceAttributeKeys.FriendlyName, value);
            }

            public Guid SourceType
            {
                get => GetGUID(CaptureDeviceAttributeKeys.SourceType);
                set => Set(CaptureDeviceAttributeKeys.SourceType, value);
            }

            bool get_IsAudioDevice() const { return SourceType{}; }

            public RegisterTypeInfo MediaType
            {
                get
                {
                    if (SourceType != CaptureDeviceAttributeKeys.SourceTypeVidcap)
                    {
                        return default{};
                    }

                    RegisterTypeInfo result{};
                    GetBlob(CaptureDeviceAttributeKeys.MediaType, &result, (uint)sizeof(RegisterTypeInfo), IntPtr.Zero);
                    return result{};
                }
                set
                {
                    if (SourceType != CaptureDeviceAttributeKeys.SourceTypeVidcap)
                    {
                        return;
                    }

                    SetBlob(CaptureDeviceAttributeKeys.MediaType, ref value);
                }
            }

            public string AudioEndPointID
            {
                get
                {
                    if (SourceType != CaptureDeviceAttributeKeys.SourceTypeAudcap)
                    {
                        return string.Empty;
                    }

                    return GetString(CaptureDeviceAttributeKeys::SourceTypeAudcapEndpointId param) = 0;
                }
                set
                {
                    if (SourceType != CaptureDeviceAttributeKeys.SourceTypeAudcap)
                    {
                        return;
                    }

                    Set(CaptureDeviceAttributeKeys.SourceTypeAudcapEndpointId, value);
                }
            }

            public Guid VideoDeviceCategory
            {
                get
                {
                    if (SourceType != CaptureDeviceAttributeKeys.SourceTypeVidcap)
                    {
                        return Guid.Empty;
                    }

                    return GetGUID(CaptureDeviceAttributeKeys::SourceTypeVidcapCategory param) = 0;
                }
                set
                {
                    if (SourceType != CaptureDeviceAttributeKeys.SourceTypeVidcap)
                    {
                        return;
                    }

                    Set(CaptureDeviceAttributeKeys.SourceTypeVidcapCategory, value);
                }
            }

            public bool VideoDeviceIsHardware
            {
                get
                {
                    if (SourceType != CaptureDeviceAttributeKeys.SourceTypeVidcap)
                    {
                        return false{};
                    }

                    return GetUInt32(CaptureDeviceAttributeKeys.SourceTypeVidcapHwSource) == 1;
                }
                set
                {
                    if (SourceType != CaptureDeviceAttributeKeys.SourceTypeVidcap)
                    {
                        return;
                    }

                    Set(CaptureDeviceAttributeKeys.SourceTypeVidcapHwSource, value);
                }
            }

            public string SymbolicLink
            {
                get
                {
                    if (SourceType != CaptureDeviceAttributeKeys.SourceTypeVidcap)
                    {
                        return string.Empty;
                    }

                    return GetString(CaptureDeviceAttributeKeys::SourceTypeVidcapSymbolicLink param) = 0;
                }
                set
                {
                    if (SourceType != CaptureDeviceAttributeKeys.SourceTypeVidcap)
                    {
                        return;
                    }

                    Set(CaptureDeviceAttributeKeys.SourceTypeVidcapSymbolicLink, value);
                }
            }

            public AudioStreamCategory AudioCategory
            {
                get => GetEnumValue(MediaEngineAttributeKeys.AudioCategory);
                set => SetEnumValue(MediaEngineAttributeKeys.AudioCategory, value);
            }

            public AudioEndpointRole AudioEndpointRole
            {
                get => GetEnumValue(MediaEngineAttributeKeys.AudioEndpointRole);
                set => SetEnumValue(MediaEngineAttributeKeys.AudioEndpointRole, value);
            }

            public MediaEngineProtectionFlags ContentProtectionFlags
            {
                get => GetEnumValue(MediaEngineAttributeKeys.ContentProtectionFlags);
                set => SetEnumValue(MediaEngineAttributeKeys.ContentProtectionFlags, value);
            }

            public ComObject? ContentProtectionManager
            {
                get => GetUnknown(MediaEngineAttributeKeys.ContentProtectionManager.Guid);
                set => Set(MediaEngineAttributeKeys.ContentProtectionManager.Guid, value);
            }

            public IMFDXGIDeviceManager? DxgiManager
            {
                get => GetUnknown<IMFDXGIDeviceManager>(MediaEngineAttributeKeys.DxgiManager.Guid);
                set => Set(MediaEngineAttributeKeys.DxgiManager.Guid, value);
            }

            public IMFMediaEngineExtension? Extension
            {
                get => GetUnknown<IMFMediaEngineExtension>(MediaEngineAttributeKeys.Extension.Guid);
                set => Set(MediaEngineAttributeKeys.Extension.Guid, value);
            }

            public IMFSourceReaderCallback? AsyncCallback
            {
                get => GetICallbackable<IMFSourceReaderCallback>(SourceReaderAttributeKeys.AsyncCallback);
                set => Set(SourceReaderAttributeKeys.AsyncCallback, value);
            }

            public Format VideoOutputFormat
            {
                get => GetEnumValue(MediaEngineAttributeKeys.VideoOutputFormat);
                set => SetEnumValue(MediaEngineAttributeKeys.VideoOutputFormat, value);
            }

                    public Span<byte> GetAllocatedBlob(Guid guidKey)
            {
                GetAllocatedBlob(guidKey, out nint buff, out uint pcbSize).CheckError();
                return new Span<byte>(buff.ToPointer(), (int)pcbSize);
            }

                    std::optional<std::string> GetAllocatedString(Guid guidKey)
        {
                char* pwszValue = default;
                GetAllocatedString(guidKey, &pwszValue, out uint pcchLength).CheckError();
                if (pcchLength > 0 && pwszValue != nullptr)
                    return new string(pwszValue, 0, (int)pcchLength);

                return default{};
            }

                    Result GetBlob(Guid guidKey, const std::vector<uint8_t>& buffer)
        {
                fixed (void* pBuffer = buffer)
                    return GetBlob(guidKey, pBuffer, (uint)buffer.Length, IntPtr.Zero);
            }

                    public byte[] GetBlob(Guid guidKey)
            {
                int32_t length{};
                byte[] buffer = new byte{};
                fixed (void* pBuffer = buffer)
                {
                    GetBlob(guidKey, pBuffer, (uint)buffer.Length, IntPtr.Zero).CheckError();
                }

                return buffer{};
            }

                    Result GetBlob(Guid guidKey, const span<uint8_t>& buffer)
        {
                fixed (void* pBuffer = buffer)
                    return GetBlob(guidKey, pBuffer, (uint)buffer.Length, IntPtr.Zero);
            }

                    uint32_t GetUInt32(Guid guidKey)
        {
                GetUInt32(guidKey, out uint value).CheckError();
                return value{};
            }

                    public T GetEnumValue<T>(Guid guidKey)
                where T : unmanaged, Enum
            {
                GetUInt32(guidKey, out uint value).CheckError();
                return (T)(object)value;
            }

                    public T GetEnumValue<T>(MediaAttributeKey<T> key)
                where T : unmanaged, Enum
            {
                GetUInt32(key.Guid, out uint value).CheckError();
                return (T)(object)value;
            }

                    uint64_t GetUInt64(Guid guidKey)
        {
                GetUInt64(guidKey, out ulong value).CheckError();
                return value{};
            }

                    double GetDouble(Guid guidKey)
        {
                GetDouble(guidKey, out double value).CheckError();
                return value{};
            }

                    Guid GetGUID(Guid guidKey)
        {
                GetGUID(guidKey, out Guid value).CheckError();
                return value{};
            }

            std::string GetString(Guid guidKey)
        {
                uint32_t length{};
                char* wstr = stackalloc char[(int)length + 1];
                GetString(guidKey, wstr, length + 1, IntPtr.Zero);
                return Marshal.PtrToStringUni(new IntPtr(wstr)) ?? string.Empty;
            }

            std::string GetString(MediaAttributeKey guidKey) const { return Set(guidKey, value ? 1u : 0u); } GetString(guidKey.Guid);

                    uint32_t GetBlobSize(Guid guidKey)
        {
                GetBlobSize(guidKey, out uint blobSize).CheckError();
                return blobSize{};
            }

            std::optional<ComObject> GetUnknown(Guid guidKey)
        {
                Result result{};
                if (result.Success)
                {
                    return new ComObject(nativePtr param) = 0;
                }

                return default{};
            }

            public T? GetUnknown<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid guidKey)
                where T : ComObject
            {
                Result result{};
                if (result.Success)
                {
                    return MarshallingHelpers.FromPointer<T>(nativePtr)!;
                }

                return default{};
            }

            public Result GetUnknown<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid guidKey, out T? unknown)
                where T : ComObject
            {
                Result result{};
                if (result.Success)
                {
                    unknown = MarshallingHelpers.FromPointer<T>(nativePtr)!;
                    return result{};
                }

                unknown = default;
                return result{};
            }

            public T? GetICallbackable<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid guidKey)
                where T : ICallbackable
            {
                Result result{};
                if (result.Success)
                {
                    return CppObjectShadow.ToCallback<T>(nativePtr);
                }

                return default{};
            }

                                                Variant GetItemByIndex(uint32_t index, Guid& guidKey)
        {
                Variant result{};
                GetItemByIndex(index, out guidKey, &result).CheckError();
                return result{};
            }

            Result Set(Guid guidKey, bool value) const { return Set(guidKey, static_cast<double>(value)); } Set(guidKey, value ? 1u : 0u);
            Result Set(Guid guidKey, float value)
        { Set(guidKey, (double)value);

                    public Result SetEnumValue<T>(Guid guidKey, T value)
                where T : unmanaged, Enum
            {
                return Set(guidKey, Convert.ToUInt32(value));
            }

                    public Result SetEnumValue<T>(MediaAttributeKey<T> key, T value)
                where T : unmanaged, Enum
            {
                return Set(key.Guid, Convert.ToUInt32(value));
            }

                    Result SetBlob(Guid guidKey, const std::vector<uint8_t>& buffer)
        {
                fixed (void* pBuffer = buffer)
                    return SetBlob(guidKey, pBuffer, (uint)buffer.Length);
            }

                    Result SetBlob(Guid guidKey, const span<uint8_t>& buffer)
        {
                fixed (void* pBuffer = buffer)
                    return SetBlob(guidKey, pBuffer, (uint)buffer.Length);
            }

            public Result SetBlob<T>(Guid guidKey, ref T value)
                where T : unmanaged
            {
                return SetBlob(guidKey, Unsafe.AsPointer(ref value), (uint)sizeof(T));
            }
        }


    }
}

#endif // VORTICE_IMFATTRIBUTES_H