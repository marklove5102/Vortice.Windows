// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_REDUCEOPERATORDESCRIPTION_H
#define VORTICE_REDUCEOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct ReduceOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.Reduce; }

                ReduceFunction m_function{};

                TensorDescription m_inputTensor{};

                TensorDescription m_outputTensor{};

                public int[] Axes { get; set; }

                override std::string ToString(void)
        { $"Reduce: Function={Function}";
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

                return new(@ref param) = 0;
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
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_REDUCEOPERATORDESCRIPTION_H