// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WPF_DRAWINGSURFACEEVENTARGS_H
#define VORTICE_VORTICE_WPF_DRAWINGSURFACEEVENTARGS_H

#include <cstdint>

namespace Vortice::Wpf {

struct DrawingSurfaceEventArgs
{
    // Constructors
    constexpr DrawingSurfaceEventArgs(ID3D11Device1 device, ID3D11DeviceContext1 context)
        : device(device),
          context(context) {}

};


} // namespace Vortice::Wpf

#endif // VORTICE_VORTICE_WPF_DRAWINGSURFACEEVENTARGS_H
