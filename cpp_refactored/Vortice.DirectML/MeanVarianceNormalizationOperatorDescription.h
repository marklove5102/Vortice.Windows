// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEANVARIANCENORMALIZATIONOPERATORDESCRIPTION_H
#define VORTICE_MEANVARIANCENORMALIZATIONOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct MeanVarianceNormalizationOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.MeanVarianceNormalization; }

                TensorDescription m_inputTensor{};

                std::optional<TensorDescription> m_scaleTensor{};

                std::optional<TensorDescription> m_biasTensor{};

                TensorDescription m_outputTensor{};

                bool m_crossChannel{};

                bool m_normalizeVariance{};

                float m_epsilon{};

                std::optional<OperatorDescription> m_fusedActivation{};

                override std::string ToString(void)
        { $"MeanVarianceNormalization: CrossChannel={CrossChannel} NormalizeVariance={NormalizeVariance} Epsilon={Epsilon}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* ScaleTensor{};
                public: void* BiasTensor{};
                public: void* OutputTensor{};
                public: bool CrossChannel{};
                public: bool NormalizeVariance{};
                public: float Epsilon{};
                public: void* FusedActivation{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->ScaleTensor = (ScaleTensor != nullptr) ? ScaleTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->BiasTensor = (BiasTensor != nullptr) ? BiasTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->CrossChannel = CrossChannel;
                @ref->NormalizeVariance = NormalizeVariance;
                @ref->Epsilon = Epsilon;
                @ref->FusedActivation = (FusedActivation != nullptr) ? FusedActivation.Value.__MarshalAlloc() : IntPtr.Zero;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);

                if (ScaleTensor != nullptr)
                {
                    ScaleTensor.Value.__MarshalFree(ref @ref->ScaleTensor);
                }

                if (BiasTensor != nullptr)
                {
                    BiasTensor.Value.__MarshalFree(ref @ref->BiasTensor);
                }

                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                if (FusedActivation != nullptr)
                {
                    FusedActivation.Value.__MarshalFree(ref @ref->FusedActivation);
                }

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(MeanVarianceNormalizationOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_MEANVARIANCENORMALIZATIONOPERATORDESCRIPTION_H