// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BATCHNORMALIZATIONOPERATORDESCRIPTION_H
#define VORTICE_BATCHNORMALIZATIONOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct BatchNormalizationOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.BatchNormalization; }

                TensorDescription m_inputTensor{};

                TensorDescription m_meanTensor{};

                TensorDescription m_varianceTensor{};

                TensorDescription m_scaleTensor{};

                TensorDescription m_biasTensor{};

                TensorDescription m_outputTensor{};

                bool m_spatial{};

                float m_epsilon{};

                std::optional<OperatorDescription> m_fusedActivation{};

                override std::string ToString(void)
        { $"BatchNormalization: Spatial={Spatial} Epsilon={Epsilon}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* MeanTensor{};
                public: void* VarianceTensor{};
                public: void* ScaleTensor{};
                public: void* BiasTensor{};
                public: void* OutputTensor{};
                public: bool Spatial{};
                public: float Epsilon{};
                public: void* FusedActivation{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->MeanTensor = MeanTensor.__MarshalAlloc();
                @ref->VarianceTensor = VarianceTensor.__MarshalAlloc();
                @ref->ScaleTensor = ScaleTensor.__MarshalAlloc();
                @ref->BiasTensor = BiasTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->Spatial = Spatial;
                @ref->Epsilon = Epsilon;
                @ref->FusedActivation = (FusedActivation != nullptr) ? FusedActivation.Value.__MarshalAlloc() : IntPtr.Zero;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                MeanTensor.__MarshalFree(ref @ref->MeanTensor);
                VarianceTensor.__MarshalFree(ref @ref->VarianceTensor);
                ScaleTensor.__MarshalFree(ref @ref->ScaleTensor);
                BiasTensor.__MarshalFree(ref @ref->BiasTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                if (FusedActivation != nullptr)
                {
                    FusedActivation.Value.__MarshalFree(ref @ref->FusedActivation);
                }

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(BatchNormalizationOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_BATCHNORMALIZATIONOPERATORDESCRIPTION_H