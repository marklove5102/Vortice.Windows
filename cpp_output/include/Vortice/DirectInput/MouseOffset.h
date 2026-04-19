// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTINPUT_MOUSEOFFSET_H
#define VORTICE_VORTICE_DIRECTINPUT_MOUSEOFFSET_H

#include <cstdint>

namespace Vortice::DirectInput {

enum class MouseOffset : int32_t
{
    X = 0,
    Y = 4,
    Z = 8,
    Buttons0 = 12,
    Buttons1 = 13,
    Buttons2 = 14,
    Buttons3 = 15,
    Buttons4 = 16,
    Buttons5 = 17,
    Buttons6 = 18,
    Buttons7 = 19
};


} // namespace Vortice::DirectInput

#endif // VORTICE_VORTICE_DIRECTINPUT_MOUSEOFFSET_H
