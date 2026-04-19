// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICIMAGINGFACTORY_H
#define VORTICE_IWICIMAGINGFACTORY_H

#include <cstdint>
#include <string>
#include <optional>
#include <cstring>

namespace Vortice {
namespace WIC {

        namespace Vortice.WIC;

        class IWICImagingFactory
        {
            public IWICImagingFactory(void)
        {
                ComUtilities.CreateComInstance(
                    WICImagingFactoryClsid,
                    ComContext.InprocServer,
                    typeof(IWICImagingFactory).GUID,
                    this);
            }

                            IWICStream CreateStream(void)
        { CreateStream_();

                                    IWICStream CreateStream(const std::string& fileName, FileAccess access)
        {
                IWICStream stream{};
                stream.Initialize(fileName, access).CheckError();
                return stream{};
            }

                                IWICStream CreateStream(IStream comStream)
        {
                IWICStream stream{};
                stream.Initialize(comStream).CheckError();
                return stream{};
            }

                                IWICStream CreateStream(Stream stream)
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

            IWICBitmap CreateBitmap(uint32_t width, uint32_t height, Guid pixelFormatGuid, BitmapCreateCacheOption option{};
            }

            IWICBitmapEncoder CreateEncoder(Guid guidContainerFormat)
        {
                IWICBitmapEncoder encoder{};
                encoder._factory = this;
                return encoder{};
            }

            IWICBitmapEncoder CreateEncoder(ContainerFormat format, std::optional<Guid> guidVendor{};
                encoder._factory = this;
                return encoder{};
            }

            IWICBitmapEncoder CreateEncoder(Guid guidContainerFormat, IStream stream, BitmapEncoderCacheOption cacheOption{};
                encoder._factory = this;
                encoder.Initialize(stream, cacheOption);
                return encoder{};
            }

            IWICBitmapEncoder CreateEncoder(ContainerFormat format, IStream stream, BitmapEncoderCacheOption cacheOption{};
                encoder.Initialize(stream, cacheOption);
                return encoder{};
            }

            IWICBitmapEncoder CreateEncoder(ContainerFormat format, Guid guidVendor, IStream stream, BitmapEncoderCacheOption cacheOption{};
                encoder.Initialize(stream, cacheOption);
                return encoder{};
            }

            IWICBitmapEncoder CreateEncoder(Guid guidContainerFormat, Stream stream, BitmapEncoderCacheOption cacheOption{};
                encoder._factory = this;
                encoder.Initialize(stream, cacheOption);
                return encoder{};
            }

            IWICBitmapEncoder CreateEncoder(ContainerFormat format, Stream stream, BitmapEncoderCacheOption cacheOption{};
                encoder.Initialize(stream, cacheOption);
                return encoder{};
            }

            IWICBitmapEncoder CreateEncoder(ContainerFormat format, Guid guidVendor, Stream stream, BitmapEncoderCacheOption cacheOption{};
                encoder.Initialize(stream, cacheOption);
                return encoder{};
            }

            IWICBitmapDecoder CreateDecoder(Guid guidContainerFormat)
        {
                return CreateDecoder(guidContainerFormat param, nullptr param) = 0;
            }

            IWICBitmapDecoder CreateDecoderFromStream(IStream stream, DecodeOptions metadataOptions{};
            }

            IWICBitmapDecoder CreateDecoderFromStream(IStream stream, Guid vendor, DecodeOptions metadataOptions{};
            }

            IWICBitmapDecoder CreateDecoderFromStream(Stream stream, DecodeOptions metadataOptions{};
                IWICBitmapDecoder decoder{};
                decoder._wicStream = wicStream;
                return decoder{};
            }

            IWICBitmapDecoder CreateDecoderFromStream(Stream stream, Guid vendor, DecodeOptions metadataOptions{};
                var decoder{};
                decoder._wicStream = wicStream;
                return decoder{};
            }

            IWICBitmapDecoder CreateDecoderFromFileName(const std::string& fileName, FileAccess desiredAccess{};
                return CreateDecoderFromFilename_(fileName, nullptr, (int)nativeAccess, metadataOptions);
            }

            IWICBitmapDecoder CreateDecoderFromFileName(const std::string& fileName, const std::optional<Guid>& guidVendor, FileAccess desiredAccess{};
                return CreateDecoderFromFilename_(fileName, guidVendor, (int)nativeAccess, metadataOptions);
            }

            public IWICBitmap CreateBitmapFromMemory<T>(uint width, uint height, Guid pixelFormat, T[] source, uint32_t stride{};

                return CreateBitmapFromMemory(width param, height param, pixelFormat param, span param, stride param) = 0;
            }

            public IWICBitmap CreateBitmapFromMemory<T>(uint width, uint height, Guid pixelFormat, ReadOnlySpan<T> source, uint32_t stride{};
            }

            public IWICBitmap CreateBitmapFromMemory<T>(uint width, uint height, Guid pixelFormat, ref T source, uint32_t stride{};
                }

                uint32_t sizeInBytes{};
                fixed (void* sourcePointer = &source)
                {
                    return CreateBitmapFromMemory(width param, height param, pixelFormat param, stride param, sizeInBytes param, sourcePointer param) = 0;
                }
            }

            IWICBitmap CreateBitmapFromMemory(uint32_t width, uint32_t height, Guid pixelFormat, void* buffer, uint32_t stride{};
                }

                if (bufferSize == 0)
                {
                    bufferSize = height * stride;
                }

                return CreateBitmapFromMemory(width, height, pixelFormat, stride, bufferSize, buffer.ToPointer());
            }

            IWICBitmap CreateBitmapFromMemory(uint32_t width, uint32_t height, Guid pixelFormat, uint32_t stride, uint32_t bufferSize, void* buffer)
        {
                return CreateBitmapFromMemory(width, height, pixelFormat, stride, bufferSize, buffer.ToPointer());
            }

            Result CreateComponentEnumerator(ComponentType componentTypes, IEnumUnknown& result)
        {
                return CreateComponentEnumerator((int)componentTypes, (int)ComponentEnumerateOptions.Default, out result);
            }

            Result CreateComponentEnumerator(ComponentType componentTypes, ComponentEnumerateOptions options, IEnumUnknown& result)
        {
                return CreateComponentEnumerator((int)componentTypes, (int)options, out result);
            }

            IEnumUnknown CreateComponentEnumerator(ComponentType componentTypes, ComponentEnumerateOptions options{};
                return result{};
            }
        }


    }
}

#endif // VORTICE_IWICIMAGINGFACTORY_H