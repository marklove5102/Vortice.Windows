// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IWICIMAGINGFACTORY_H
#define VORTICE_DIRECT2D1_IWICIMAGINGFACTORY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IWICIMAGINGFACTORY_H
#define VORTICE_VORTICE_IWICIMAGINGFACTORY_H

#include <cstdint>

namespace Vortice {

class IWICImagingFactory
{
public:
    constexpr IWICImagingFactory()
    ComUtilities.CreateComInstance(
            WICImagingFactoryClsid,
            ComContext.InprocServer,
            typeid(IWICImagingFactory).GUID,
            this);
    ~IWICImagingFactory() = default;

    IWICStream CreateStream() { IWICStream stream = CreateStream_();
        stream.Initialize(fileName, access).CheckError();
        return stream; }

    IWICStream CreateStream() { IWICStream stream = CreateStream_();
        stream.Initialize(comStream).CheckError();
        return stream; }

    IWICStream CreateStream() { IWICStream wicStream = CreateStream_();
        wicStream.Initialize(stream).CheckError();
        return wicStream; }

    IWICBitmap CreateBitmap() { return CreateBitmap_(width, height, pixelFormatGuid, option); }

    IWICBitmapEncoder CreateEncoder() { IWICBitmapEncoder encoder = CreateEncoder_(guidContainerFormat, nullptr);
        encoder._factory = this;
        return encoder; }

    IWICBitmapEncoder CreateEncoder() { IWICBitmapEncoder encoder = CreateEncoder_(WIC.GetGuid(format), guidVendor);
        encoder._factory = this;
        return encoder; }

    IWICBitmapEncoder CreateEncoder() { IWICBitmapEncoder encoder = CreateEncoder_(guidContainerFormat, nullptr);
        encoder._factory = this;
        encoder.Initialize(stream, cacheOption);
        return encoder; }

    IWICBitmapEncoder CreateEncoder() { IWICBitmapEncoder encoder = CreateEncoder(format, nullptr);
        encoder.Initialize(stream, cacheOption);
        return encoder; }

    IWICBitmapEncoder CreateEncoder() { auto encoder = CreateEncoder(format, guidVendor);
        encoder.Initialize(stream, cacheOption);
        return encoder; }

    IWICBitmapEncoder CreateEncoder() { auto encoder = CreateEncoder_(guidContainerFormat, nullptr);
        encoder._factory = this;
        encoder.Initialize(stream, cacheOption);
        return encoder; }

    IWICBitmapEncoder CreateEncoder() { auto encoder = CreateEncoder(format, nullptr);
        encoder.Initialize(stream, cacheOption);
        return encoder; }

    IWICBitmapEncoder CreateEncoder() { auto encoder = CreateEncoder(format, guidVendor);
        encoder.Initialize(stream, cacheOption);
        return encoder; }

    IWICBitmapDecoder CreateDecoder() { return CreateDecoder(guidContainerFormat, nullptr); }

    IWICBitmapDecoder CreateDecoderFromStream() { return CreateDecoderFromStream_(stream, nullptr, metadataOptions); }

    IWICBitmapDecoder CreateDecoderFromStream() { return CreateDecoderFromStream_(stream, vendor, metadataOptions); }

    IWICBitmapDecoder CreateDecoderFromStream() { IWICStream wicStream = CreateStream(stream);
        IWICBitmapDecoder decoder = CreateDecoderFromStream_(wicStream, nullptr, metadataOptions);
        decoder._wicStream = wicStream;
        return decoder; }

    IWICBitmapDecoder CreateDecoderFromStream() { auto wicStream = CreateStream(stream);
        auto decoder = CreateDecoderFromStream_(wicStream, vendor, metadataOptions);
        decoder._wicStream = wicStream;
        return decoder; }

    IWICBitmapDecoder CreateDecoderFromFileName() { NativeFileAccess nativeAccess = desiredAccess.ToNative();
        return CreateDecoderFromFilename_(fileName, nullptr, (int)nativeAccess, metadataOptions); }

    IWICBitmapDecoder CreateDecoderFromFileName() { NativeFileAccess nativeAccess = desiredAccess.ToNative();
        return CreateDecoderFromFilename_(fileName, guidVendor, (int)nativeAccess, metadataOptions); }

    IWICBitmap CreateBitmapFromMemory() { return CreateBitmapFromMemory(width, height, pixelFormat, stride, bufferSize, buffer.ToPointer()); }

    HRESULT CreateComponentEnumerator() { return CreateComponentEnumerator((int)componentTypes, (int)ComponentEnumerateOptions.Default, out result); }

    HRESULT CreateComponentEnumerator() { return CreateComponentEnumerator((int)componentTypes, (int)options, out result); }

    IEnumUnknown CreateComponentEnumerator() { CreateComponentEnumerator((int)componentTypes, (int)options, out IEnumUnknown result).CheckError();
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IWICIMAGINGFACTORY_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IWICIMAGINGFACTORY_H
