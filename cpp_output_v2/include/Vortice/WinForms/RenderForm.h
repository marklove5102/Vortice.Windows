// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WINFORMS_RENDERFORM_H
#define VORTICE_WINFORMS_RENDERFORM_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RENDERFORM_H
#define VORTICE_VORTICE_RENDERFORM_H

#include <cstdint>

namespace Vortice {

class RenderForm : public Form
{
public:
    constexpr RenderForm()
    {}

    constexpr RenderForm(std::string text)
    Text = text;
        ClientSize = new Size(800, 600);
        //MinimumSize = new System.Drawing.Size(200, 200);

        ResizeRedraw = true;
        SetStyle(ControlStyles.AllPaintingInWmPaint | ControlStyles.UserPaint, true);

        //Icon = Desktop.Properties.Resources.logo;

        _previousWindowState = FormWindowState.Normal;
        AllowUserResizing = true;
    ~RenderForm() = default;

    bool IsFullscreen{};


private:
    Size _cachedSize;
    FormWindowState _previousWindowState;
    DisplayMonitor monitor;
    bool _isUserResizing;
    bool _allowUserResizing;
    bool _isBackgroundFirstDraw;
    bool _isSizeChangedWithoutResizeBegin;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RENDERFORM_H

} // namespace Vortice

#endif // VORTICE_WINFORMS_RENDERFORM_H
