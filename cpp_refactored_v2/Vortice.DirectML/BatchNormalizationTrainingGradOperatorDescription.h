// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BATCHNORMALIZATIONTRAININGGRADOPERATORDESCRIPTION_H
#define VORTICE_BATCHNORMALIZATIONTRAININGGRADOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct BatchNormalizationTrainingGradOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.BatchNormalizationTrainingGrad; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_inputGradientTensor{};
                public: TensorDescription m_meanTensor{};
                public: TensorDescription m_varianceTensor{};
                public: TensorDescription m_scaleTensor{};
                public: TensorDescription m_outputGradientTensor{};
                public: TensorDescription m_outputScaleGradientTensor{};
                public: TensorDescription m_outputBiasGradientTensor{};
                public: float m_epsilon{};
                publicoverride std::string ToString(void) $"BatchNormalizationTrainingGrad: Epsilon={Epsilon}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* InputGradientTensor{};
                public: void* MeanTensor{};
                public: void* VarianceTensor{};
                public: void* ScaleTensor{};
                public: void* OutputGradientTensor{};
                public: void* OutputScaleGradientTensor{};
                public: void* OutputBiasGradientTensor{};
                public: float Epsilon{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->InputGradientTensor = InputGradientTensor.__MarshalAlloc();
                @ref->MeanTensor = MeanTensor.__MarshalAlloc();
                @ref->VarianceTensor = VarianceTensor.__MarshalAlloc();
                @ref->ScaleTensor = ScaleTensor.__MarshalAlloc();
                @ref->OutputGradientTensor = OutputGradientTensor.__MarshalAlloc();
                @ref->OutputScaleGradientTensor = OutputScaleGradientTensor.__MarshalAlloc();
                @ref->OutputBiasGradientTensor = OutputBiasGradientTensor.__MarshalAlloc();
                @ref->Epsilon = Epsilon;
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                InputGradientTensor.__MarshalFree(ref @ref->InputGradientTensor);
                MeanTensor.__MarshalFree(ref @ref->MeanTensor);
                VarianceTensor.__MarshalFree(ref @ref->VarianceTensor);
                ScaleTensor.__MarshalFree(ref @ref->ScaleTensor);
                OutputGradientTensor.__MarshalFree(ref @ref->OutputGradientTensor);
                OutputScaleGradientTensor.__MarshalFree(ref @ref->OutputScaleGradientTensor);
                OutputBiasGradientTensor.__MarshalFree(ref @ref->OutputBiasGradientTensor);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(BatchNormalizationTrainingGradOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_BATCHNORMALIZATIONTRAININGGRADOPERATORDESCRIPTION_H