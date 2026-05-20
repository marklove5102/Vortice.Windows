// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_SPLITOPERATORDESCRIPTION_H
#define VORTICE_SPLITOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct SplitOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.Split; }

                TensorDescription m_inputTensor{};

                public TensorDescription[] OutputTensors { get; set; }

                int32_t m_axis{};

                override std::string ToString(void)
        { $"Split: Axis={Axis}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: int32_t OutputCount{};
                public: void* OutputTensors{};
                public: int32_t Axis{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputCount = OutputTensors.Length;

                @ref->OutputTensors = IntPtr.Zero;
                if (OutputTensors.Length != 0)
                {
                    var outputTensorsPtr{};
                    for (int32_t i{}; i < OutputTensors.Length; i++)
                    {
                        OutputTensors.__MarshalTo(ref outputTensorsPtr);
                    }
                    @ref->OutputTensors = new(outputTensorsPtr);
                }

                @ref->Axis = Axis;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);

                if (@ref->OutputTensors != IntPtr.Zero)
                {
                    var outputTensorsPtr{};
                    for (int32_t i{}; i < OutputTensors.Length; i++)
                    {
                        OutputTensors.__MarshalFree(ref outputTensorsPtr);
                    }
                    UnsafeUtilities.Free(@ref->OutputTensors);
                }

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(SplitOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_SPLITOPERATORDESCRIPTION_H