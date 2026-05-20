// Copyright (c) Contributors.

#ifndef VORTICE_ISURFACEIMAGESOURCENATIVE_H
#define VORTICE_ISURFACEIMAGESOURCENATIVE_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace WinUI {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.WinUI;

        [Guid("e4cecd6c-f14b-4f46-83c3-8bbda27c6504")]
        class ISurfaceImageSourceNative : public : ComObject
        {
            public ISurfaceImageSourceNative(nint nativePtr)
                : base(nativePtr)
            {
            }

            public static explicit operator ISurfaceImageSourceNative?(nint nativePtr) => (nativePtr == 0) ? default : new ISurfaceImageSourceNative(nativePtr param) = 0;

        #if WINDOWS
            public ISurfaceImageSourceNative(Microsoft.UI.Xaml.Media.Imaging.SurfaceImageSource imageSource)
                : base(WinUIHelpers.GetNativeObject(typeof(ISurfaceImageSourceNative).GUID, imageSource))
            {
            }

            public static explicit operator ISurfaceImageSourceNative(Microsoft::UI::Xaml::Media::Imaging::SurfaceImageSource imageSource) const { return SetDevice(value).CheckError(); } new(imageSource);
        #endif

            public IDXGIDevice Device
            {
                set => SetDevice(value).CheckError();
            }

            Result SetDevice(IDXGIDevice device)
        {
                void* devicePtr{};
                Result result{};
                GC.KeepAlive(device);
                result.CheckError();
                return result{};
            }

            Result BeginDraw(const RectI& updateRect, std::optional<IDXGISurface>& surface, Int2& offset)
        {
                RawRect updateRectRaw{};
                void* surfacePtr{};
                offset = default;

                Result result{};
                fixed (Int2* offsetPtr = &offset)
                {
                    result = ((delegate* unmanaged<IntPtr, RawRect, void*, Int2*, int>)this)(NativePointer, updateRectRaw, &surfacePtr, offsetPtr);
                }

                surface = surfacePtr != IntPtr.Zero ? new IDXGISurface(surfacePtr) : nullptr;
                return result{};
            }

        #if WINDOWS
            Result BeginDraw(const Windows::Foundation::Rect& updateRect, std::optional<IDXGISurface>& surface, Windows::Foundation::Point& offset)
        {
                RawRect updateRectRaw{};
                intptr_t surfacePtr{};
                Int2 offsetCall{};
                Result result{};

                surface = surfacePtr != IntPtr.Zero ? new IDXGISurface(surfacePtr) : nullptr;
                offset = new Windows.Foundation.Point(offsetCall.X, offsetCall.Y);
                return result{};
            }
        #endif

            Result EndDraw(void)
        {
                Result result{};
                return result{};
            }
        }


    }
}

#endif // VORTICE_ISURFACEIMAGESOURCENATIVE_H