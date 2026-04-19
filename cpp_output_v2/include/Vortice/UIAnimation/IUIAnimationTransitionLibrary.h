// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_UIANIMATION_IUIANIMATIONTRANSITIONLIBRARY_H
#define VORTICE_UIANIMATION_IUIANIMATIONTRANSITIONLIBRARY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IUIANIMATIONTRANSITIONLIBRARY_H
#define VORTICE_VORTICE_IUIANIMATIONTRANSITIONLIBRARY_H

#include <cstdint>

namespace Vortice {

class IUIAnimationTransitionLibrary
{
public:
    constexpr IUIAnimationTransitionLibrary()
    ComUtilities.CreateComInstance(CLSID_UIAnimationTransitionLibrary,
            ComContext.InprocServer,
            typeid(IUIAnimationTransitionLibrary).GUID,
            this);
    ~IUIAnimationTransitionLibrary() = default;


private:
    static const GUID CLSID_UIAnimationTransitionLibrary{new("1D6322AD-AA85-4EF5-A828-86D71067D145")};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IUIANIMATIONTRANSITIONLIBRARY_H

} // namespace Vortice

#endif // VORTICE_UIANIMATION_IUIANIMATIONTRANSITIONLIBRARY_H
