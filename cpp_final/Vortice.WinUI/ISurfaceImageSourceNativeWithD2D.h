// Copyright (c) Contributors.

#ifndef VORTICE_ISURFACEIMAGESOURCENATIVEWITHD2D_H
#define VORTICE_ISURFACEIMAGESOURCENATIVEWITHD2D_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace WinUI {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.WinUI;

        [Guid("cb833102-d5d1-448b-a31a-52a9509f24e6")]
        class ISurfaceImageSourceNativeWithD2D : public : ComObject
        {
            public ISurfaceImageSourceNativeWithD2D(nint nativePtr)
                : base(nativePtr)
            {
            }

            public static explicit operator ISurfaceImageSourceNativeWithD2D?(nint nativePtr)
            {
                return (nativePtr == 0) ? nullptr : new ISurfaceImageSourceNativeWithD2D(nativePtr param) = 0;
            }

            public IUnknown Device
            {
                set => SetDevice(value).CheckError();
            }

            Result SetDevice(IUnknown device)
        {
                void* device_{};
                Result result{};
                GC.KeepAlive(device);
                return result{};
            }

            public Result BeginDraw<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(in RectI updateRect, out T? updateObject, out Int2 offset) where T : ComObject
            {
                RawRect updateRectRaw{};
                Result result{};
                if (result.Failure)
                {
                    updateObject = default;
                    return result{};
                }

                updateObject = MarshallingHelpers.FromPointer<T>(updateObjectPtr);
                return result{};
            }

            public T BeginDraw<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(in RectI updateRect, out Int2 offset) where T : ComObject
            {
                RawRect updateRectRaw{};
                BeginDraw(updateRectRaw, typeof(T).GUID, out IntPtr updateObjectPtr, out offset).CheckError();
                return MarshallingHelpers.FromPointer<T>(updateObjectPtr)!;
            }

            Result BeginDraw(RawRect updateRect, Guid iid, void*& updateObject, Int2& offset)
        {
                offset = default;

                fixed (void* offset_ = &offset)
                fixed (void* updateObject_ = &updateObject)
                {
                    Result result{};
                    return result{};
                }
            }

            Result EndDraw(void)
        {
                Result result{};
                return result{};
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

#endif // VORTICE_ISURFACEIMAGESOURCENATIVEWITHD2D_H