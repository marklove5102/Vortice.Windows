// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGISWAPCHAIN1_H
#define VORTICE_IDXGISWAPCHAIN1_H

#include <cstdint>
#include <optional>
#include <span>
#include <guiddef.h>

namespace Vortice {
namespace DXGI {

        namespace Vortice.DXGI;
        publicclass IDXGISwapChain1
        {
                            publicintptr_t GetHwnd(void)
                {
                if (GetHwnd(out nint hwnd).Failure)
                {
                    return 0{};
                }
                return hwnd{};
            }
                                public T GetCoreWindow<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ComObject
            {
                GetCoreWindow(typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
                                    public Result GetCoreWindow<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? coreWindow) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    coreWindow = default;
                    return default{};
                }
                coreWindow = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
                        publicResult Present1(uint32_t syncInterval, PresentFlags presentFlags, PresentParameters presentParameters)
                {
                bool hasScrollRectangle{};
                bool hasScrollOffset{};
                RawRect scrollRectangle{};
                Int2 scrollOffset{};
                fixed (RawRect* pDirtyRects = presentParameters.DirtyRectangles)
                {
                    PresentParameters.__Native native{};
                    native.DirtyRectsCount = presentParameters.DirtyRectangles != nullptr ? presentParameters.DirtyRectangles.Length : 0;
                    native.pDirtyRects = pDirtyRects;
                    native.pScrollRect = hasScrollRectangle ? &scrollRectangle : nullptr;
                    native.pScrollOffset = hasScrollOffset ? &scrollOffset : nullptr;
                    return Present1(void);
                }
            }
            publicResult Present1(uint32_t syncInterval, PresentFlags presentFlags, const std::span<const RawRect>& dirtyRectangles, const std::optional<RawRect>& scrollRectangle, const std::optional<Int2>& scrollOffset)
                {
                bool hasScrollRectangle{};
                bool hasScrollOffset{};
                RawRect scrollRectangleCall{};
                Int2 scrollOffsetCall{};
                fixed (RawRect* pDirtyRects = dirtyRectangles)
                {
                    PresentParameters.__Native native{};
                    native.DirtyRectsCount = dirtyRectangles.Length > 0 ? dirtyRectangles.Length : 0;
                    native.pDirtyRects = pDirtyRects;
                    native.pScrollRect = hasScrollRectangle ? &scrollRectangleCall : nullptr;
                    native.pScrollOffset = hasScrollOffset ? &scrollOffsetCall : nullptr;
                    return Present1(void);
                }
            }
        }

    }
}

#endif // VORTICE_IDXGISWAPCHAIN1_H