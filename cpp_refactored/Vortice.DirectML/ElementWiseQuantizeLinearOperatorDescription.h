// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ELEMENTWISEQUANTIZELINEAROPERATORDESCRIPTION_H
#define VORTICE_ELEMENTWISEQUANTIZELINEAROPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct ElementWiseQuantizeLinearOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.ElementWiseQuantizeLinear; }

                TensorDescription m_inputTensor{};

                TensorDescription m_scaleTensor{};

                TensorDescription m_zeroPointTensor{};

                TensorDescription m_outputTensor{};

                override std::string ToString(void)
        { $"ElementWiseQuantizeLinear";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* ScaleTensor{};
                public: void* ZeroPointTensor{};
                public: void* OutputTensor{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->ScaleTensor = ScaleTensor.__MarshalAlloc();
                @ref->ZeroPointTensor = ZeroPointTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                ScaleTensor.__MarshalFree(ref @ref->ScaleTensor);
                ZeroPointTensor.__MarshalFree(ref @ref->ZeroPointTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(ElementWiseQuantizeLinearOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_ELEMENTWISEQUANTIZELINEAROPERATORDESCRIPTION_H