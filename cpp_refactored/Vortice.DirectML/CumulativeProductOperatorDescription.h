// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_CUMULATIVEPRODUCTOPERATORDESCRIPTION_H
#define VORTICE_CUMULATIVEPRODUCTOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct CumulativeProductOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.CumulativeProduct; }

                TensorDescription m_inputTensor{};

                TensorDescription m_outputTensor{};

                int32_t m_axis{};

                AxisDirection m_axisDirection{};

                bool m_hasExclusiveProduct{};

                override std::string ToString(void)
        { $"CumulativeProduct: Axis={Axis} AxisDirection={AxisDirection} HasExclusiveProduct={HasExclusiveProduct}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: int32_t Axis{};
                public: AxisDirection AxisDirection{};
                public: bool HasExclusiveProduct{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->Axis = Axis;
                @ref->AxisDirection = AxisDirection;
                @ref->HasExclusiveProduct = HasExclusiveProduct;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(CumulativeProductOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_CUMULATIVEPRODUCTOPERATORDESCRIPTION_H