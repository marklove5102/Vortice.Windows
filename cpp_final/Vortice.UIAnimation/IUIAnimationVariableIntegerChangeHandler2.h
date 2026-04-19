// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONVARIABLEINTEGERCHANGEHANDLER2_H
#define VORTICE_IUIANIMATIONVARIABLEINTEGERCHANGEHANDLER2_H

#include <cstdint>
#include <span>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;

        class IUIAnimationVariableIntegerChangeHandler2
        {
            void OnValueChanged(IUIAnimationStoryboard2 storyboard, IUIAnimationVariable2 variable, const span<int32_t>& newValue, const span<int32_t>& previousValue, uint32_t dimension) = 0;
        }


    }
}

#endif // VORTICE_IUIANIMATIONVARIABLEINTEGERCHANGEHANDLER2_H