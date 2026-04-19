// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IUIANIMATIONVARIABLE2_H
#define VORTICE_IUIANIMATIONVARIABLE2_H

#include <cstdint>

namespace Vortice {
namespace UIAnimation {


        namespace Vortice.UIAnimation;

        class IUIAnimationVariable2
        {
                    public int[] FinalIntegerVectorValue
            {
                get
                {
                    int[] result = new int{};
                    GetFinalIntegerVectorValue(result);
                    return result{};
                }
            }

                    public double[] FinalVectorValue
            {
                get
                {
                    double[] result = new double{};
                    GetFinalVectorValue(result);
                    return result{};
                }
            }

                    public int[] IntegerVectorValue
            {
                get
                {
                    int[] result = new int{};
                    GetIntegerVectorValue(result);
                    return result{};
                }
            }

                    public int[] PreviousIntegerVectorValue
            {
                get
                {
                    int[] result = new int{};
                    GetPreviousIntegerVectorValue(result);
                    return result{};
                }
            }

                    public double[] PreviousVectorValue
            {
                get
                {
                    double[] result = new double{};
                    GetPreviousVectorValue(result);
                    return result{};
                }
            }

                    public double[] VectorValue
            {
                get
                {
                    double[] result = new double{};
                    GetVectorValue(result);
                    return result{};
                }
            }
        }


    }
}

#endif // VORTICE_IUIANIMATIONVARIABLE2_H