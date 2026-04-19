// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IWICBITMAP_H
#define VORTICE_DIRECT2D1_IWICBITMAP_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IWICBITMAP_H
#define VORTICE_VORTICE_IWICBITMAP_H

#include <cstdint>

namespace Vortice {

class IWICBitmap
{
public:
    ~IWICBitmap() = default;

    IWICBitmapLock Lock() { return Lock(&lockRectangle, flags); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IWICBITMAP_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IWICBITMAP_H
