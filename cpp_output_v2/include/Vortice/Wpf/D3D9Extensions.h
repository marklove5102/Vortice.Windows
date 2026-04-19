// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WPF_D3D9EXTENSIONS_H
#define VORTICE_WPF_D3D9EXTENSIONS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_D3D9EXTENSIONS_H
#define VORTICE_VORTICE_D3D9EXTENSIONS_H

#include <cstdint>

namespace Vortice {

class D3D9Extensions
{
public:
    ~D3D9Extensions() = default;

    static bool IsShareable() { return texture.Description.MiscFlags.HasFlag(ResourceOptionFlags.Shared); }

    static intptr_t GetSharedHandle() { IDXGIResource resource = texture.QueryInterface<IDXGIResource>();
        nint result = resource.SharedHandle;
        resource.Dispose();
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_D3D9EXTENSIONS_H

} // namespace Vortice

#endif // VORTICE_WPF_D3D9EXTENSIONS_H
