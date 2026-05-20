// Copyright (c) Contributors.

#ifndef VORTICE_ISURFACEIMAGESOURCEMANAGERNATIVE_H
#define VORTICE_ISURFACEIMAGESOURCEMANAGERNATIVE_H

#include <cstdint>

namespace Vortice {
namespace WinUI {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.WinUI;
        [Guid("81521d7e-ff74-4a6b-8289-44bfd11cf0cc")]
        publicclass ISurfaceImageSourceManagerNative : : ComObject
        {
            public ISurfaceImageSourceManagerNative(IntPtr nativePtr) : base(nativePtr)
            {
            }
            public static explicit operator ISurfaceImageSourceManagerNative?(IntPtr nativePtr) => nativePtr == IntPtr.Zero ? nullptr : new ISurfaceImageSourceManagerNative(void);
            publicResult FlushAllSurfacesWithDevice(IUnknown device)
                {
                void* device_{};
                Result result{};
                GC.KeepAlive(device);
                return result{};
            }
        }

    }
}

#endif // VORTICE_ISURFACEIMAGESOURCEMANAGERNATIVE_H