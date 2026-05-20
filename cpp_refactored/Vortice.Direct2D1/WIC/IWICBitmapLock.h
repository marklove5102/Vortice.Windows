// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICBITMAPLOCK_H
#define VORTICE_IWICBITMAPLOCK_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace WIC {


        namespace Vortice.WIC;

        class IWICBitmapLock
        {
            public SizeI Size
            {
                get
                {
                    GetSize(out uint width, out uint height);
                    return new((int)width, (int)height);
                }
            }

                        public DataRectangle Data
            {
                get
                {
                    void* pointer{};
                    return new DataRectangle(pointer param, Stride param) = 0;
                }
            }

            public Span<byte> GetDataPointer()
            {
                intptr_t pointer{};
                return new(pointer.ToPointer(), (int)size);
            }

            public Span<T> GetDataPointer<T>()
                where T : unmanaged
            {
                void* pointer{};
                return new(pointer.ToPointer(), (int)(size / sizeof(T)));
            }
        }


    }
}

#endif // VORTICE_IWICBITMAPLOCK_H