// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECT2D1_COLORMANAGEMENT_H
#define VORTICE_VORTICE_DIRECT2D1_COLORMANAGEMENT_H

#include <cstdint>

namespace Vortice::Direct2D1 {

struct ColorManagement
{
    // Constructors
    constexpr ColorManagement(ID2D1DeviceContext context)
        : context(context) {}

};


} // namespace Vortice::Direct2D1

#endif // VORTICE_VORTICE_DIRECT2D1_COLORMANAGEMENT_H
