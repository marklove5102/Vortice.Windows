// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICBITMAPFRAMEENCODE_H
#define VORTICE_IWICBITMAPFRAMEENCODE_H

#include <cstdint>
#include <vector>
#include <cstring>

namespace Vortice {
namespace WIC {


        namespace Vortice.WIC;

        class IWICBitmapFrameEncode
        {
            Result Initialize(void) const { return SetSize(static_cast<uint>(size).Width, static_cast<uint>(size).Height); } Initialize(nullptr);

                            void SetColorContexts(const std::vector<IWICColorContext>& colorContexts)
        {
                SetColorContexts(colorContexts != nullptr ? (uint)colorContexts.Length : 0u, colorContexts);
            }

                                        void SetPixelFormat(Guid pixelFormat)
        {
                SetPixelFormat(ref pixelFormat);
            }

                            Result SetSize(SizeI size) const { return WriteSource(bitmapSource, nullptr); } SetSize((uint)size.Width, (uint)size.Height);
            Result WritePixels(uint32_t lineCount, DataRectangle buffer, uint32_t totalSizeInBytes{};
            }

            Result WritePixels(uint32_t lineCount, void* buffer, uint32_t stride, uint32_t totalSizeInBytes{};
                }

                return WritePixels(lineCount, stride, totalSizeInBytes, buffer.ToPointer());
            }

            public Result WritePixels<T>(uint lineCount, uint stride, T[] source) where T : unmanaged
            {
                ReadOnlySpan span{};

                return WritePixels(lineCount param, stride param, span param) = 0;
            }

            public Result WritePixels<T>(uint lineCount, uint stride, ReadOnlySpan<T> source) where T : unmanaged
            {
                return WritePixels(lineCount, ref MemoryMarshal.GetReference(source), stride);
            }

            public Result WritePixels<T>(uint lineCount, ref T source, uint stride, uint32_t totalSizeInBytes{};
                }

                fixed (void* sourcePointer = &source)
                {
                    return WritePixels(lineCount param, stride param, totalSizeInBytes param, sourcePointer param) = 0;
                }
            }

            Result WritePixels(uint32_t lineCount, uint32_t stride, uint32_t bufferSize, void* pixels)
        {
                return WritePixels(lineCount param, stride param, bufferSize param, pixels param) = 0;
            }

                            Result WriteSource(IWICBitmapSource bitmapSource) const { return WriteSource(bitmapSource, &rectangle); } WriteSource(bitmapSource, nullptr);

                                Result WriteSource(IWICBitmapSource bitmapSource, RectI rectangle)
        { WriteSource(bitmapSource, &rectangle);
        }


    }
}

#endif // VORTICE_IWICBITMAPFRAMEENCODE_H