// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WINUI_ISURFACEIMAGESOURCENATIVEWITHD2D_H
#define VORTICE_WINUI_ISURFACEIMAGESOURCENATIVEWITHD2D_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ISURFACEIMAGESOURCENATIVEWITHD2D_H
#define VORTICE_VORTICE_ISURFACEIMAGESOURCENATIVEWITHD2D_H

#include <cstdint>

namespace Vortice {

class ISurfaceImageSourceNativeWithD2D : public ComObject
{
public:
    constexpr ISurfaceImageSourceNativeWithD2D(intptr_t nativePtr)
    {}

    ~ISurfaceImageSourceNativeWithD2D() = default;


    HRESULT SetDevice() { IntPtr device_ = MarshallingHelpers.ToCallbackPtr<IUnknown>(device);
        Result result = ((delegate* unmanaged[Stdcall]<IntPtr, void*, int>)this[3])(NativePointer, (void*)device_);
        GC.KeepAlive(device);
        return result; }

    HRESULT EndDraw() { Result result = ((delegate* unmanaged<IntPtr, int>)this[5])(NativePointer);
        return result; }

    HRESULT SuspendDraw() { Result result = ((delegate* unmanaged<IntPtr, int>)this[6])(NativePointer);
        return result; }

    HRESULT ResumeDraw() { Result result = ((delegate* unmanaged<IntPtr, int>)this[7])(NativePointer);
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ISURFACEIMAGESOURCENATIVEWITHD2D_H

} // namespace Vortice

#endif // VORTICE_WINUI_ISURFACEIMAGESOURCENATIVEWITHD2D_H
