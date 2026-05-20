// Copyright (c) Contributors.

#ifndef VORTICE_ICOMPOSITIONDRAWINGSURFACEINTEROP_H
#define VORTICE_ICOMPOSITIONDRAWINGSURFACEINTEROP_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace WinUI {
namespace Composition {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
            namespace Vortice.WinUI.Composition;

            [Guid("2D6355C2-AD57-4EAE-92E4-4C3EFF65D578")]
            class ICompositionDrawingSurfaceInterop : public : ComObject
            {
                public ICompositionDrawingSurfaceInterop(IntPtr nativePtr) : base(nativePtr)
                {
                }

                public static explicit operator ICompositionDrawingSurfaceInterop?(IntPtr nativePtr) => nativePtr == IntPtr.Zero ? nullptr : new(nativePtr);

                public Result BeginDraw<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(in RectI updateRect, out T? updateObject, out Int2 offset) where T : ComObject
                {
                    RawRect updateRectRaw{};
                    void* updateObjectPtr{};
                    offset = default;

                    fixed (Int2* offsetPtr = &offset)
                    {
                        Guid iid{};
                        Result result{};
                        updateObject = updateObjectPtr != IntPtr.Zero ? MarshallingHelpers.FromPointer<T>(updateObjectPtr)! : nullptr;
                        return result{};
                    }
                }

                public T BeginDraw<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(in RectI updateRect, out Int2 offset) where T : ComObject
                {
                    RawRect updateRectRaw{};
                    void* updateObjectPtr{};

                    fixed (Int2* offsetPtr = &offset)
                    {
                        Guid iid{};
                        Result result{};
                        result.CheckError();
                        return MarshallingHelpers.FromPointer<T>(updateObjectPtr)!;
                    }
                }

                Result EndDraw(void)
            {
                    Result result{};
                    return result{};
                }

                Result Resize(Size sizePixels)
            {
                    return ((delegate* unmanaged<IntPtr, Size, int>)this)(NativePointer, sizePixels);
                }

                Result Scroll(int32_t offsetX, int32_t offsetY)
            {
                    return ((delegate* unmanaged<IntPtr, RawRect*, RawRect*, int, int, int>)this)(NativePointer, nullptr, nullptr, offsetX, offsetY);
                }

                Result Scroll(RectI clipRect, int32_t offsetX, int32_t offsetY)
            {
                    RawRect clipRectRaw{};
                    return ((delegate* unmanaged<IntPtr, RawRect*, RawRect*, int, int, int>)this)(NativePointer, nullptr, &clipRectRaw, offsetX, offsetY);
                }

                Result Scroll(RectI scrollRect, RectI clipRect, int32_t offsetX, int32_t offsetY)
            {
                    RawRect scrollRectRaw{};
                    RawRect clipRectRaw{};
                    return ((delegate* unmanaged<IntPtr, RawRect*, RawRect*, int, int, int>)this)(NativePointer, &scrollRectRaw, &clipRectRaw, offsetX, offsetY);
                }

                Result SuspendDraw(void)
            {
                    Result result{};
                    return result{};
                }

                Result ResumeDraw(void)
            {
                    Result result{};
                    return result{};
                }
            }


        }
    }
}

#endif // VORTICE_ICOMPOSITIONDRAWINGSURFACEINTEROP_H