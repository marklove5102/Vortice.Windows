// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTX_POINTERBUTTONCHANGETYPE_H
#define VORTICE_VORTICE_DIRECTX_POINTERBUTTONCHANGETYPE_H

#include <cstdint>

namespace Vortice::DirectX {

enum class PointerButtonChangeType : int32_t
{
    None,
    FirstButtonDown,
    FirstButtonUp,
    SecondButtonDown,
    SecondButtonUp,
    ThirdButtonDown,
    ThirdButtonUp,
    FourthButtonDown,
    FourthButtonUp,
    FifthButtonDown,
    FifthButtonUp
};


} // namespace Vortice::DirectX

#endif // VORTICE_VORTICE_DIRECTX_POINTERBUTTONCHANGETYPE_H
