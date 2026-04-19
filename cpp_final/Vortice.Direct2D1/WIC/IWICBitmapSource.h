// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICBITMAPSOURCE_H
#define VORTICE_IWICBITMAPSOURCE_H

#include <cstdint>
#include <vector>
#include <cstring>

namespace Vortice {
namespace WIC {


        namespace Vortice.WIC;

        class IWICBitmapSource
        {
            public SizeI Size
            {
                get
                {
                    GetSize(out uint width, out uint height);
                    return new((int)width, (int)height);
                }
            }

            public Size Resolution
            {
                get
                {
                    GetResolution(out double width, out double height);
                    return new((float)width, (float)height);
                }
            }

            void CopyPixels(uint32_t stride, uint32_t size, void* data)
        {
                CopyPixels(nullptr, stride, size, data.ToPointer());
            }

            void CopyPixels(RectI rectangle, uint32_t stride, uint32_t size, void* data)
        {
                CopyPixels(&rectangle, stride, size, data.ToPointer());
            }

            void CopyPixels(uint32_t stride, const std::vector<uint8_t>& data)
        {
                fixed (byte* dataPtr = data)
                {
                    CopyPixels(nullptr, stride, (uint)data.Length, dataPtr);
                }
            }

            void CopyPixels(RectI rectangle, uint32_t stride, const std::vector<uint8_t>& data)
        {
                fixed (byte* dataPtr = &data)
                {
                    CopyPixels(&rectangle, stride, (uint)data.Length, dataPtr);
                }
            }

            public void CopyPixels<T>(uint stride, T[] data) where T : unmanaged
            {
                fixed (T* dataPtr = data)
                {
                    CopyPixels(nullptr, stride, (uint)(data.Length * sizeof(T)), dataPtr);
                }
            }

            public void CopyPixels<T>(RectI rectangle, uint stride, T[] data) where T : unmanaged
            {
                fixed (T* dataPtr = data)
                {
                    CopyPixels(&rectangle, stride, (uint)(data.Length * sizeof(T)), dataPtr);
                }
            }

            public void CopyPixels<T>(uint stride, Span<T> data) where T : unmanaged
            {
                fixed (T* dataPtr = data)
                {
                    CopyPixels(nullptr, stride, (uint)(data.Length * sizeof(T)), dataPtr);
                }
            }

            public void CopyPixels<T>(RectI rectangle, uint stride, Span<T> data) where T : unmanaged
            {
                fixed (T* dataPtr = data)
                {
                    CopyPixels(&rectangle, stride, (uint)(data.Length * sizeof(T)), dataPtr);
                }
            }
        }


    }
}

#endif // VORTICE_IWICBITMAPSOURCE_H