// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WPF_D3D11IMAGESOURCE_H
#define VORTICE_VORTICE_WPF_D3D11IMAGESOURCE_H

#include <cstdint>

namespace Vortice::Wpf {

struct D3D11ImageSource
{
    // Constructors
    constexpr D3D11ImageSource(Window parentWindow)
        : parentWindow(parentWindow) {}

};


} // namespace Vortice::Wpf

#endif // VORTICE_VORTICE_WPF_D3D11IMAGESOURCE_H
