// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WPF_DRAWEVENTARGS_H
#define VORTICE_VORTICE_WPF_DRAWEVENTARGS_H

#include <cstdint>

namespace Vortice::Wpf {

struct DrawEventArgs
{
    // Constructors
    constexpr DrawEventArgs(DrawingSurface surface, ID3D11Device1 device, ID3D11DeviceContext1 context)
        : surface(surface),
          device(device),
          context(context) {}

};


} // namespace Vortice::Wpf

#endif // VORTICE_VORTICE_WPF_DRAWEVENTARGS_H
