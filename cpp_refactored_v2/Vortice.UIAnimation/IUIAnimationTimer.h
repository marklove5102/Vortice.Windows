// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONTIMER_H
#define VORTICE_IUIANIMATIONTIMER_H

#include <cstdint>
#include <guiddef.h>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;
        publicclass IUIAnimationTimer
        {
            private: static const GUID CLSID_UIAnimationTimer{};
                        public IUIAnimationTimer(void)
                {
                ComUtilities.CreateComInstance(
                    CLSID_UIAnimationTimer,
                    ComContext.InprocServer,
                    typeof(IUIAnimationTimer).GUID,
                    this);
            }
                        public: bool get_IsEnabled() const { return IsEnabled_().Success; }
        }

    }
}

#endif // VORTICE_IUIANIMATIONTIMER_H