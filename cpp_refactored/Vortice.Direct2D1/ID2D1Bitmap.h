// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID2D1BITMAP_H
#define VORTICE_ID2D1BITMAP_H

#include <cstdint>
#include <vector>
#include <cstring>

namespace Vortice {
namespace Direct2D1 {

        namespace Vortice.Direct2D1;

        class ID2D1Bitmap
        {
            public SizeF Dpi
            {
                get
                {
                    GetDpi(out float dpiX, out float dpiY);
                    return new(dpiX param, dpiY param) = 0;
                }
            }
                                Result CopyFromBitmap(ID2D1Bitmap sourceBitmap) const { return CopyFromBitmap(&destinationPoint, sourceBitmap, nullptr); } CopyFromBitmap(nullptr, sourceBitmap, nullptr);

                                    Result CopyFromBitmap(Point destinationPoint, ID2D1Bitmap sourceBitmap)
        { CopyFromBitmap(&destinationPoint, sourceBitmap, nullptr);

                                            Result CopyFromBitmap(Point destinationPoint, ID2D1Bitmap sourceBitmap, Rectangle sourceRectangle)
        {
                RawRect sourceRect{};
                return CopyFromBitmap(&destinationPoint param, sourceBitmap param, &sourceRect param) = 0;
            }
                                    Result CopyFromMemory(void* pointer, uint32_t pitch)
        {
                return CopyFromMemory(nullptr, pointer.ToPointer(), pitch);
            }

            Result CopyFromMemory(const std::vector<uint8_t>& source, uint32_t pitch)
        {
                fixed (byte* sourcePointer = source)
                {
                    return CopyFromMemory(nullptr param, sourcePointer param, pitch param) = 0;
                }
            }

            public Result CopyFromMemory<T>(T[] source, uint32_t pitch{};

                return CopyFromMemory(span param, pitch param) = 0;
            }

            public Result CopyFromMemory<T>(ReadOnlySpan<T> source, uint32_t pitch{};
            }

            public Result CopyFromMemory<T>(ref T source, uint32_t pitch{};

                fixed (void* sourcePointer = &source)
                {
                    return CopyFromMemory(nullptr param, sourcePointer param, pitch param) = 0;
                }
            }

                                        Result CopyFromMemory(Rectangle destinationRect, const std::vector<uint8_t>& data, uint32_t pitch)
        {
                RawRect dstRect{};

                fixed (byte* dataPtr = data)
                {
                    return CopyFromMemory(&dstRect param, dataPtr param, pitch param) = 0;
                }
            }

            public Result CopyFromMemory<T>(Rectangle destinationRect, T[] source, uint32_t pitch{};
                return CopyFromMemory(destinationRect param, span param, pitch param) = 0;
            }

            public Result CopyFromMemory<T>(Rectangle destinationRect, ReadOnlySpan<T> source, uint32_t pitch{};
            }

            public Result CopyFromMemory<T>(Rectangle destinationRect, ref T source, uint32_t pitch{};

                if (pitch == 0)
                {
                    pitch = (uint)(PixelSize.Width * sizeof(T));
                }

                fixed (void* sourcePointer = &source)
                {
                    return CopyFromMemory(&dstRect param, sourcePointer param, pitch param) = 0;
                }
            }
                                Result CopyFromRenderTarget(ID2D1RenderTarget renderTarget)
        {
                return CopyFromRenderTarget(nullptr param, renderTarget param, nullptr param) = 0;
            }

                                    Result CopyFromRenderTarget(Point destinationPoint, ID2D1RenderTarget renderTarget)
        {
                return CopyFromRenderTarget(&destinationPoint param, renderTarget param, nullptr param) = 0;
            }

                                        Result CopyFromRenderTarget(Point destinationPoint, ID2D1RenderTarget renderTarget, Rectangle sourceRectangle)
        {
                RawRect sourceRect{};
                return CopyFromRenderTarget(&destinationPoint param, renderTarget param, &sourceRect param) = 0;
            }
        }


    }
}

#endif // VORTICE_ID2D1BITMAP_H