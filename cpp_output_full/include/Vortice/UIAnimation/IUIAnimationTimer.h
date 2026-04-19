// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_UIANIMATION_IUIANIMATIONTIMER_H
#define VORTICE_UIANIMATION_IUIANIMATIONTIMER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IUIANIMATIONTIMER_H
#define VORTICE_VORTICE_IUIANIMATIONTIMER_H

#include <cstdint>

namespace Vortice {

class IUIAnimationTimer
{
public:
    constexpr IUIAnimationTimer()
    ComUtilities.CreateComInstance(
            CLSID_UIAnimationTimer,
            ComContext.InprocServer,
            typeid(IUIAnimationTimer).GUID,
            this);
    ~IUIAnimationTimer() = default;

    bool IsEnabled{> IsEnabled_().Success};


private:
    static const GUID CLSID_UIAnimationTimer{new("BFCD4A0C-06B6-4384-B768-0DAA792C380E")};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IUIANIMATIONTIMER_H

} // namespace Vortice

#endif // VORTICE_UIANIMATION_IUIANIMATIONTIMER_H
