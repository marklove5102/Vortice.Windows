// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_LOCALRESPONSENORMALIZATIONGRADIENTOPERATORDESCRIPTION_H
#define VORTICE_LOCALRESPONSENORMALIZATIONGRADIENTOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct LocalResponseNormalizationGradientOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.LocalResponseNormalizationGradient; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_inputGradientTensor{};
                public: TensorDescription m_outputGradientTensor{};
                public: bool m_crossChannel{};
                public: int32_t m_localSize{};
                public: float m_alpha{};
                public: float m_beta{};
                public: float m_bias{};
                publicoverride std::string ToString(void) $"LocalResponseNormalizationGradient: CrossChannel={CrossChannel} LocalSize={LocalSize} Alpha={Alpha} Beta={Beta} Bias={Bias}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* InputGradientTensor{};
                public: void* OutputGradientTensor{};
                public: bool CrossChannel{};
                public: int32_t LocalSize{};
                public: float Alpha{};
                public: float Beta{};
                public: float Bias{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->InputGradientTensor = InputGradientTensor.__MarshalAlloc();
                @ref->OutputGradientTensor = OutputGradientTensor.__MarshalAlloc();
                @ref->CrossChannel = CrossChannel;
                @ref->LocalSize = LocalSize;
                @ref->Alpha = Alpha;
                @ref->Beta = Beta;
                @ref->Bias = Bias;
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                InputGradientTensor.__MarshalFree(ref @ref->InputGradientTensor);
                OutputGradientTensor.__MarshalFree(ref @ref->OutputGradientTensor);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(LocalResponseNormalizationGradientOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_LOCALRESPONSENORMALIZATIONGRADIENTOPERATORDESCRIPTION_H