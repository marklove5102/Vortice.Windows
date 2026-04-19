// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTX_POINTERINPUTTYPE_H
#define VORTICE_VORTICE_DIRECTX_POINTERINPUTTYPE_H

#include <cstdint>

namespace Vortice::DirectX {

enum class PointerInputType : int32_t
{
    Pointer = 1,
    Touch = 2,
    Pen = 3,
    Mouse = 4,
    Touchpad = 5
};


} // namespace Vortice::DirectX

#endif // VORTICE_VORTICE_DIRECTX_POINTERINPUTTYPE_H
