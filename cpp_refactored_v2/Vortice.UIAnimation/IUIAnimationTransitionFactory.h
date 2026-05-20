// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONTRANSITIONFACTORY_H
#define VORTICE_IUIANIMATIONTRANSITIONFACTORY_H

#include <cstdint>
#include <guiddef.h>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;
        publicclass IUIAnimationTransitionFactory
        {
            private: static const GUID CLSID_IUIAnimationTransitionFactory{};
                        public IUIAnimationTransitionFactory(void)
                {
                ComUtilities.CreateComInstance(CLSID_IUIAnimationTransitionFactory,
                    ComContext.InprocServer,
                    typeof(IUIAnimationTransitionFactory).GUID,
                    this);
            }
        }

    }
}

#endif // VORTICE_IUIANIMATIONTRANSITIONFACTORY_H