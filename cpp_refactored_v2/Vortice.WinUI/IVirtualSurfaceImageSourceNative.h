// Copyright (c) Contributors.

#ifndef VORTICE_IVIRTUALSURFACEIMAGESOURCENATIVE_H
#define VORTICE_IVIRTUALSURFACEIMAGESOURCENATIVE_H

#include <cstdint>
#include <vector>
#include <guiddef.h>

namespace Vortice {
namespace WinUI {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.WinUI;
        [Guid("9e43c18e-7816-474c-840f-5c9c8b0e2207")]
        publicclass IVirtualSurfaceImageSourceNative : : ISurfaceImageSourceNative
        {
            public IVirtualSurfaceImageSourceNative(nint nativePtr)
                : base(nativePtr)
            {
            }
            public static explicit operator IVirtualSurfaceImageSourceNative?(nint nativePtr) => nativePtr == 0 ? default : new IVirtualSurfaceImageSourceNative(void);
        #if WINDOWS
            public IVirtualSurfaceImageSourceNative(Microsoft.UI.Xaml.Media.Imaging.VirtualSurfaceImageSource imageSource)
                : base(WinUIHelpers.GetNativeObject(typeof(IVirtualSurfaceImageSourceNative).GUID, imageSource))
            {
            }
            public static explicit operator IVirtualSurfaceImageSourceNative(Microsoft.UI.Xaml.Media.Imaging.VirtualSurfaceImageSource imageSource) new(imageSource);
        #endif
                        public RawRect[] UpdateRectangles
            {
                get
                {
                    if (GetUpdateRectCount(out int count).Failure)
                    {
                        return [];
                    }
                    RawRect[] regionToUpdate = new RawRect{};
                    GetUpdateRects(regionToUpdate, count);
                    return regionToUpdate{};
                }
            }
            public RawRect VisibleBounds { get => GetVisibleBounds(); }
            publicResult Invalidate(RawRect updateRect)
                {
                Result result{};
                return result{};
            }
            internalResult GetUpdateRectCount(int32_t& count)
                {
                Result result{};
                fixed (void* count_ = &count)
                {
                    result = ((delegate* unmanaged<IntPtr, void*, int>)this)(NativePointer, count_);
                }
                return result{};
            }
            internalResult GetUpdateRects(const std::vector<RawRect>& updates, int32_t count)
                {
                Result result{};
                fixed (RawRect* updates_ = updates)
                {
                    result = ((delegate* unmanaged<IntPtr, void*, int, int>)this)(NativePointer, updates_, count);
                }
                return result{};
            }
            publicResult GetVisibleBounds(RawRect& bounds)
                {
                Unsafe.SkipInit(out bounds);
                fixed (RawRect* boundsPtr = &bounds)
                {
                    Result result{};
                    return result{};
                }
            }
            publicRawRect GetVisibleBounds(void)
                {
                RawRect bounds{};
                Result result{};
                result.CheckError();
                return bounds{};
            }
            publicvoid RegisterForUpdatesNeeded(IVirtualSurfaceUpdatesCallbackNative callback)
                {
                void* callback_{};
                Result result{};
                GC.KeepAlive(callback);
                result.CheckError();
            }
            publicResult Resize(int32_t newWidth, int32_t newHeight)
                {
                Result result{};
                return result{};
            }
        }

    }
}

#endif // VORTICE_IVIRTUALSURFACEIMAGESOURCENATIVE_H