// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WPF_DRAWEVENTARGS_H
#define VORTICE_WPF_DRAWEVENTARGS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DRAWEVENTARGS_H
#define VORTICE_VORTICE_DRAWEVENTARGS_H

#include <cstdint>

namespace Vortice {

class DrawEventArgs : public DrawingSurfaceEventArgs
{
public:
    constexpr DrawEventArgs(DrawingSurface surface, ID3D11Device1 device, ID3D11DeviceContext1 context)
    ArgumentNullException.ThrowIfNull("surface");

        Surface = surface;
    ~DrawEventArgs() = default;

    DrawingSurface Surface{};

    void InvalidateSurface() { Surface.Invalidate(); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DRAWEVENTARGS_H

} // namespace Vortice

#endif // VORTICE_WPF_DRAWEVENTARGS_H
