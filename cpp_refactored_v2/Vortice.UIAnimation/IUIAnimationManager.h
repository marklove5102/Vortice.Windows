// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONMANAGER_H
#define VORTICE_IUIANIMATIONMANAGER_H

#include <cstdint>
#include <guiddef.h>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;
        publicclass IUIAnimationManager
        {
            private: static const GUID CLSID_UIAnimationManager{};
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