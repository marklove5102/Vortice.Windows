// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICBITMAPFRAMEENCODE_H
#define VORTICE_IWICBITMAPFRAMEENCODE_H

#include <cstdint>
#include <vector>
#include <guiddef.h>

namespace Vortice {
namespace WIC {


        namespace Vortice.WIC;
        publicclass IWICBitmapFrameEncode
        {
            publicResult Initialize(void) Initialize(nullptr);
                            publicvoid SetColorContexts(const std::vector<IWICColorContext>& colorContexts)
                {
                SetColorContexts(colorContexts != nullptr ? (uint)colorContexts.Length : 0u, colorContexts);
            }
                                        publicvoid SetPixelFormat(GUID pixelFormat)
                {
                SetPixelFormat(ref pixelFormat);
            }
                            publicResult SetSize(SizeI size) SetSize((uint)size.Width, (uint)size.Height);
            publicResult WritePixels(uint32_t lineCount, DataRectangle buffer, uint32_t totalSizeInBytes)
                {
                return WritePixels(lineCount, buffer.DataPointer, (uint)buffer.Pitch, totalSizeInBytes);
            }
            publicResult WritePixels(uint32_t lineCount, void* buffer, uint32_t stride, uint32_t totalSizeInBytes)
                {
                if (totalSizeInBytes == 0)
                {
                    totalSizeInBytes = lineCount * stride;
                }
                return WritePixels(lineCount, stride, totalSizeInBytes, buffer.ToPointer());
            }
            public Result WritePixels<T>(uint lineCount, uint stride, T[] source) where T : unmanaged
            {
                ReadOnlySpan span{};
                return WritePixels(void);
            }
            public Result WritePixels<T>(uint lineCount, uint stride, ReadOnlySpan<T> source) where T : unmanaged
            {
                return WritePixels(lineCount, ref MemoryMarshal.GetReference(source), stride);
            }
            public Result WritePixels<T>(uint lineCount, ref T source, uint stride, uint32_t totalSizeInBytes{};
                }
                fixed (void* sourcePointer = &source)
                {
                    return WritePixels(void);
                }
            }
            publicResult WritePixels(uint32_t lineCount, uint32_t stride, uint32_t bufferSize, void* pixels)
                {
                return WritePixels(void);
            }
                            publicResult WriteSource(IWICBitmapSource bitmapSource) WriteSource(bitmapSource, nullptr);
                                publicResult WriteSource(IWICBitmapSource bitmapSource, RectI rectangle) WriteSource(bitmapSource, &rectangle);
        }

    }
}

#endif // VORTICE_IWICBITMAPFRAMEENCODE_H