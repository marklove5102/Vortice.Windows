// Copyright (c) Contributors.

#ifndef VORTICE_ICOMPOSITIONDRAWINGSURFACEINTEROP2_H
#define VORTICE_ICOMPOSITIONDRAWINGSURFACEINTEROP2_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace WinUI {
namespace Composition {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
            namespace Vortice.WinUI.Composition;

            [Guid("D4B71A65-3052-4ABE-9183-E98DE02A41A9")]
            class ICompositionDrawingSurfaceInterop2 : public : ComObject
            {
                public ICompositionDrawingSurfaceInterop2(IntPtr nativePtr) : base(nativePtr)
                {
                }

                public static explicit operator ICompositionDrawingSurfaceInterop2?(IntPtr nativePtr) => nativePtr == IntPtr.Zero ? nullptr : new(nativePtr);

                Result CopySurface(IUnknown destinationResource, int32_t destinationOffsetX, int32_t destinationOffsetY)
            {
                    void* destinationResourcePtr{};
                    return CopySurface(destinationResourcePtr param, destinationOffsetX param, destinationOffsetY param, nullptr param) = 0;
                }

                Result CopySurface(IUnknown destinationResource, int32_t destinationOffsetX, int32_t destinationOffsetY, const RectI& sourceRectangle)
            {
                    void* destinationResourcePtr{};
                    RawRect sourceRectangleRaw{};
                    return CopySurface(destinationResourcePtr param, destinationOffsetX param, destinationOffsetY param, &sourceRectangleRaw param) = 0;
                }

                Result CopySurface(void* destinationResource, int32_t destinationOffsetX, int32_t destinationOffsetY, RawRect* sourceRectangle)
            {
                    return ((delegate* unmanaged<IntPtr, IntPtr, int, int, RawRect *, int>)this)(NativePointer, destinationResource, destinationOffsetX, destinationOffsetY, sourceRectangle);
                }
            }


        }
    }
}

#endif // VORTICE_ICOMPOSITIONDRAWINGSURFACEINTEROP2_H