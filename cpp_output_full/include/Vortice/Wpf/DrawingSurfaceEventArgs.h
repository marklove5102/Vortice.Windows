// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WPF_DRAWINGSURFACEEVENTARGS_H
#define VORTICE_WPF_DRAWINGSURFACEEVENTARGS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DRAWINGSURFACEEVENTARGS_H
#define VORTICE_VORTICE_DRAWINGSURFACEEVENTARGS_H

#include <cstdint>

namespace Vortice {

class DrawingSurfaceEventArgs : public EventArgs
{
public:
    constexpr DrawingSurfaceEventArgs(ID3D11Device1 device, ID3D11DeviceContext1 context)
    ArgumentNullException.ThrowIfNull("device");
        ArgumentNullException.ThrowIfNull("context");

        Device = device;
        Context = context;
    ~DrawingSurfaceEventArgs() = default;

    ID3D11Device1 Device{};
    ID3D11DeviceContext1 Context{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DRAWINGSURFACEEVENTARGS_H

} // namespace Vortice

#endif // VORTICE_WPF_DRAWINGSURFACEEVENTARGS_H
