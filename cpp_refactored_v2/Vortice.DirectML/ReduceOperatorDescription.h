// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_REDUCEOPERATORDESCRIPTION_H
#define VORTICE_REDUCEOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct ReduceOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.Reduce; }
                public: ReduceFunction m_function{};
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputTensor{};
                public int[] Axes { get; set; }
                publicoverride std::string ToString(void) $"Reduce: Function={Function}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: ReduceFunction Function{};
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: int32_t AxisCount{};
                public: void* Axes{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->Function = Function;
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->AxisCount = Axes.Length;
                @ref->Axes = new(UnsafeUtilities.AllocWithData(Axes));
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
            public static implicit operator OperatorDescription(ReduceOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_REDUCEOPERATORDESCRIPTION_H