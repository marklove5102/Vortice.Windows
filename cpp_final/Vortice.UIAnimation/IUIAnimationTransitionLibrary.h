// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONTRANSITIONLIBRARY_H
#define VORTICE_IUIANIMATIONTRANSITIONLIBRARY_H

#include <cstdint>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;

        class IUIAnimationTransitionLibrary
        {
            private: static const Guid CLSID_UIAnimationTransitionLibrary{};

                        public IUIAnimationTransitionLibrary(void)
        {
                ComUtilities.CreateComInstance(CLSID_UIAnimationTransitionLibrary,
                    ComContext.InprocServer,
                    typeof(IUIAnimationTransitionLibrary).GUID,
                    this);
            }
        }


    }
}

#endif // VORTICE_IUIANIMATIONTRANSITIONLIBRARY_H