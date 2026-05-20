// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DYNAMICQUANTIZELINEAROPERATORDESCRIPTION_H
#define VORTICE_DYNAMICQUANTIZELINEAROPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct DynamicQuantizeLinearOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.DynamicQuantizeLinear; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputTensor{};
                public: TensorDescription m_outputScaleTensor{};
                public: TensorDescription m_outputZeroPointTensor{};
                publicoverride std::string ToString(void) $"DynamicQuantizeLinear";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: void* OutputScaleTensor{};
                public: void* OutputZeroPointTensor{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->OutputScaleTensor = OutputScaleTensor.__MarshalAlloc();
                @ref->OutputZeroPointTensor = OutputZeroPointTensor.__MarshalAlloc();
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                OutputScaleTensor.__MarshalFree(ref @ref->OutputScaleTensor);
                OutputZeroPointTensor.__MarshalFree(ref @ref->OutputZeroPointTensor);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(DynamicQuantizeLinearOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_DYNAMICQUANTIZELINEAROPERATORDESCRIPTION_H