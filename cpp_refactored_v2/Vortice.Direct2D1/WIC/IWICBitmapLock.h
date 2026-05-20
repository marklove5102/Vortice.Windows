// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICBITMAPLOCK_H
#define VORTICE_IWICBITMAPLOCK_H

#include <cstdint>

namespace Vortice {
namespace WIC {


        namespace Vortice.WIC;
        publicclass IWICBitmapLock
        {
            public: SizeI m_size{};
                public: SizeI get_Size() const { return GetSize(width, height);
                    return new((int)width, (int)height);; }
                        public: DataRectangle m_data{};
                public: DataRectangle get_Data() const { return void* pointer{};
                    return new DataRectangle(void);; }
            publicSpan GetDataPointer(void)
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