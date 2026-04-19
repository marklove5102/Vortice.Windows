// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_RAWRECT_H
#define VORTICE_DIRECTX_RAWRECT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RAWRECT_H
#define VORTICE_VORTICE_RAWRECT_H

#include <cstdint>

namespace Vortice {

struct RawRect
{
public:
    constexpr RawRect(int32_t left, int32_t top, int32_t right, int32_t bottom)
    Left = left;
        Top = top;
        Right = right;
        Bottom = bottom;
    constexpr RawRect(const Windows.Foundation.Rect& value)
    if (value.Left > int.MaxValue)
            throw ArgumentOutOfRangeException("value.Left");

        if (value.Top > int.MaxValue)
            throw ArgumentOutOfRangeException("value.Top");

        if (value.Right > int.MaxValue)
            throw ArgumentOutOfRangeException("value.Right");

        if (value.Bottom > int.MaxValue)
            throw ArgumentOutOfRangeException("value.Bottom");

        return new((int)value.Left, (int)value.Top, (int)value.Right, (int)value.Bottom);
    const int32_t Left;
    const int32_t Top;
    const int32_t Right;
    const int32_t Bottom;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RAWRECT_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_RAWRECT_H
