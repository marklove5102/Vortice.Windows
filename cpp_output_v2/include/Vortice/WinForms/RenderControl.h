// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WINFORMS_RENDERCONTROL_H
#define VORTICE_WINFORMS_RENDERCONTROL_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RENDERCONTROL_H
#define VORTICE_VORTICE_RENDERCONTROL_H

#include <cstdint>

namespace Vortice {

class RenderControl : public UserControl
{
public:
    constexpr RenderControl()
    SetStyle(ControlStyles.AllPaintingInWmPaint | ControlStyles.Opaque | ControlStyles.UserPaint, true);
        UpdateStyles();
    ~RenderControl() = default;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RENDERCONTROL_H

} // namespace Vortice

#endif // VORTICE_WINFORMS_RENDERCONTROL_H
