// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONMANAGER_H
#define VORTICE_IUIANIMATIONMANAGER_H

#include <cstdint>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;

        class IUIAnimationManager
        {
            private: static const Guid CLSID_UIAnimationManager{};

                        public IUIAnimationManager(void)
        {
                ComUtilities.CreateComInstance(CLSID_UIAnimationManager,
                    ComContext.InprocServer,
                    typeof(IUIAnimationManager).GUID,
                    this);
            }
        }


    }
}

#endif // VORTICE_IUIANIMATIONMANAGER_H