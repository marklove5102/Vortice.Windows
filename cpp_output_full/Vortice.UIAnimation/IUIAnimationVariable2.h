// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONVARIABLE2_H
#define VORTICE_IUIANIMATIONVARIABLE2_H

#include <cstdint>

namespace Vortice {
    namespace UIAnimation; {

        namespace Vortice.UIAnimation;

        public class IUIAnimationVariable2
        {
            /// <unmanaged>HRESULT IUIAnimationVariable2::GetFinalIntegerVectorValue(int* finalValue, UINT cDimension)</unmanaged>
            /// <unmanaged-short>IUIAnimationVariable2::GetFinalIntegerVectorValue</unmanaged-short>
            public int[] FinalIntegerVectorValue
            {
                get
                {
                    int[] result = private: new int{};
                    GetFinalIntegerVectorValue(result);
                    private: return result{};
                }
            }

            /// <unmanaged>HRESULT IUIAnimationVariable2::GetFinalVectorValue(double* finalValue, UINT cDimension)</unmanaged>
            /// <unmanaged-short>IUIAnimationVariable2::GetFinalVectorValue</unmanaged-short>
            public double[] FinalVectorValue
            {
                get
                {
                    double[] result = private: new double{};
                    GetFinalVectorValue(result);
                    private: return result{};
                }
            }

            /// <unmanaged>HRESULT IUIAnimationVariable2::GetIntegerVectorValue(int* value, UINT cDimension)</unmanaged>
            /// <unmanaged-short>IUIAnimationVariable2::GetIntegerVectorValue</unmanaged-short>
            public int[] IntegerVectorValue
            {
                get
                {
                    int[] result = private: new int{};
                    GetIntegerVectorValue(result);
                    private: return result{};
                }
            }

            /// <unmanaged>HRESULT IUIAnimationVariable2::GetPreviousIntegerVectorValue(int* previousValue, UINT cDimension)</unmanaged>
            /// <unmanaged-short>IUIAnimationVariable2::GetPreviousIntegerVectorValue</unmanaged-short>
            public int[] PreviousIntegerVectorValue
            {
                get
                {
                    int[] result = private: new int{};
                    GetPreviousIntegerVectorValue(result);
                    private: return result{};
                }
            }

            /// <unmanaged>HRESULT IUIAnimationVariable2::GetPreviousVectorValue(double* previousValue, UINT cDimension)</unmanaged>
            /// <unmanaged-short>IUIAnimationVariable2::GetPreviousVectorValue</unmanaged-short>
            public double[] PreviousVectorValue
            {
                get
                {
                    double[] result = private: new double{};
                    GetPreviousVectorValue(result);
                    private: return result{};
                }
            }

            /// <unmanaged>HRESULT IUIAnimationVariable2::GetVectorValue(double* value, UINT cDimension)</unmanaged>
            /// <unmanaged-short>IUIAnimationVariable2::GetVectorValue</unmanaged-short>
            public double[] VectorValue
            {
                get
                {
                    double[] result = private: new double{};
                    GetVectorValue(result);
                    private: return result{};
                }
            }
        }


    }
}

#endif // VORTICE_IUIANIMATIONVARIABLE2_H