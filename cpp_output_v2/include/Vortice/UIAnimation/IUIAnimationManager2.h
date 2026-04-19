// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_UIANIMATION_IUIANIMATIONMANAGER2_H
#define VORTICE_UIANIMATION_IUIANIMATIONMANAGER2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IUIANIMATIONMANAGER2_H
#define VORTICE_VORTICE_IUIANIMATIONMANAGER2_H

#include <cstdint>

namespace Vortice {

class IUIAnimationManager2
{
public:
    constexpr IUIAnimationManager2()
    ComUtilities.CreateComInstance(CLSID_UIAnimationManager2,
            ComContext.InprocServer,
            typeid(IUIAnimationManager2).GUID,
            this);
    ~IUIAnimationManager2() = default;


private:
    static const GUID CLSID_UIAnimationManager2{new("D25D8842-8884-4A4A-B321-091314379BDD")};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IUIANIMATIONMANAGER2_H

} // namespace Vortice

#endif // VORTICE_UIANIMATION_IUIANIMATIONMANAGER2_H
