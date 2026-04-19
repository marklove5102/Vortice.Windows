// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_REVERSESUBSEQUENCESOPERATORDESCRIPTION_H
#define VORTICE_REVERSESUBSEQUENCESOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct ReverseSubsequencesOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.ReverseSubsequences; }

                TensorDescription m_inputTensor{};

                TensorDescription m_sequenceLengthsTensor{};

                TensorDescription m_outputTensor{};

                int32_t m_axis{};

                override std::string ToString(void)
        { $"ReverseSubsequences: Axis={Axis}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* SequenceLengthsTensor{};
                public: void* OutputTensor{};
                public: int32_t Axis{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->SequenceLengthsTensor = SequenceLengthsTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->Axis = Axis;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                SequenceLengthsTensor.__MarshalFree(ref @ref->SequenceLengthsTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(ReverseSubsequencesOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_REVERSESUBSEQUENCESOPERATORDESCRIPTION_H