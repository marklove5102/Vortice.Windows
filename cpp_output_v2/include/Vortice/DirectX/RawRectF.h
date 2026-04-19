// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_RAWRECTF_H
#define VORTICE_DIRECTX_RAWRECTF_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RAWRECTF_H
#define VORTICE_VORTICE_RAWRECTF_H

#include <cstdint>

namespace Vortice {

struct RawRectF
{
public:
    constexpr RawRectF(float left, float top, float right, float bottom)
    Left = left;
        Top = top;
        Right = right;
        Bottom = bottom;
    const float Left;
    const float Top;
    const float Right;
    const float Bottom;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RAWRECTF_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_RAWRECTF_H
