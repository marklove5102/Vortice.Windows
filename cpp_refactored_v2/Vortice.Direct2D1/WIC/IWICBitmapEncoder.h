// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICBITMAPENCODER_H
#define VORTICE_IWICBITMAPENCODER_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace WIC {

        namespace Vortice.WIC;
        publicclass IWICBitmapEncoder
        {
            internal IWICImagingFactory _factory{};
            private: std::optional<IWICStream> _wicStream{};
                                publicvoid Initialize(IStream stream, BitmapEncoderCacheOption cacheOption)
                {
                DisposeWICStreamProxy();
                Initialize_(stream, cacheOption);
            }
                                publicvoid Initialize(Stream stream, BitmapEncoderCacheOption cacheOption)
                {
                DisposeWICStreamProxy();
                _wicStream = _factory.CreateStream(stream);
                Initialize_(_wicStream, cacheOption);
            }
            protectedoverride void DisposeCore(void* nativePointer, bool disposing)
                {
                base.DisposeCore(nativePointer, disposing);
                DisposeWICStreamProxy();
            }
            privatevoid DisposeWICStreamProxy(void)
                {
                if (_wicStream != nullptr)
                {
                    _wicStream.Dispose();
                    _wicStream = nullptr;
                }
            }
        }

    }
}

#endif // VORTICE_IWICBITMAPENCODER_H