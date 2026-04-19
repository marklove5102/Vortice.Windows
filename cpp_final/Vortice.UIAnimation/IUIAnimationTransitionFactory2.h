// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONTRANSITIONFACTORY2_H
#define VORTICE_IUIANIMATIONTRANSITIONFACTORY2_H

#include <cstdint>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;

        class IUIAnimationTransitionFactory2
        {
            private: static const Guid CLSID_IUIAnimationTransitionFactory2{};

                        public IUIAnimationTransitionFactory2(void)
        {
                ComUtilities.CreateComInstance
                    (CLSID_IUIAnimationTransitionFactory2,
                    ComContext.InprocServer,
                    typeof(IUIAnimationTransitionFactory2).GUID,
                    this);
            }
        }


    }
}

#endif // VORTICE_IUIANIMATIONTRANSITIONFACTORY2_H