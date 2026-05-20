// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICBITMAPSOURCE_H
#define VORTICE_IWICBITMAPSOURCE_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace WIC {


        namespace Vortice.WIC;
        publicclass IWICBitmapSource
        {
            public: SizeI m_size{};
                public: SizeI get_Size() const { return GetSize(width, height);
                    return new((int)width, (int)height);; }
            public: Size m_resolution{};
                public: Size get_Resolution() const { return GetResolution(width, height);
                    return new((float)width, (float)height);; }
            publicvoid CopyPixels(uint32_t stride, uint32_t size, void* data)
                {
                CopyPixels(nullptr, stride, size, data.ToPointer());
            }
            publicvoid CopyPixels(RectI rectangle, uint32_t stride, uint32_t size, void* data)
                {
                CopyPixels(&rectangle, stride, size, data.ToPointer());
            }
            publicvoid CopyPixels(uint32_t stride, const std::vector<uint8_t>& data)
                {
                fixed (byte* dataPtr = data)
                {
                    CopyPixels(nullptr, stride, (uint)data.Length, dataPtr);
                }
            }
            publicvoid CopyPixels(RectI rectangle, uint32_t stride, const std::vector<uint8_t>& data)
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