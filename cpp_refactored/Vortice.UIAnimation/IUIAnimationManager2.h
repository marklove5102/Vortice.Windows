// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONMANAGER2_H
#define VORTICE_IUIANIMATIONMANAGER2_H

#include <cstdint>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;

        class IUIAnimationManager2
        {
            private: static const Guid CLSID_UIAnimationManager2{};

                        public IUIAnimationManager2(void)
        {
                ComUtilities.CreateComInstance(CLSID_UIAnimationManager2,
                    ComContext.InprocServer,
                    typeof(IUIAnimationManager2).GUID,
                    this);
            }
        }


    }
}

#endif // VORTICE_IUIANIMATIONMANAGER2_H