// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_D3D9_H
#define VORTICE_DIRECT3D9_D3D9_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_D3D9_H
#define VORTICE_VORTICE_D3D9_H

#include <cstdint>

namespace Vortice {

class D3D9
{
public:
    ~D3D9() = default;

    static IDirect3D9Ex Direct3DCreate9Ex() { Direct3DCreate9Ex(SdkVersion, out IDirect3D9Ex result).CheckError();
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_D3D9_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_D3D9_H
