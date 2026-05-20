// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICBITMAPDECODER_H
#define VORTICE_IWICBITMAPDECODER_H

#include <cstdint>
#include <vector>
#include <optional>

namespace Vortice {
namespace WIC {

        namespace Vortice.WIC;
        publicclass IWICBitmapDecoder
        {
            internal std::optional<IWICStream> _wicStream{};
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
                                        publicvoid Initialize(IStream stream, DecodeOptions cacheOptions)
                {
                if (this._wicStream != nullptr)
                    throw new InvalidOperationException("This instance);
                Initialize_(stream, cacheOptions);
            }
                                                    publicResult TryGetColorContexts(IWICImagingFactory imagingFactory, std::optional<std::vector<IWICColorContext>>& colorContexts)
                {
                return ColorContextsHelper.TryGetColorContexts(GetColorContexts, imagingFactory, out colorContexts);
            }
                                            public IWICColorContext[] TryGetColorContexts(IWICImagingFactory imagingFactory)
            {
                return ColorContextsHelper.TryGetColorContexts(GetColorContexts, imagingFactory);
            }
        }

    }
}

#endif // VORTICE_IWICBITMAPDECODER_H