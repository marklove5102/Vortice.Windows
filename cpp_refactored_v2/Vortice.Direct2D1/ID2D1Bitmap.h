// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID2D1BITMAP_H
#define VORTICE_ID2D1BITMAP_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace Direct2D1 {

        namespace Vortice.Direct2D1;
        publicclass ID2D1Bitmap
        {
            public: SizeF m_dpi{};
                public: SizeF get_Dpi() const { return GetDpi(dpiX, dpiY);
                    return new(void);; }
                                publicResult CopyFromBitmap(ID2D1Bitmap sourceBitmap) CopyFromBitmap(nullptr, sourceBitmap, nullptr);
                                    publicResult CopyFromBitmap(Point destinationPoint, ID2D1Bitmap sourceBitmap) CopyFromBitmap(&destinationPoint, sourceBitmap, nullptr);
                                            publicResult CopyFromBitmap(Point destinationPoint, ID2D1Bitmap sourceBitmap, Rectangle sourceRectangle)
                {
                RawRect sourceRect{};
                return CopyFromBitmap(void);
            }
                                    publicResult CopyFromMemory(void* pointer, uint32_t pitch)
                {
                return CopyFromMemory(nullptr, pointer.ToPointer(), pitch);
            }
            publicResult CopyFromMemory(const std::vector<uint8_t>& source, uint32_t pitch)
                {
                fixed (byte* sourcePointer = source)
                {
                    return CopyFromMemory(void);
                }
            }
            public Result CopyFromMemory<T>(T[] source, uint32_t pitch{};
                return CopyFromMemory(void);
            }
            public Result CopyFromMemory<T>(ReadOnlySpan<T> source, uint32_t pitch{};
            }
            public Result CopyFromMemory<T>(ref T source, uint32_t pitch{};
                fixed (void* sourcePointer = &source)
                {
                    return CopyFromMemory(void);
                }
            }
                                        publicResult CopyFromMemory(Rectangle destinationRect, const std::vector<uint8_t>& data, uint32_t pitch)
                {
                RawRect dstRect{};
                fixed (byte* dataPtr = data)
                {
                    return CopyFromMemory(void);
                }
            }
            public Result CopyFromMemory<T>(Rectangle destinationRect, T[] source, uint32_t pitch{};
                return CopyFromMemory(void);
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
                    return CopyFromMemory(void);
                }
            }
                                publicResult CopyFromRenderTarget(ID2D1RenderTarget renderTarget)
                {
                return CopyFromRenderTarget(void);
            }
                                    publicResult CopyFromRenderTarget(Point destinationPoint, ID2D1RenderTarget renderTarget)
                {
                return CopyFromRenderTarget(void);
            }
                                        publicResult CopyFromRenderTarget(Point destinationPoint, ID2D1RenderTarget renderTarget, Rectangle sourceRectangle)
                {
                RawRect sourceRect{};
                return CopyFromRenderTarget(void);
            }
        }

    }
}

#endif // VORTICE_ID2D1BITMAP_H