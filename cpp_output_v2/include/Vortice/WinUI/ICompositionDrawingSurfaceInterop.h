// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WINUI_ICOMPOSITIONDRAWINGSURFACEINTEROP_H
#define VORTICE_WINUI_ICOMPOSITIONDRAWINGSURFACEINTEROP_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ICOMPOSITIONDRAWINGSURFACEINTEROP_H
#define VORTICE_VORTICE_ICOMPOSITIONDRAWINGSURFACEINTEROP_H

#include <cstdint>

namespace Vortice {

class ICompositionDrawingSurfaceInterop : public ComObject
{
public:
    constexpr ICompositionDrawingSurfaceInterop(void* nativePtr)
    {}

    ~ICompositionDrawingSurfaceInterop() = default;

    HRESULT EndDraw() { Result result = ((delegate* unmanaged<IntPtr, int>)this[4])(NativePointer);
        return result; }

    HRESULT Resize() { return ((delegate* unmanaged<IntPtr, Size, int>)this[5])(NativePointer, sizePixels); }

    HRESULT Scroll() { return ((delegate* unmanaged<IntPtr, RawRect*, RawRect*, int, int, int>)this[6])(NativePointer, nullptr, nullptr, offsetX, offsetY); }

    HRESULT Scroll() { RawRect clipRectRaw = clipRect;
        return ((delegate* unmanaged<IntPtr, RawRect*, RawRect*, int, int, int>)this[6])(NativePointer, nullptr, &clipRectRaw, offsetX, offsetY); }

    HRESULT Scroll() { RawRect scrollRectRaw = scrollRect;
        RawRect clipRectRaw = clipRect;
        return ((delegate* unmanaged<IntPtr, RawRect*, RawRect*, int, int, int>)this[6])(NativePointer, &scrollRectRaw, &clipRectRaw, offsetX, offsetY); }

    HRESULT SuspendDraw() { Result result = ((delegate* unmanaged<IntPtr, int>)this[7])(NativePointer);
        return result; }

    HRESULT ResumeDraw() { Result result = ((delegate* unmanaged<IntPtr, int>)this[8])(NativePointer);
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ICOMPOSITIONDRAWINGSURFACEINTEROP_H

} // namespace Vortice

#endif // VORTICE_WINUI_ICOMPOSITIONDRAWINGSURFACEINTEROP_H
