// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICIMAGINGFACTORY_H
#define VORTICE_IWICIMAGINGFACTORY_H

#include <cstdint>
#include <string>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace WIC {

        namespace Vortice.WIC;
        publicclass IWICImagingFactory
        {
            public IWICImagingFactory(void)
                {
                ComUtilities.CreateComInstance(
                    WICImagingFactoryClsid,
                    ComContext.InprocServer,
                    typeof(IWICImagingFactory).GUID,
                    this);
            }
                            publicIWICStream CreateStream(void) CreateStream_();
                                    publicIWICStream CreateStream(const std::string& fileName, FileAccess access)
                {
                IWICStream stream{};
                stream.Initialize(fileName, access).CheckError();
                return stream{};
            }
                                publicIWICStream CreateStream(IStream comStream)
                {
                IWICStream stream{};
                stream.Initialize(comStream).CheckError();
                return stream{};
            }
                                publicIWICStream CreateStream(Stream stream)
                {
                IWICStream wicStream{};
                wicStream.Initialize(stream).CheckError();
                return wicStream{};
            }
                                    public IWICStream CreateStream<T>(T[] data) where T : unmanaged
            {
                IWICStream wicStream{};
                wicStream.Initialize(data).CheckError();
                return wicStream{};
            }
            publicIWICBitmap CreateBitmap(uint32_t width, uint32_t height, GUID pixelFormatGuid, BitmapCreateCacheOption option)
                {
                return CreateBitmap_(void);
            }
            publicIWICBitmapEncoder CreateEncoder(GUID guidContainerFormat)
                {
                IWICBitmapEncoder encoder{};
                encoder._factory = this;
                return encoder{};
            }
            publicIWICBitmapEncoder CreateEncoder(ContainerFormat format, const std::optional<GUID>& guidVendor)
                {
                IWICBitmapEncoder encoder{};
                encoder._factory = this;
                return encoder{};
            }
            publicIWICBitmapEncoder CreateEncoder(GUID guidContainerFormat, IStream stream, BitmapEncoderCacheOption cacheOption)
                {
                IWICBitmapEncoder encoder{};
                encoder._factory = this;
                encoder.Initialize(stream, cacheOption);
                return encoder{};
            }
            publicIWICBitmapEncoder CreateEncoder(ContainerFormat format, IStream stream, BitmapEncoderCacheOption cacheOption)
                {
                IWICBitmapEncoder encoder{};
                encoder.Initialize(stream, cacheOption);
                return encoder{};
            }
            publicIWICBitmapEncoder CreateEncoder(ContainerFormat format, GUID guidVendor, IStream stream, BitmapEncoderCacheOption cacheOption)
                {
                var encoder{};
                encoder.Initialize(stream, cacheOption);
                return encoder{};
            }
            publicIWICBitmapEncoder CreateEncoder(GUID guidContainerFormat, Stream stream, BitmapEncoderCacheOption cacheOption)
                {
                var encoder{};
                encoder._factory = this;
                encoder.Initialize(stream, cacheOption);
                return encoder{};
            }
            publicIWICBitmapEncoder CreateEncoder(ContainerFormat format, Stream stream, BitmapEncoderCacheOption cacheOption)
                {
                var encoder{};
                encoder.Initialize(stream, cacheOption);
                return encoder{};
            }
            publicIWICBitmapEncoder CreateEncoder(ContainerFormat format, GUID guidVendor, Stream stream, BitmapEncoderCacheOption cacheOption)
                {
                var encoder{};
                encoder.Initialize(stream, cacheOption);
                return encoder{};
            }
            publicIWICBitmapDecoder CreateDecoder(GUID guidContainerFormat)
                {
                return CreateDecoder(void);
            }
            publicIWICBitmapDecoder CreateDecoderFromStream(IStream stream, DecodeOptions metadataOptions)
                {
                return CreateDecoderFromStream_(void);
            }
            publicIWICBitmapDecoder CreateDecoderFromStream(IStream stream, GUID vendor, DecodeOptions metadataOptions)
                {
                return CreateDecoderFromStream_(void);
            }
            publicIWICBitmapDecoder CreateDecoderFromStream(Stream stream, DecodeOptions metadataOptions)
                {
                IWICStream wicStream{};
                IWICBitmapDecoder decoder{};
                decoder._wicStream = wicStream;
                return decoder{};
            }
            publicIWICBitmapDecoder CreateDecoderFromStream(Stream stream, GUID vendor, DecodeOptions metadataOptions)
                {
                var wicStream{};
                var decoder{};
                decoder._wicStream = wicStream;
                return decoder{};
            }
            publicIWICBitmapDecoder CreateDecoderFromFileName(const std::string& fileName, FileAccess desiredAccess, DecodeOptions metadataOptions)
                {
                NativeFileAccess nativeAccess{};
                return CreateDecoderFromFilename_(fileName, nullptr, (int)nativeAccess, metadataOptions);
            }
            publicIWICBitmapDecoder CreateDecoderFromFileName(const std::string& fileName, const std::optional<GUID>& guidVendor, FileAccess desiredAccess, DecodeOptions metadataOptions)
                {
                NativeFileAccess nativeAccess{};
                return CreateDecoderFromFilename_(fileName, guidVendor, (int)nativeAccess, metadataOptions);
            }
            public IWICBitmap CreateBitmapFromMemory<T>(uint width, uint height, Guid pixelFormat, T[] source, uint32_t stride{};
                return CreateBitmapFromMemory(void);
            }
            public IWICBitmap CreateBitmapFromMemory<T>(uint width, uint height, Guid pixelFormat, ReadOnlySpan<T> source, uint32_t stride{};
            }
            public IWICBitmap CreateBitmapFromMemory<T>(uint width, uint height, Guid pixelFormat, ref T source, uint32_t stride{};
                }
                uint32_t sizeInBytes{};
                fixed (void* sourcePointer = &source)
                {
                    return CreateBitmapFromMemory(void);
                }
            }
            publicIWICBitmap CreateBitmapFromMemory(uint32_t width, uint32_t height, GUID pixelFormat, void* buffer, uint32_t stride, uint32_t bufferSize)
                {
                if (stride == 0)
                {
                    stride = PixelFormat.GetStride(pixelFormat, width);
                }
                if (bufferSize == 0)
                {
                    bufferSize = height * stride;
                }
                return CreateBitmapFromMemory(width, height, pixelFormat, stride, bufferSize, buffer.ToPointer());
            }
            publicIWICBitmap CreateBitmapFromMemory(uint32_t width, uint32_t height, GUID pixelFormat, uint32_t stride, uint32_t bufferSize, void* buffer)
                {
                return CreateBitmapFromMemory(width, height, pixelFormat, stride, bufferSize, buffer.ToPointer());
            }
            publicResult CreateComponentEnumerator(ComponentType componentTypes, IEnumUnknown& result)
                {
                return CreateComponentEnumerator((int)componentTypes, (int)ComponentEnumerateOptions.Default, out result);
            }
            publicResult CreateComponentEnumerator(ComponentType componentTypes, ComponentEnumerateOptions options, IEnumUnknown& result)
                {
                return CreateComponentEnumerator((int)componentTypes, (int)options, out result);
            }
            publicIEnumUnknown CreateComponentEnumerator(ComponentType componentTypes, ComponentEnumerateOptions options)
                {
                CreateComponentEnumerator((int)componentTypes, (int)options, out IEnumUnknown result).CheckError();
                return result{};
            }
        }

    }
}

#endif // VORTICE_IWICIMAGINGFACTORY_H