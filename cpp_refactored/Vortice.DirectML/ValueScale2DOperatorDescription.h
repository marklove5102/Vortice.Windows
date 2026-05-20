// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VALUESCALE2DOPERATORDESCRIPTION_H
#define VORTICE_VALUESCALE2DOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct ValueScale2DOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.ValueScale2D; }

                TensorDescription m_inputTensor{};

                TensorDescription m_outputTensor{};

                float m_scale{};

                public float[] Bias { get; set; }

                override std::string ToString(void)
        { $"ValueScale2D: Scale={Scale}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: float Scale{};
                public: int32_t ChannelCount{};
                public: void* Bias{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->Scale = Scale;
                @ref->ChannelCount = Bias.Length;
                @ref->Bias = new(UnsafeUtilities.AllocWithData(Bias));

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref->Bias);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(ValueScale2DOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_VALUESCALE2DOPERATORDESCRIPTION_H