// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_D3D11.INTEROP_H
#define VORTICE_DIRECT3D11_D3D11.INTEROP_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_D3D11_H
#define VORTICE_VORTICE_D3D11_H

#include <cstdint>

namespace Vortice {

class D3D11
{
public:
    ~D3D11() = default;

    static IDXGIDevice GetDXGIDevice() { IDirect3DDxgiInterfaceAccess dxgiSurfaceInterfaceAccess = (IDirect3DDxgiInterfaceAccess)direct3DDevice;
        return dxgiSurfaceInterfaceAccess.GetInterface<IDXGIDevice>(); }

    static IDXGISurface GetDXGISurface() { IDirect3DDxgiInterfaceAccess dxgiSurfaceInterfaceAccess = (IDirect3DDxgiInterfaceAccess)direct3DSurface;
        return dxgiSurfaceInterfaceAccess.GetInterface<IDXGISurface>(); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_D3D11_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_D3D11.INTEROP_H
