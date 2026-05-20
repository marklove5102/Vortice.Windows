// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ADAMOPTIMIZEROPERATORDESCRIPTION_H
#define VORTICE_ADAMOPTIMIZEROPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct AdamOptimizerOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.AdamOptimizer; }

                TensorDescription m_inputParametersTensor{};

                TensorDescription m_inputFirstMomentTensor{};

                TensorDescription m_inputSecondMomentTensor{};

                TensorDescription m_gradientTensor{};

                TensorDescription m_trainingStepTensor{};

                TensorDescription m_outputParametersTensor{};

                TensorDescription m_outputFirstMomentTensor{};

                TensorDescription m_outputSecondMomentTensor{};

                float m_learningRate{};

                float m_beta1{};

                float m_beta2{};

                float m_epsilon{};

                override std::string ToString(void)
        { $"AdamOptimizer: LearningRate={LearningRate} Beta1={Beta1} Beta2={Beta2} Epsilon={Epsilon}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputParametersTensor{};
                public: void* InputFirstMomentTensor{};
                public: void* InputSecondMomentTensor{};
                public: void* GradientTensor{};
                public: void* TrainingStepTensor{};
                public: void* OutputParametersTensor{};
                public: void* OutputFirstMomentTensor{};
                public: void* OutputSecondMomentTensor{};
                public: float LearningRate{};
                public: float Beta1{};
                public: float Beta2{};
                public: float Epsilon{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputParametersTensor = InputParametersTensor.__MarshalAlloc();
                @ref->InputFirstMomentTensor = InputFirstMomentTensor.__MarshalAlloc();
                @ref->InputSecondMomentTensor = InputSecondMomentTensor.__MarshalAlloc();
                @ref->GradientTensor = GradientTensor.__MarshalAlloc();
                @ref->TrainingStepTensor = TrainingStepTensor.__MarshalAlloc();
                @ref->OutputParametersTensor = OutputParametersTensor.__MarshalAlloc();
                @ref->OutputFirstMomentTensor = OutputFirstMomentTensor.__MarshalAlloc();
                @ref->OutputSecondMomentTensor = OutputSecondMomentTensor.__MarshalAlloc();
                @ref->LearningRate = LearningRate;
                @ref->Beta1 = Beta1;
                @ref->Beta2 = Beta2;
                @ref->Epsilon = Epsilon;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputParametersTensor.__MarshalFree(ref @ref->InputParametersTensor);
                InputFirstMomentTensor.__MarshalFree(ref @ref->InputFirstMomentTensor);
                InputSecondMomentTensor.__MarshalFree(ref @ref->InputSecondMomentTensor);
                GradientTensor.__MarshalFree(ref @ref->GradientTensor);
                TrainingStepTensor.__MarshalFree(ref @ref->TrainingStepTensor);
                OutputParametersTensor.__MarshalFree(ref @ref->OutputParametersTensor);
                OutputFirstMomentTensor.__MarshalFree(ref @ref->OutputFirstMomentTensor);
                OutputSecondMomentTensor.__MarshalFree(ref @ref->OutputSecondMomentTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(AdamOptimizerOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_ADAMOPTIMIZEROPERATORDESCRIPTION_H