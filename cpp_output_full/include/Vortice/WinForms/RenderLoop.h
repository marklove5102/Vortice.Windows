// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WINFORMS_RENDERLOOP_H
#define VORTICE_WINFORMS_RENDERLOOP_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RENDERLOOP_H
#define VORTICE_VORTICE_RENDERLOOP_H

#include <cstdint>

namespace Vortice {

class RenderLoop : public IDisposable
{
public:
    constexpr RenderLoop()
    {}

    constexpr RenderLoop(Control control)
    Control = control;
    constexpr RenderLoop(form)
    UseApplicationDoEvents = useApplicationDoEvents
    ~RenderLoop() = default;

    bool UseApplicationDoEvents{};

    void Dispose() { Control = nullptr;
        GC.SuppressFinalize(this); }

    static void Run() { Run(context.MainForm, renderCallback); }


private:
    intptr_t _controlHandle;
    bool _isControlAlive;
    bool _switchControl;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RENDERLOOP_H

} // namespace Vortice

#endif // VORTICE_WINFORMS_RENDERLOOP_H
