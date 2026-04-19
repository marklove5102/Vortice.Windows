// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_UIANIMATION_IUIANIMATIONTRANSITIONLIBRARY2_H
#define VORTICE_UIANIMATION_IUIANIMATIONTRANSITIONLIBRARY2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IUIANIMATIONTRANSITIONLIBRARY2_H
#define VORTICE_VORTICE_IUIANIMATIONTRANSITIONLIBRARY2_H

#include <cstdint>

namespace Vortice {

class IUIAnimationTransitionLibrary2
{
public:
    constexpr IUIAnimationTransitionLibrary2()
    ComUtilities.CreateComInstance(CLSID_UIAnimationTransitionLibrary2,
            ComContext.InprocServer,
            typeid(IUIAnimationTransitionLibrary2).GUID,
            this);
    ~IUIAnimationTransitionLibrary2() = default;


private:
    static const GUID CLSID_UIAnimationTransitionLibrary2{new("812F944A-C5C8-4CD9-B0A6-B3DA802F228D")};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IUIANIMATIONTRANSITIONLIBRARY2_H

} // namespace Vortice

#endif // VORTICE_UIANIMATION_IUIANIMATIONTRANSITIONLIBRARY2_H
