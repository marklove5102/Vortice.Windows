// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONTRANSITIONLIBRARY2_H
#define VORTICE_IUIANIMATIONTRANSITIONLIBRARY2_H

#include <cstdint>
#include <guiddef.h>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;
        publicclass IUIAnimationTransitionLibrary2
        {
            private: static const GUID CLSID_UIAnimationTransitionLibrary2{};
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