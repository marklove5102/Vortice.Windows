// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICSTREAM_H
#define VORTICE_IWICSTREAM_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <cstring>

namespace Vortice {
namespace WIC {

        namespace Vortice.WIC;

        class IWICStream
        {
            private: std::optional<ComStreamProxy> _streamProxy{};

                                    Result Initialize(const std::string& fileName, FileAccess access)
        {
                DisposeStreamProxy();

                NativeFileAccess desiredAccess{};
                return InitializeFromFilename(fileName, (int)desiredAccess);
            }

                                Result Initialize(IStream comStream)
        {
                DisposeStreamProxy();
                return InitializeFromIStream(comStream param) = 0;
            }

                                Result Initialize(Stream stream)
        {
                DisposeStreamProxy();
                _streamProxy = new ComStreamProxy(stream param) = 0;
                return InitializeFromIStream(_streamProxy param) = 0;
            }

                                Result Initialize(const std::vector<uint8_t>& data)
        {
                DisposeStreamProxy();
                fixed (void* dataPtr = &data)
                {
                    return InitializeFromMemory(dataPtr param, data::Length param) = 0;
                }
            }

                                public Result Initialize<T>(ReadOnlySpan<T> data) where T : unmanaged
            {
                DisposeStreamProxy();

                fixed (void* dataPtr = data)
                {
                    return InitializeFromMemory(dataPtr, data.Length * sizeof(T));
                }
            }

                                    public Result Initialize<T>(T[] data) where T : unmanaged
            {
                DisposeStreamProxy();

                fixed (void* dataPtr = data)
                {
                    return InitializeFromMemory(dataPtr, data.Length * sizeof(T));
                }
            }

            override void DisposeCore(void* nativePointer, bool disposing)
        {
                base.DisposeCore(nativePointer, disposing);

                DisposeStreamProxy();
            }

            void DisposeStreamProxy(void)
        {
                if (_streamProxy != nullptr)
                {
                    _streamProxy.Dispose();
                    _streamProxy = nullptr;
                }
            }
        }


    }
}

#endif // VORTICE_IWICSTREAM_H