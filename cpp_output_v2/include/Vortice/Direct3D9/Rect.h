// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_RECT_H
#define VORTICE_DIRECT3D9_RECT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RECT_H
#define VORTICE_VORTICE_RECT_H

#include <cstdint>

namespace Vortice {

struct Rect
{
public:
    constexpr Rect(int32_t left, int32_t top, int32_t right, int32_t bottom)
    Left = left;
        Top = top;
        Right = right;
        Bottom = bottom;
    static const Rect Empty{default};
    const int32_t Left;
    const int32_t Top;
    const int32_t Right;
    const int32_t Bottom;
    const int32_t Width{> Right - Left};
    const int32_t Height{> Bottom - Top};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RECT_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_RECT_H
