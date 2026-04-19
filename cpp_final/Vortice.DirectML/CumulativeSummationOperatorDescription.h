// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_CUMULATIVESUMMATIONOPERATORDESCRIPTION_H
#define VORTICE_CUMULATIVESUMMATIONOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct CumulativeSummationOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.CumulativeSummation; }

                TensorDescription m_inputTensor{};

                TensorDescription m_outputTensor{};

                int32_t m_axis{};

                AxisDirection m_axisDirection{};

                bool m_hasExclusiveSum{};

                override std::string ToString(void)
        { $"CumulativeSummation: Axis={Axis} AxisDirection={AxisDirection} HasExclusiveSum={HasExclusiveSum}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: int32_t Axis{};
                public: AxisDirection AxisDirection{};
                public: bool HasExclusiveSum{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->Axis = Axis;
                @ref->AxisDirection = AxisDirection;
                @ref->HasExclusiveSum = HasExclusiveSum;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(CumulativeSummationOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_CUMULATIVESUMMATIONOPERATORDESCRIPTION_H