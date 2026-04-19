// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BATCHNORMALIZATIONGRADOPERATORDESCRIPTION_H
#define VORTICE_BATCHNORMALIZATIONGRADOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct BatchNormalizationGradOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.BatchNormalizationGrad; }

                TensorDescription m_inputTensor{};

                TensorDescription m_inputGradientTensor{};

                TensorDescription m_meanTensor{};

                TensorDescription m_varianceTensor{};

                TensorDescription m_scaleTensor{};

                TensorDescription m_outputGradientTensor{};

                TensorDescription m_outputScaleGradientTensor{};

                TensorDescription m_outputBiasGradientTensor{};

                float m_epsilon{};

                override std::string ToString(void)
        { $"BatchNormalizationGrad: Epsilon={Epsilon}";
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

                return new(@ref param) = 0;
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

            public static implicit operator OperatorDescription(BatchNormalizationGradOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_BATCHNORMALIZATIONGRADOPERATORDESCRIPTION_H