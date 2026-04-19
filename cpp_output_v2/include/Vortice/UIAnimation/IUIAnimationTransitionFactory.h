// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_UIANIMATION_IUIANIMATIONTRANSITIONFACTORY_H
#define VORTICE_UIANIMATION_IUIANIMATIONTRANSITIONFACTORY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IUIANIMATIONTRANSITIONFACTORY_H
#define VORTICE_VORTICE_IUIANIMATIONTRANSITIONFACTORY_H

#include <cstdint>

namespace Vortice {

class IUIAnimationTransitionFactory
{
public:
    constexpr IUIAnimationTransitionFactory()
    ComUtilities.CreateComInstance(CLSID_IUIAnimationTransitionFactory,
            ComContext.InprocServer,
            typeid(IUIAnimationTransitionFactory).GUID,
            this);
    ~IUIAnimationTransitionFactory() = default;


private:
    static const GUID CLSID_IUIAnimationTransitionFactory{new("8A9B1CDD-FCD7-419c-8B44-42FD17DB1887")};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IUIANIMATIONTRANSITIONFACTORY_H

} // namespace Vortice

#endif // VORTICE_UIANIMATION_IUIANIMATIONTRANSITIONFACTORY_H
