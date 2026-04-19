// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WINUI_ICOMPOSITIONDRAWINGSURFACEINTEROP2_H
#define VORTICE_WINUI_ICOMPOSITIONDRAWINGSURFACEINTEROP2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ICOMPOSITIONDRAWINGSURFACEINTEROP2_H
#define VORTICE_VORTICE_ICOMPOSITIONDRAWINGSURFACEINTEROP2_H

#include <cstdint>

namespace Vortice {

class ICompositionDrawingSurfaceInterop2 : public ComObject
{
public:
    constexpr ICompositionDrawingSurfaceInterop2(void* nativePtr)
    {}

    ~ICompositionDrawingSurfaceInterop2() = default;

    HRESULT CopySurface() { IntPtr destinationResourcePtr = MarshallingHelpers.ToCallbackPtr<IUnknown>(destinationResource);
        return CopySurface(destinationResourcePtr, destinationOffsetX, destinationOffsetY, nullptr); }

    HRESULT CopySurface() { IntPtr destinationResourcePtr = MarshallingHelpers.ToCallbackPtr<IUnknown>(destinationResource);
        RawRect sourceRectangleRaw = sourceRectangle;
        return CopySurface(destinationResourcePtr, destinationOffsetX, destinationOffsetY, &sourceRectangleRaw); }


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ICOMPOSITIONDRAWINGSURFACEINTEROP2_H

} // namespace Vortice

#endif // VORTICE_WINUI_ICOMPOSITIONDRAWINGSURFACEINTEROP2_H
