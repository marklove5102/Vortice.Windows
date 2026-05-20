// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_TOPKOPERATORDESCRIPTION_H
#define VORTICE_TOPKOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct TopKOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.TopK; }

                TensorDescription m_inputTensor{};

                TensorDescription m_outputValueTensor{};

                TensorDescription m_outputIndexTensor{};

                int32_t m_axis{};

                int32_t m_k{};

                override std::string ToString(void)
        { $"TopK: Axis={Axis} K={K}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputValueTensor{};
                public: void* OutputIndexTensor{};
                public: int32_t Axis{};
                public: int32_t K{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputValueTensor = OutputValueTensor.__MarshalAlloc();
                @ref->OutputIndexTensor = OutputIndexTensor.__MarshalAlloc();
                @ref->Axis = Axis;
                @ref->K = K;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputValueTensor.__MarshalFree(ref @ref->OutputValueTensor);
                OutputIndexTensor.__MarshalFree(ref @ref->OutputIndexTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(TopKOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_TOPKOPERATORDESCRIPTION_H