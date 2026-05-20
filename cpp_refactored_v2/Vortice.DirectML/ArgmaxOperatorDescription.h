// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ARGMAXOPERATORDESCRIPTION_H
#define VORTICE_ARGMAXOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct ArgmaxOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.Argmax; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputTensor{};
                public int[] Axes { get; set; }
                public: AxisDirection m_axisDirection{};
                publicoverride std::string ToString(void) $"Argmax: AxisDirection={AxisDirection}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: int32_t AxisCount{};
                public: void* Axes{};
                public: AxisDirection AxisDirection{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->AxisCount = Axes.Length;
                @ref->Axes = new(UnsafeUtilities.AllocWithData(Axes));
                @ref->AxisDirection = AxisDirection;
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref->Axes);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(ArgmaxOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_ARGMAXOPERATORDESCRIPTION_H