// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONVARIABLECHANGEHANDLER2VTBL_H
#define VORTICE_IUIANIMATIONVARIABLECHANGEHANDLER2VTBL_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;

        internal static class IUIAnimationVariableChangeHandler2Vtbl
        {
            private static unsafe partial int32_t OnValueChangedImpl_(void* thisObject, void* _storyboard, void* _variable, void* _newValue, void* _previousValue, uint32_t _cDimension)
        {
                IUIAnimationVariableChangeHandler2 @this = CppObjectShadow.ToCallback<IUIAnimationVariableChangeHandler2>(thisObject);

                try
                {
                    Span newValue{};
                    Span previousValue{};
                    new Span<double>(_newValue, newValue.Length).CopyTo(newValue);
                    new Span<double>(_previousValue, previousValue.Length).CopyTo(previousValue);
                    IUIAnimationStoryboard2 storyboard{};
                    IUIAnimationVariable2 variable{};
                    @this.OnValueChanged(storyboard, variable, newValue, previousValue, _cDimension);
                    return Result.Ok.Code;
                }
                catch (Exception __exception__)
                {
                    (@this as IExceptionCallback)?.RaiseException(__exception__);
                    return Result.GetResultFromException(__exception__).Code;
                }
            }
        }


    }
}

#endif // VORTICE_IUIANIMATIONVARIABLECHANGEHANDLER2VTBL_H