// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_JOINOPERATORDESCRIPTION_H
#define VORTICE_JOINOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct JoinOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.Join; }

                public TensorDescription[] InputTensors { get; set; }

                TensorDescription m_outputTensor{};

                int32_t m_axis{};

                override std::string ToString(void)
        { $"Join: Axis={Axis}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t InputCount{};
                public: void* InputTensors{};
                public: void* OutputTensor{};
                public: int32_t Axis{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputCount = InputTensors.Length;

                @ref->InputTensors = IntPtr.Zero;
                if (InputTensors.Length != 0)
                {
                    var inputTensorsPtr{};
                    for (int32_t i{}; i < InputTensors.Length; i++)
                    {
                        InputTensors.__MarshalTo(ref inputTensorsPtr);
                    }
                    @ref->InputTensors = new(inputTensorsPtr);
                }

                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->Axis = Axis;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                if (@ref->InputTensors != IntPtr.Zero)
                {
                    var inputTensorsPtr{};
                    for (int32_t i{}; i < InputTensors.Length; i++)
                    {
                        InputTensors.__MarshalFree(ref inputTensorsPtr);
                    }
                    UnsafeUtilities.Free(@ref->InputTensors);
                }

                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(JoinOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_JOINOPERATORDESCRIPTION_H