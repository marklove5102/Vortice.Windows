// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONTRANSITIONLIBRARY2_H
#define VORTICE_IUIANIMATIONTRANSITIONLIBRARY2_H

#include <cstdint>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;

        class IUIAnimationTransitionLibrary2
        {
            private: static const Guid CLSID_UIAnimationTransitionLibrary2{};

                        public IUIAnimationTransitionLibrary2(void)
        {
                ComUtilities.CreateComInstance(CLSID_UIAnimationTransitionLibrary2,
                    ComContext.InprocServer,
                    typeof(IUIAnimationTransitionLibrary2).GUID,
                    this);
            }
        }


    }
}

#endif // VORTICE_IUIANIMATIONTRANSITIONLIBRARY2_H