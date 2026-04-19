// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WINUI_IVIRTUALSURFACEIMAGESOURCENATIVE_H
#define VORTICE_WINUI_IVIRTUALSURFACEIMAGESOURCENATIVE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IVIRTUALSURFACEIMAGESOURCENATIVE_H
#define VORTICE_VORTICE_IVIRTUALSURFACEIMAGESOURCENATIVE_H

#include <cstdint>

namespace Vortice {

class IVirtualSurfaceImageSourceNative : public ISurfaceImageSourceNative
{
public:
    constexpr IVirtualSurfaceImageSourceNative(intptr_t nativePtr)
    {}

    constexpr IVirtualSurfaceImageSourceNative(Microsoft.UI.Xaml.Media.Imaging.VirtualSurfaceImageSource imageSource)
    {}

    ~IVirtualSurfaceImageSourceNative() = default;

    RawRect get_VisibleBounds() const { GetVisibleBounds() }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IVIRTUALSURFACEIMAGESOURCENATIVE_H

} // namespace Vortice

#endif // VORTICE_WINUI_IVIRTUALSURFACEIMAGESOURCENATIVE_H
