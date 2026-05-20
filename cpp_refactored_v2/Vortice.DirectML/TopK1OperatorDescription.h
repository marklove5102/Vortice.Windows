// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_TOPK1OPERATORDESCRIPTION_H
#define VORTICE_TOPK1OPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct TopK1OperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.TopK1; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputValueTensor{};
                public: TensorDescription m_outputIndexTensor{};
                public: int32_t m_axis{};
                public: int32_t m_k{};
                public: AxisDirection m_axisDirection{};
                publicoverride std::string ToString(void) $"TopK1: Axis={Axis} K={K} AxisDirection={AxisDirection}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputValueTensor{};
                public: void* OutputIndexTensor{};
                public: int32_t Axis{};
                public: int32_t K{};
                public: AxisDirection AxisDirection{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputValueTensor = OutputValueTensor.__MarshalAlloc();
                @ref->OutputIndexTensor = OutputIndexTensor.__MarshalAlloc();
                @ref->Axis = Axis;
                @ref->K = K;
                @ref->AxisDirection = AxisDirection;
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputValueTensor.__MarshalFree(ref @ref->OutputValueTensor);
                OutputIndexTensor.__MarshalFree(ref @ref->OutputIndexTensor);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(TopK1OperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_TOPK1OPERATORDESCRIPTION_H