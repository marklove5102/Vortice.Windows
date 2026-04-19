// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BATCHNORMALIZATIONTRAININGOPERATORDESCRIPTION_H
#define VORTICE_BATCHNORMALIZATIONTRAININGOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct BatchNormalizationTrainingOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.BatchNormalizationTraining; }

                TensorDescription m_inputTensor{};

                TensorDescription m_scaleTensor{};

                TensorDescription m_biasTensor{};

                std::optional<TensorDescription> m_fusedAddTensor{};

                TensorDescription m_outputTensor{};

                TensorDescription m_outputMeanTensor{};

                TensorDescription m_outputVarianceTensor{};

                float m_epsilon{};

                std::optional<OperatorDescription> m_fusedActivation{};

                override std::string ToString(void)
        { $"BatchNormalizationTraining: Epsilon={Epsilon}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* ScaleTensor{};
                public: void* BiasTensor{};
                public: void* FusedAddTensor{};
                public: void* OutputTensor{};
                public: void* OutputMeanTensor{};
                public: void* OutputVarianceTensor{};
                public: float Epsilon{};
                public: void* FusedActivation{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->ScaleTensor = ScaleTensor.__MarshalAlloc();
                @ref->BiasTensor = BiasTensor.__MarshalAlloc();
                @ref->FusedAddTensor = (FusedAddTensor != nullptr) ? FusedAddTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->OutputMeanTensor = OutputMeanTensor.__MarshalAlloc();
                @ref->OutputVarianceTensor = OutputVarianceTensor.__MarshalAlloc();
                @ref->Epsilon = Epsilon;
                @ref->FusedActivation = (FusedActivation != nullptr) ? FusedActivation.Value.__MarshalAlloc() : IntPtr.Zero;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                ScaleTensor.__MarshalFree(ref @ref->ScaleTensor);
                BiasTensor.__MarshalFree(ref @ref->BiasTensor);

                if (FusedAddTensor != nullptr)
                {
                    FusedAddTensor.Value.__MarshalFree(ref @ref->FusedAddTensor);
                }

                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                OutputMeanTensor.__MarshalFree(ref @ref->OutputMeanTensor);
                OutputVarianceTensor.__MarshalFree(ref @ref->OutputVarianceTensor);

                if (FusedActivation != nullptr)
                {
                    FusedActivation.Value.__MarshalFree(ref @ref->FusedActivation);
                }

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(BatchNormalizationTrainingOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_BATCHNORMALIZATIONTRAININGOPERATORDESCRIPTION_H