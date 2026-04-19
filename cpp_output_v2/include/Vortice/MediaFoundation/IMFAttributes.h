// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_IMFATTRIBUTES_H
#define VORTICE_MEDIAFOUNDATION_IMFATTRIBUTES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IMFATTRIBUTES_H
#define VORTICE_VORTICE_IMFATTRIBUTES_H

#include <cstdint>

namespace Vortice {

class IMFAttributes
{
public:
    ~IMFAttributes() = default;

    bool IsAudioDevice{> SourceType == CaptureDeviceAttributeKeys.SourceTypeAudcap};

    std::string get_FriendlyName() const { GetString(CaptureDeviceAttributeKeys.FriendlyName) }
    GUID get_SourceType() const { GetGUID(CaptureDeviceAttributeKeys.SourceType) }
    AudioStreamCategory get_AudioCategory() const { GetEnumValue(MediaEngineAttributeKeys.AudioCategory) }
    AudioEndpointRole get_AudioEndpointRole() const { GetEnumValue(MediaEngineAttributeKeys.AudioEndpointRole) }
    MediaEngineProtectionFlags get_ContentProtectionFlags() const { GetEnumValue(MediaEngineAttributeKeys.ContentProtectionFlags) }
    Format get_VideoOutputFormat() const { GetEnumValue(MediaEngineAttributeKeys.VideoOutputFormat) }

    std::span<uint8_t> GetAllocatedBlob() { GetAllocatedBlob(guidKey, out nint buff, out uint pcbSize).CheckError();
        return new Span<byte>(buff.ToPointer(), (int)pcbSize); }

    HRESULT GetBlob() { fixed (void* pBuffer = buffer)
            return GetBlob(guidKey, pBuffer, (uint)buffer.Length, IntPtr.Zero); }

    HRESULT GetBlob() { fixed (void* pBuffer = buffer)
            return GetBlob(guidKey, pBuffer, (uint)buffer.Length, IntPtr.Zero); }

    uint32_t GetUInt32() { GetUInt32(guidKey, out uint value).CheckError();
        return value; }

    uint64_t GetUInt64() { GetUInt64(guidKey, out ulong value).CheckError();
        return value; }

    double GetDouble() { GetDouble(guidKey, out double value).CheckError();
        return value; }

    GUID GetGUID() { GetGUID(guidKey, out Guid value).CheckError();
        return value; }

    std::string GetString() { uint length = GetStringLength(guidKey);
        char* wstr = stackalloc char[(int)length + 1];
        GetString(guidKey, wstr, length + 1, IntPtr.Zero);
        return Marshal.PtrToStringUni(new IntPtr(wstr)) ?? string.Empty; }

    uint32_t GetBlobSize() { GetBlobSize(guidKey, out uint blobSize).CheckError();
        return blobSize; }

    Variant GetItemByIndex() { Variant result = default;
        GetItemByIndex(index, out guidKey, &result).CheckError();
        return result; }

    HRESULT SetBlob() { fixed (void* pBuffer = buffer)
            return SetBlob(guidKey, pBuffer, (uint)buffer.Length); }

    HRESULT SetBlob() { fixed (void* pBuffer = buffer)
            return SetBlob(guidKey, pBuffer, (uint)buffer.Length); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IMFATTRIBUTES_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IS_H
#define VORTICE_VORTICE_IS_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) is
{
public:
    virtual ~is() = default;

    virtual Variant GetItemByIndex(uint32_t index, GUID& guidKey) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IS_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_IMFATTRIBUTES_H
