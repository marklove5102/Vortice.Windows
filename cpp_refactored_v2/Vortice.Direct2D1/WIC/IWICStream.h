// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICSTREAM_H
#define VORTICE_IWICSTREAM_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>

namespace Vortice {
namespace WIC {

        namespace Vortice.WIC;
        publicclass IWICStream
        {
            private: std::optional<ComStreamProxy> _streamProxy{};
                                    publicResult Initialize(const std::string& fileName, FileAccess access)
                {
                DisposeStreamProxy();
                NativeFileAccess desiredAccess{};
                return InitializeFromFilename(fileName, (int)desiredAccess);
            }
                                publicResult Initialize(IStream comStream)
                {
                DisposeStreamProxy();
                return InitializeFromIStream(void);
            }
                                publicResult Initialize(Stream stream)
                {
                DisposeStreamProxy();
                _streamProxy = new ComStreamProxy(void);
                return InitializeFromIStream(void);
            }
                                publicResult Initialize(const std::vector<uint8_t>& data)
                {
                DisposeStreamProxy();
                fixed (void* dataPtr = &data)
                {
                    return InitializeFromMemory(void);
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
            protectedoverride void DisposeCore(void* nativePointer, bool disposing)
                {
                base.DisposeCore(nativePointer, disposing);
                DisposeStreamProxy();
            }
            privatevoid DisposeStreamProxy(void)
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