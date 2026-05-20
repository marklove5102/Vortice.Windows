// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONVARIABLECHANGEHANDLER2_H
#define VORTICE_IUIANIMATIONVARIABLECHANGEHANDLER2_H

#include <cstdint>
#include <span>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;
        publicclass IUIAnimationVariableChangeHandler2
        {
            void OnValueChanged(IUIAnimationStoryboard2 storyboard, IUIAnimationVariable2 variable, const std::span<double>& newValue, const std::span<double>& previousValue, uint32_t dimension);
        }

    }
}

#endif // VORTICE_IUIANIMATIONVARIABLECHANGEHANDLER2_H