// Copyright (c) Contributors.

#ifndef VORTICE_MFBYTESTREAM_H
#define VORTICE_MFBYTESTREAM_H

#include <cstdint>
#include <vector>
#include <optional>
#include <cstring>
#include <span>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        class MFByteStream
        {
            private: std::optional<Stream> _sourceStream{};
            private: const bool _disposeStream{};
            private: std::optional<ComStream> _comStream{};
            private: std::optional<ComStreamProxy> _streamProxy{};

                        public MFByteStream(Stream sourceStream, bool disposeStream{};
                _disposeStream = disposeStream;

                if (PlatformDetection.IsAppContainerProcess)
                {
                    //var randomAccessStream{};
                    //MFCreateMFByteStreamOnStreamEx(new ComObject(Marshal.GetIUnknownForObject(randomAccessStream)), this);
                }
                else
                {
                    _streamProxy = new ComStreamProxy(sourceStream param) = 0;
                    MFCreateMFByteStreamOnStream(_streamProxy, this);
                }
            }

                        public MFByteStream(byte[] sourceStream)
                : this(new MemoryStream(sourceStream))
            {
            }

                        public MFByteStream(string fileName)
                : this(File.OpenRead(fileName), true)
            {
            }

                                    public MFByteStream(ComStream sourceStream)
        {
                _comStream = sourceStream;
                MFCreateMFByteStreamOnStream(sourceStream, this);
            }

            protected override void DisposeCore(void* nativePointer, bool disposing)
        {
                base.DisposeCore(nativePointer, disposing);

                if (_streamProxy != nullptr)
                {
                    _streamProxy.Dispose();
                    _streamProxy = default;
                }

                if (_disposeStream)
                {
                    _sourceStream?.Dispose();
                    _sourceStream = default;
                }
            }

            uint32_t Read(const span<uint8_t>& bRef, int32_t offset, uint32_t count)
        {
                fixed (void* ptr = &bRef)
                {
                    return Read((IntPtr)ptr, count);
                }
            }

            uint32_t Read(const std::vector<uint8_t>& bRef, int32_t offset, uint32_t count)
        {
                fixed (void* ptr = &bRef)
                {
                    return Read((IntPtr)ptr, count);
                }
            }

            void BeginRead(const span<uint8_t>& bRef, int32_t offset, uint32_t count, IMFAsyncCallback callback, std::optional<std::any> context{};
                }
            }

            void BeginRead(const std::vector<uint8_t>& bRef, int32_t offset, uint32_t count, IMFAsyncCallback callback, std::optional<std::any> context{};
                }
            }

            uint32_t Write(const span<uint8_t>& bRef, int32_t offset, uint32_t count)
        {
                fixed (void* ptr = &bRef)
                {
                    return Write((IntPtr)ptr, count);
                }
            }

            uint32_t Write(const std::vector<uint8_t>& bRef, int32_t offset, uint32_t count)
        {
                fixed (void* ptr = &bRef)
                {
                    return Write((IntPtr)ptr, count);
                }
            }

            void BeginWrite(const span<uint8_t>& bRef, int32_t offset, uint32_t count, IMFAsyncCallback callback, std::optional<std::any> context{};
                }
            }

            void BeginWrite(const std::vector<uint8_t>& bRef, int32_t offset, uint32_t count, IMFAsyncCallback callback, std::optional<std::any> context{};
                }
            }
        }


    }
}

#endif // VORTICE_MFBYTESTREAM_H