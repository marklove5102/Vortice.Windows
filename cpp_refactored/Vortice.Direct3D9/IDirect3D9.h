// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3D9_H
#define VORTICE_IDIRECT3D9_H

#include <cstdint>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;

        class IDirect3D9
        {
            IDirect3DDevice9 CreateDevice(uint32_t adapter, DeviceType deviceType, void* focusWindow, CreateFlags createFlags, PresentParameters presentationParameters)
        {
                return CreateDevice(adapter, deviceType, focusWindow, (int)createFlags, ref presentationParameters);
            }

                                AdapterIdentifier GetAdapterIdentifier(uint32_t adapter)
        {
                return GetAdapterIdentifier(adapter param, 0 param) = 0;
            }
        }


    }
}

#endif // VORTICE_IDIRECT3D9_H