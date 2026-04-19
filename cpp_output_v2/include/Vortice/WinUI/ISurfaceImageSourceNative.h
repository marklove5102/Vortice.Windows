// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WINUI_ISURFACEIMAGESOURCENATIVE_H
#define VORTICE_WINUI_ISURFACEIMAGESOURCENATIVE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ISURFACEIMAGESOURCENATIVE_H
#define VORTICE_VORTICE_ISURFACEIMAGESOURCENATIVE_H

#include <cstdint>

namespace Vortice {

class ISurfaceImageSourceNative : public ComObject
{
public:
    constexpr ISurfaceImageSourceNative(intptr_t nativePtr)
    {}

    constexpr ISurfaceImageSourceNative(Microsoft.UI.Xaml.Media.Imaging.SurfaceImageSource imageSource)
    {}

    ~ISurfaceImageSourceNative() = default;


    HRESULT SetDevice() { IntPtr devicePtr = MarshallingHelpers.ToCallbackPtr<IDXGIDevice>(device);
        Result result = ((delegate* unmanaged[Stdcall]<IntPtr, void*, int>)this[3])(NativePointer, (void*)devicePtr);
        GC.KeepAlive(device);
        result.CheckError();
        return result; }

    HRESULT BeginDraw() { RawRect updateRectRaw = updateRect;
        nint surfacePtr = IntPtr.Zero;
        Int2 offsetCall;
        Result result = ((delegate* unmanaged<IntPtr, RawRect, void*, Int2*, int>)this[4])(NativePointer, updateRectRaw, &surfacePtr, &offsetCall);

        surface = surfacePtr != IntPtr.Zero ? new IDXGISurface(surfacePtr) : nullptr;
        offset = new Windows.Foundation.Point(offsetCall.X, offsetCall.Y);
        return result; }

    HRESULT EndDraw() { Result result = ((delegate* unmanaged<IntPtr, int>)this[5])(NativePointer);
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ISURFACEIMAGESOURCENATIVE_H

} // namespace Vortice

#endif // VORTICE_WINUI_ISURFACEIMAGESOURCENATIVE_H
