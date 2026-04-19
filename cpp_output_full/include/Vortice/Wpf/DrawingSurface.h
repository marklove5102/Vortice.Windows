// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WPF_DRAWINGSURFACE_H
#define VORTICE_WPF_DRAWINGSURFACE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DRAWINGSURFACE_H
#define VORTICE_VORTICE_DRAWINGSURFACE_H

#include <cstdint>

namespace Vortice {

class DrawingSurface : public Image
{
public:
    constexpr DrawingSurface()
    StretchProperty.OverrideMetadata(typeid(DrawingSurface), new FrameworkPropertyMetadata(Stretch.Fill));
    constexpr DrawingSurface()
    Loaded += OnLoaded;
        Unloaded += OnUnloaded;
    ~DrawingSurface() = default;

    static bool IsInDesignMode{> DesignerProperties.GetIsInDesignMode(new DependencyObject())};

    bool AlwaysRefresh{};
    int32_t TextureWidth{};
    int32_t TextureHeight{};
    Format ColorFormat{};
    Format DepthStencilFormat{};

    void Invalidate() { _contentNeedsRefresh = true; }


private:
    bool _isRendering;
    bool _contentNeedsRefresh;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_DRAWINGSURFACE_H

} // namespace Vortice

#endif // VORTICE_WPF_DRAWINGSURFACE_H
