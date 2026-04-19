// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ELEMENTWISEISNANOPERATORDESCRIPTION_H
#define VORTICE_ELEMENTWISEISNANOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct ElementWiseIsNanOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.ElementWiseIsNan; }

                TensorDescription m_inputTensor{};

                TensorDescription m_outputTensor{};

                override std::string ToString(void)
        { $"ElementWiseIsNan";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(ElementWiseIsNanOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_ELEMENTWISEISNANOPERATORDESCRIPTION_H