// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3D9EX_H
#define VORTICE_IDIRECT3D9EX_H

#include <cstdint>
#include <vector>
#include <initializer_list>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;

        class IDirect3D9Ex
        {
            IDirect3DDevice9Ex CreateDeviceEx(uint32_t adapter, DeviceType deviceType, void* focusWindow, CreateFlags createFlags, PresentParameters presentationParameters)
        {
                return CreateDeviceEx(adapter, deviceType, focusWindow, (int)createFlags, , nullptr);
            }

            IDirect3DDevice9Ex CreateDeviceEx(uint32_t adapter, DeviceType deviceType, void* focusWindow, CreateFlags createFlags, PresentParameters presentationParameters, DisplayModeEx fullScreenDisplayMode)
        {
                return CreateDeviceEx(adapter, deviceType, focusWindow, (int)createFlags, , );
            }

            IDirect3DDevice9Ex CreateDeviceEx(uint32_t adapter, DeviceType deviceType, void* focusWindow, CreateFlags createFlags, std::initializer_list<std::vector<PresentParameters>> presentationParameters)
        {
                return CreateDeviceEx(adapter, deviceType, focusWindow, (int)createFlags, presentationParameters, nullptr);
            }

            IDirect3DDevice9Ex CreateDeviceEx(uint32_t adapter, DeviceType deviceType, void* focusWindow, CreateFlags createFlags, const std::vector<PresentParameters>& presentationParameters, const std::vector<DisplayModeEx>& fullScreenDisplayModes)
        {
                return CreateDeviceEx(adapter, deviceType, focusWindow, (int)createFlags, presentationParameters, fullScreenDisplayModes);
            }
        }


    }
}

#endif // VORTICE_IDIRECT3D9EX_H