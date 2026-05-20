// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_LOCALRESPONSENORMALIZATIONOPERATORDESCRIPTION_H
#define VORTICE_LOCALRESPONSENORMALIZATIONOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct LocalResponseNormalizationOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.LocalResponseNormalization; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputTensor{};
                public: bool m_crossChannel{};
                public: int32_t m_localSize{};
                public: float m_alpha{};
                public: float m_beta{};
                public: float m_bias{};
                publicoverride std::string ToString(void) $"LocalResponseNormalization: CrossChannel={CrossChannel} LocalSize={LocalSize} Alpha={Alpha} Beta={Beta} Bias={Bias}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
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
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
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
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(LocalResponseNormalizationOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_LOCALRESPONSENORMALIZATIONOPERATORDESCRIPTION_H