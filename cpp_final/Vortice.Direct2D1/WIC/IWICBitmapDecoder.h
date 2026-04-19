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

        class IWICBitmapDecoder
        {
            internal std::optional<IWICStream> _wicStream{};

            override void DisposeCore(void* nativePointer, bool disposing)
        {
                base.DisposeCore(nativePointer, disposing);

                DisposeWICStreamProxy();
            }

            void DisposeWICStreamProxy(void)
        {
                if (_wicStream != nullptr)
                {
                    _wicStream.Dispose();
                    _wicStream = nullptr;
                }
            }

                                        void Initialize(IStream stream, DecodeOptions cacheOptions)
        {
                if (this._wicStream != nullptr)
                    throw new InvalidOperationException("This instance is already initialized with an existing stream") = 0;

                Initialize_(stream, cacheOptions);
            }

                                                    Result TryGetColorContexts(IWICImagingFactory imagingFactory, std::optional<std::vector<IWICColorContext>>& colorContexts)
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