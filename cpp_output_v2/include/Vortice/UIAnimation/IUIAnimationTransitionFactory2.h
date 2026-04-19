// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_UIANIMATION_IUIANIMATIONTRANSITIONFACTORY2_H
#define VORTICE_UIANIMATION_IUIANIMATIONTRANSITIONFACTORY2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IUIANIMATIONTRANSITIONFACTORY2_H
#define VORTICE_VORTICE_IUIANIMATIONTRANSITIONFACTORY2_H

#include <cstdint>

namespace Vortice {

class IUIAnimationTransitionFactory2
{
public:
    constexpr IUIAnimationTransitionFactory2()
    ComUtilities.CreateComInstance
            (CLSID_IUIAnimationTransitionFactory2,
            ComContext.InprocServer,
            typeid(IUIAnimationTransitionFactory2).GUID,
            this);
    ~IUIAnimationTransitionFactory2() = default;


private:
    static const GUID CLSID_IUIAnimationTransitionFactory2{new("84302F97-7F7B-4040-B190-72AC9D18E420")};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IUIANIMATIONTRANSITIONFACTORY2_H

} // namespace Vortice

#endif // VORTICE_UIANIMATION_IUIANIMATIONTRANSITIONFACTORY2_H
