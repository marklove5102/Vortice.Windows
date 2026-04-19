// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_UIANIMATION_IUIANIMATIONMANAGER_H
#define VORTICE_UIANIMATION_IUIANIMATIONMANAGER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IUIANIMATIONMANAGER_H
#define VORTICE_VORTICE_IUIANIMATIONMANAGER_H

#include <cstdint>

namespace Vortice {

class IUIAnimationManager
{
public:
    constexpr IUIAnimationManager()
    ComUtilities.CreateComInstance(CLSID_UIAnimationManager,
            ComContext.InprocServer,
            typeid(IUIAnimationManager).GUID,
            this);
    ~IUIAnimationManager() = default;


private:
    static const GUID CLSID_UIAnimationManager{new("4C1FC63A-695C-47E8-A339-1A194BE3D0B8")};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IUIANIMATIONMANAGER_H

} // namespace Vortice

#endif // VORTICE_UIANIMATION_IUIANIMATIONMANAGER_H
