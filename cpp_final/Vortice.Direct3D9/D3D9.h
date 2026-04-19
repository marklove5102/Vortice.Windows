// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_D3D9_H
#define VORTICE_D3D9_H

#include <cstdint>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;

        class D3D9
        {
            static IDirect3D9 Direct3DCreate9(void) const { return Direct3DCreate9Ex(SdkVersion, out result); } Direct3DCreate9(SdkVersion);

            static Result Direct3DCreate9Ex(IDirect3D9Ex& result)
        { Direct3DCreate9Ex(SdkVersion, out result);

            static IDirect3D9Ex Direct3DCreate9Ex(void)
        {
                Direct3DCreate9Ex(SdkVersion, out IDirect3D9Ex result).CheckError();
                return result{};
            }
        }


    }
}

#endif // VORTICE_D3D9_H