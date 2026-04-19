// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IWICBITMAPLOCK_H
#define VORTICE_DIRECT2D1_IWICBITMAPLOCK_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IWICBITMAPLOCK_H
#define VORTICE_VORTICE_IWICBITMAPLOCK_H

#include <cstdint>

namespace Vortice {

class IWICBitmapLock
{
public:
    ~IWICBitmapLock() = default;

    SizeI get_Size() const { GetSize(out uint width, out uint height);
            return new((int)width, (int)height); }
    DataRectangle get_Data() const { IntPtr pointer = GetDataPointer(out _);
            return new DataRectangle(pointer, Stride); }

    std::span<uint8_t> GetDataPointer() { nint pointer = GetDataPointer(out uint size);
        return new(pointer.ToPointer(), (int)size); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IWICBITMAPLOCK_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IWICBITMAPLOCK_H
