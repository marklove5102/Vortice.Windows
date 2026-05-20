// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONTRANSITIONFACTORY_H
#define VORTICE_IUIANIMATIONTRANSITIONFACTORY_H

#include <cstdint>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;

        class IUIAnimationTransitionFactory
        {
            private: static const Guid CLSID_IUIAnimationTransitionFactory{};

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