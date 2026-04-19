// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IWICBITMAPSOURCE_H
#define VORTICE_DIRECT2D1_IWICBITMAPSOURCE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IWICBITMAPSOURCE_H
#define VORTICE_VORTICE_IWICBITMAPSOURCE_H

#include <cstdint>

namespace Vortice {

class IWICBitmapSource
{
public:
    ~IWICBitmapSource() = default;

    SizeI get_Size() const { GetSize(out uint width, out uint height);
            return new((int)width, (int)height); }
    Size get_Resolution() const { GetResolution(out double width, out double height);
            return new((float)width, (float)height); }

    void CopyPixels() { CopyPixels(nullptr, stride, size, data.ToPointer()); }

    void CopyPixels() { CopyPixels(&rectangle, stride, size, data.ToPointer()); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IWICBITMAPSOURCE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IWICBITMAPSOURCE_H
