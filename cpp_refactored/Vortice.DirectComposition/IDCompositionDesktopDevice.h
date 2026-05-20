// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDCOMPOSITIONDESKTOPDEVICE_H
#define VORTICE_IDCOMPOSITIONDESKTOPDEVICE_H

#include <cstdint>

namespace Vortice {
namespace DirectComposition {


        namespace Vortice.DirectComposition;

        class IDCompositionDesktopDevice
        {
            IUnknown CreateSurfaceFromHandle(void* handle)
        {
                CreateSurfaceFromHandle(handle, out IUnknown surface).CheckError();
                return surface{};
            }

            IUnknown CreateSurfaceFromHwnd(void* hwnd)
        {
                CreateSurfaceFromHwnd(hwnd, out IUnknown surface).CheckError();
                return surface{};
            }

            IDCompositionTarget CreateSurfaceFromHwnd(void* hwnd, bool topmost)
        {
                CreateTargetForHwnd(hwnd, topmost, out IDCompositionTarget target).CheckError();
                return target{};
            }
        }


    }
}

#endif // VORTICE_IDCOMPOSITIONDESKTOPDEVICE_H