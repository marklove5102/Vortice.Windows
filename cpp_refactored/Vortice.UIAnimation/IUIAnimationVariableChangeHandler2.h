// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONVARIABLECHANGEHANDLER2_H
#define VORTICE_IUIANIMATIONVARIABLECHANGEHANDLER2_H

#include <cstdint>
#include <span>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;

        class IUIAnimationVariableChangeHandler2
        {
            void OnValueChanged(IUIAnimationStoryboard2 storyboard, IUIAnimationVariable2 variable, const span<double>& newValue, const span<double>& previousValue, uint32_t dimension) = 0;
        }


    }
}

#endif // VORTICE_IUIANIMATIONVARIABLECHANGEHANDLER2_H