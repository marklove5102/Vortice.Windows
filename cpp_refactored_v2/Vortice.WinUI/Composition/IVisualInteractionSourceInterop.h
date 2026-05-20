// Copyright (c) Contributors.

#ifndef VORTICE_IVISUALINTERACTIONSOURCEINTEROP_H
#define VORTICE_IVISUALINTERACTIONSOURCEINTEROP_H

#include <cstdint>

namespace Vortice {
namespace WinUI {
namespace Composition {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
            namespace Vortice.WinUI.Composition;
            [Guid("AA170AEE-01D7-4954-89D2-8554415D6946")]
            publicclass IVisualInteractionSourceInterop : : ComObject
            {
                public IVisualInteractionSourceInterop(IntPtr nativePtr) : base(nativePtr)
                {
                }
                public static explicit operator IVisualInteractionSourceInterop?(IntPtr nativePtr) => nativePtr == IntPtr.Zero ? nullptr : new IVisualInteractionSourceInterop(void);
                publicResult TryRedirectForManipulation(PointerInfo& pointerInfo)
                    {
                    return ((delegate* unmanaged<IntPtr, ref PointerInfo, int>)this)(NativePointer, ref pointerInfo);
                }
            }

        }
    }
}

#endif // VORTICE_IVISUALINTERACTIONSOURCEINTEROP_H